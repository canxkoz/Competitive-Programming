# Min Stack

# Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

# push(x) -- Push element x onto stack.
# pop() -- Removes the element on top of the stack.
# top() -- Get the top element.
# getMin() -- Retrieve the minimum element in the stack.
 

# Example:

# MinStack minStack = new MinStack();
# minStack.push(-2);
# minStack.push(0);
# minStack.push(-3);
# minStack.getMin();   --> Returns -3.
# minStack.pop();
# minStack.top();      --> Returns 0.
# minStack.getMin();   --> Returns -2.
 

#    Hide Hint #1  
# Consider each node in the stack having a minimum value. 

class MinStack:

    def __init__(self):
        self.s = []

    def push(self, x):
        cur_min = self.getMin()
        if cur_min == None or x < cur_min: 
            cur_min = x
        self.s.append((x,cur_min))
            

    def pop(self):
        self.s.pop()
        
    def top(self):
        if len(self.s) == 0:
            return None
        return self.s[-1][0]

    def getMin(self):
        if len(self.s) == 0:
            return None
        return self.s[-1][1]
        


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(x)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()
        
#More Optimal Solutions
# Solution 1 
# class MinStack(object):

#     def __init__(self):
#         self.stack = []
#         self.mins = []
#     def push(self, x):
#         """
#         :type x: int
#         :rtype: None
#         """
#         self.stack.append(x)
#         if not self.mins:
#             self.mins.append(x)
#         else:
#             if x <= self.mins[-1]:
#                 self.mins.append(x)
#     def pop(self):
#         """
#         :rtype: None
#         """
#         temp = self.stack.pop()
#         if temp == self.mins[-1]:
#             self.mins.pop()
        

#     def top(self):
#         """
#         :rtype: int
#         """
#         return self.stack[-1]
        

#     def getMin(self):
#         """
#         :rtype: int
#         """
#         return self.mins[-1]


