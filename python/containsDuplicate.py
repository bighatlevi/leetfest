# https://leetcode.com/problems/contains-duplicate/
class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        # Compares the length of a list of numbers to the length of a set version of the same list
        # Duplicate values cannot be stored in sets, so if the lengths are still equal it means all the values were unique
        if len(nums) == len(set(nums)):
            # No duplicates
            return False
        # Lengths are not equal to each other, meaning one or more values was removed from the set
        else:
            # Duplicates found
            return True
