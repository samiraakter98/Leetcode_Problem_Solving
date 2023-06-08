class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        v = sorted(strs)
        first = v[0]
        last = v[-1]

        min_len = min(len(first), len(last))
        ans = ""
        for i in range(min_len):
            if (first[i] != last[i]):
                return ans
            ans+=first[i]
        return ans
