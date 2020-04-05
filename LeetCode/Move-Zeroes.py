# Move Zeroes

# Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

# Example:

# Input: [0,1,0,3,12]
# Output: [1,3,12,0,0]
# Note:

# You must do this in-place without making a copy of the array.
# Minimize the total number of operations.

class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        for i in range(len(nums)):
            if nums[i]==0:
                nums.append(nums[i])
                nums.remove(nums[i])
        return nums

# This is my approach. It took me about 16 seconds to come up with this solution,
# The issue is, it is inefficient.

# My second attempt after realizing that the previous setup is inefficient.
# Took me about 5 minutes on Python Tutor.
#    def moveZeroes(self, nums):
#        """
#        :type nums: List[int]
#        :rtype: None Do not return anything, modify nums in-place instead.
#        """
#        tail = 0
#        for i in range(0, len(nums)):
#            if nums[i] !=0:
#                nums[tail] = nums[i]
#                tail+=1
#        
#        for i in range(tail, len(nums), 1):
#            nums[i]=0

#More optimal Solutions
# Solution 1
# class Solution(object):
#     def moveZeroes(self, nums):
#         cnt = 0
#         for i in xrange(len(nums)-1, -1, -1):
#             if nums[i] == 0:
#                 del nums[i]
#                 cnt += 1
#         for j in xrange(cnt):
#             nums.append(0)

#Solution 2
# class Solution(object):
#     def moveZeroes(self, nums):
#         """
#         :type nums: List[int]
#         :rtype: None Do not return anything, modify nums in-place instead.
#         """
#         non_zero_index = 0
#         i = 0
#         for i in range(0,len(nums)):
#             if nums[i] != 0:
#                 nums[non_zero_index] = nums[i]
#                 non_zero_index += 1
#         for i in range(non_zero_index,len(nums)):
#             nums[i] = 0
#         return nums

#Solution 3
# class Solution(object):
#     def moveZeroes(self, nums):
#         zero = 0  # records the position of "0"
#         for i in range(len(nums)):
#             if nums[i] != 0:
#                 nums[i], nums[zero] = nums[zero], nums[i]
#                 zero += 1

#Solution 4
# class Solution(object):
#     def moveZeroes(self, nums):
#         """
#         :type nums: List[int]
#         :rtype: None Do not return anything, modify nums in-place instead.
#         """
#         tail = 0
#         for i in range(len(nums)):
#             if nums[i] !=0:
#                 nums[tail],nums[i] = nums[i],nums[tail]
#                 tail += 1


