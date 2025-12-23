class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        D = {}
        for i , n in enumerate(nums):
            diff = target - n
            if diff in D:
                return [D[diff], i]
            D[n] = i