#Maximum Subarray

# Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

# Example:

# Input: [-2,1,-3,4,-1,2,1,-5,4],
# Output: 6
# Explanation: [4,-1,2,1] has the largest sum = 6.
# Follow up:

# If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle

#Kadane's Algorithm

class Solution(object):
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        max_s, cur_s = -float("inf"), 0
        for i in range(len(nums)):
            max_s = max(max_s, cur_s+nums[i])
            cur_s = max(cur_s+nums[i], 0)
        return max_s
    
#More optimal solutions
#Solution #1
# import sys

# class Solution(object):
#     def maxSubArray(self, nums):
#         total, maxsize = 0, -2147483648
        
#         for val in nums:
#             total += val
#             if total > maxsize:
#                 maxsize = total
            
#             if total < 0:
#                 total = 0
        
#         return maxsize

#Solution #2
# class Solution(object):
#     def maxSubArray(self, nums):
#         """
#         :type nums: List[int]
#         :rtype: int
#         """
#         maxSum = 0
#         runningSum = 0
#         for elt in nums:
#             runningSum+=elt
#             if runningSum>=maxSum:
#                 maxSum=runningSum
#             if runningSum<0:
#                 runningSum=0
#         if maxSum==0 and runningSum==0:
#             return max(nums)
#         return maxSum

#Solution #3
# class Solution(object):
#     def maxSubArray(self, nums):
#         """
#         :type nums: List[int]
#         :rtype: int
#         """
#         ### kadane's algorithm, check for positive contiguous segments
#         if (len(nums) == 0): return 0
#         if (len(nums) == 1): return nums[0]
#         for i in range(1, len(nums)):
#             nums[i] = max(nums[i], nums[i] + nums[i-1])
#         return max(nums)