#Given an array nums of n integers where n > 1,  return an array output such that output[i] is equal to the product of all the elements of nums except nums[i].

#Example:

#Input:  [1,2,3,4]
#Output: [24,12,8,6]
#Constraint: It's guaranteed that the product of the elements of any prefix or suffix of the array (including the whole array) fits in a 32 bit integer.

#Note: Please solve it without division and in O(n).

#Follow up:
#Could you solve it with constant space complexity? (The output array does not count as extra space for the purpose of space complexity analysis.)

class Solution(object):
    def productExceptSelf(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int
        """
        mul = 1
        right_side_mul = []
        left_side_mul = []
        for num in reversed(nums):
            mul *= num
            right_side_mul.append(mul)
        right_side_mul.reverse()
        
        mul = 1
        for num in nums:
            mul *= num
            left_side_mul.append(mul)
        
        ret = [right_side_mul[1]]
        for i, num in enumerate(nums[1:-1]):
            try:
                ret.append(left_side_mul[i] * right_side_mul[i + 2]) 
            except:
                print(i)
        ret.append(left_side_mul[-2])
        return ret
