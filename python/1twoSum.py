class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        # Dictionary where keys = number values, values = index position
        table = {}
        # Loops through list of numbers, looks for the difference of the target value minus the current value of j
        for i, j in enumerate(nums):
            diff = target - j
            # If the difference is found in the table, return index of said diff. value and the current iteration of i
            if diff in table:
                return [table[diff], i]
            # Otherwise, set table[j] to the value of i and continue looping
            else:
                table[j] = i