class Solution(object):
    def longestCommonPrefix(self, strs):
        name = strs[0]
        length = len(strs)
        common = ""
        for i in range(len(name)):
            bruh = name[:i+1]
            count=0
            for j in strs:
                if(bruh==j[:len(bruh)]):
                    count+=1
            if(count==length):
                common = bruh
        return common