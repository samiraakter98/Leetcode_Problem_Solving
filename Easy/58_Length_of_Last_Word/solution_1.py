class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        strs = s.split(" ")
        strs_copy = strs[:]
        for item in strs_copy:
            if (len(item) == 0):
                strs.remove(item)
        # for i in range(len(strs)):
        #     print(len(strs[i]))
        return len(strs[-1])
