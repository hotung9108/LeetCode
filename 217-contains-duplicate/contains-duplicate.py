class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        # d = {}
        # for x in nums:
        #     d[x] = d.get(x, 0) + 1
        #     if d[x] > 1:return True
        # return False
        return len(nums) != len(set(nums))