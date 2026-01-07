class Solution(object):
    def sumOfEncryptedInt(self, nums):
        sum= 0

        for i in nums:
            s= str(i)
            maxd= max(s)
            a= int(maxd*len(s))
            sum+=a

        return sum


