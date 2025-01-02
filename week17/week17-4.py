#week14-4.py學習計畫 Bassic第10題
#LeetCode 896. Monotonic Array
class Solution:
    def isMonotonic(self, nums: List[int]) -> bool:
        N=len(nums)
        big, small = False, False
        for i in range(N-1):
            d=nums[i+1]-nums[i]
            if d>0: big=True
            if d<0: small=True
        if big and small: return False
        else: return True
