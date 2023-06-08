class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        li = s.split(" ")
        li_copy = li[:]
        for item in li_copy:
            if (len(item) == 0):
                li.remove(item)
        li.reverse()
        str=''
        for i in range(len(li)-1):
            str+=li[i]+' '
        str+=li[len(li)-1]
        return str
