class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        # Declares an empty list whose purpose is to contain one single unique number
        single = []

        # Iterates through an array of numbers
        for i in nums:
            # If the number is not in the list, add it to the list
            if i not in single:
                single.append(i)
            # If the number is found again in the list, remove it from the list
            else:
                single.remove(i)

        # Due to the nature of the problem, the only number remaining in the list should be the unique one
        return single[0]