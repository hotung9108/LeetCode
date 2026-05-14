class Solution:
    def separateNums(self, nums):
        digits = []
        while nums > 0:
            digits.append(nums%10)
            nums//=10
        digits.reverse()
        return digits
    def separateDigits(self, nums: List[int]) -> List[int]:
        res = []
        for i in nums:
            res.extend(self.separateNums(i))
        return res
