# Last Stone Weight
# We have a collection of stones, each stone has a positive integer weight.

# Each turn, we choose the two heaviest stones and smash them together.  Suppose the stones have weights x and y with x <= y.  The result of this smash is:

# If x == y, both stones are totally destroyed;
# If x != y, the stone of weight x is totally destroyed, and the stone of weight y has new weight y-x.
# At the end, there is at most 1 stone left.  Return the weight of this stone (or 0 if there are no stones left.)

 

# Example 1:

# Input: [2,7,4,1,8,1]
# Output: 1
# Explanation: 
# We combine 7 and 8 to get 1 so the array converts to [2,4,1,1,1] then,
# we combine 2 and 4 to get 2 so the array converts to [2,1,1,1] then,
# we combine 2 and 1 to get 1 so the array converts to [1,1,1] then,
# we combine 1 and 1 to get 0 so the array converts to [1] then that's the value of last stone.
 

# Note:

# 1 <= stones.length <= 30
# 1 <= stones[i] <= 1000
#    Hide Hint #1  
# Simulate the process. We can do it with a heap, or by sorting some list of stones every time we take a turn.

class Solution(object):
    def lastStoneWeight(self, stones):
        """
        :type stones: List[int]
        :rtype: int
        """
        for i in range(len(stones) - 1):
            stones.sort()
            stones.append(stones.pop() - stones.pop()) 
        return stones[0]
    
# More optimal Solutions
# Solutions #1
# class Solution(object):
#     def lastStoneWeight(self, stones):
#         """
#         :type stones: List[int]
#         :rtype: int
#         """
#         h = [-x for x in stones]
#         heapq.heapify(h)
        
#         while len(h) >1 and h[0] != 0:
#             heapq.heappush(h, heapq.heappop(h)- heapq.heappop(h))
        
#         return -h[0]

#Solution #2
# import heapq

# class Solution(object):
#     def lastStoneWeight(self, stones):
#         """
#         :type stones: List[int]
#         :rtype: int
#         """
#         stones = [-x for x in stones]
#         heapq.heapify(stones) # so that it is a max-heap
        
#         while len(stones) >= 2: # revisit this condition
            
#             itemY = heapq.heappop(stones)
#             itemX = heapq.heappop(stones)
            
#             if itemX != itemY:
#                 heapq.heappush(stones, itemY-itemX)
        
#         ans = None
#         try:
#             return -heapq.heappop(stones)
#         except IndexError:
#             return 0

#Solution #3
# class Solution(object):
#     def lastStoneWeight(self, stones):
#         """
#         :type stones: List[int]
#         :rtype: int
#         """
#         while len(stones)>1:
#             a = max(stones)
#             stones.remove(a)
#             b = max(stones)
#             stones.remove(b)
#             if (a!=b):
#                 stones.append(a-b)
#         return stones[0] if stones else 0

#Solution #4
# class Solution(object):
#     def lastStoneWeight(self, stones):
#         """
#         :type stones: List[int]
#         :rtype: int
#         """
#         stones.sort()
#         stones = [0]+stones
#         while len(stones)>1:
#             if stones[-1]==stones[-2]:
#                 stones.pop()
#                 stones.pop()
#             else:
#                 stones[-1] -=stones[-2]
#                 stones.pop(-2)
#             stones.sort()
#         return stones[0]

#Solution #5
# class Solution(object):
    
#     def smash(self, s1, s2):
#         return abs(s1 - s2)
        
#     def lastStoneWeight(self, stones):
#         """
#         :type stones: List[int]
#         :rtype: int
#         """
        
#         while len(stones) > 1:
#             s1 = max(stones)
#             is1 = stones.index(s1)
#             stones.pop(is1)
#             s2 = max(stones)
#             is2 = stones.index(s2)
#             stones.pop(is2)
#             stones.append(abs(s1 - s2))
            
#         return stones[0]

        