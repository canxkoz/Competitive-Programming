# Contiguous Array

# Given a binary array, find the maximum length of a contiguous subarray with equal number of 0 and 1.

# Example 1:
# Input: [0,1]
# Output: 2
# Explanation: [0, 1] is the longest contiguous subarray with equal number of 0 and 1.
# Example 2:
# Input: [0,1,0]
# Output: 2
# Explanation: [0, 1] (or [1, 0]) is a longest contiguous subarray with equal number of 0 and 1.
# Note: The length of the given binary array will not exceed 50,000`

class Solution(object):
    def findMaxLength(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        count = 0
        max_length=0
        table = {0: 0}
        for index, num in enumerate(nums, 1):
            if num == 0:
                count -= 1
            else:
                count += 1
            
            if count in table:
                max_length = max(max_length, index - table[count])
            else:
                table[count] = index
        
        return max_length
    
# Better than 90%. I think this is good enough. Yes. 