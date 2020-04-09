# Backspace String Compare
# Given two strings S and T, return if they are equal when both are typed into 
# empty text editors. # means a backspace character.

# Example 1:

# Input: S = "ab#c", T = "ad#c"
# Output: true
# Explanation: Both S and T become "ac".
# Example 2:

# Input: S = "ab##", T = "c#d#"
# Output: true
# Explanation: Both S and T become "".
# Example 3:

# Input: S = "a##c", T = "#a#c"
# Output: true
# Explanation: Both S and T become "c".
# Example 4:

# Input: S = "a#c", T = "b"
# Output: false
# Explanation: S becomes "c" while T becomes "b".
# Note:

# 1 <= S.length <= 200
# 1 <= T.length <= 200
# S and T only contain lowercase letters and '#' characters.
# Follow up:

# Can you solve it in O(N) time and O(1) space?

class Solution(object):
    def backspaceCompare(self, S, T):
        def build(S):
            ans = []
            for c in S:
                if c != '#':
                    ans.append(c)
                elif ans:
                    ans.pop()
            return "".join(ans)
        return build(S) == build(T)
    
# Solution with Space Complexity O(1) is below
# def backspaceCompare(self, S, T):
#         def F(S):
#             skip = 0
#             for x in reversed(S):
#                 if x == '#':
#                     skip += 1
#                 elif skip:
#                     skip -= 1
#                 else:
#                     yield x

#         return all(x == y for x, y in itertools.izip_longest(F(S), F(T)))

# More optimal solutions
#Solution #1

# class Solution(object):
#     def backspaceCompare(self, S, T):
#         """
#         :type S: str
#         :type T: str
#         :rtype: bool
#         """
#         def bsp(s):
#             bcount = 0
#             fin = []
#             for i in range(len(s)-1, -1, -1):
#                 if s[i] == "#":
#                     bcount += 1
#                 else:
#                     if bcount > 0:
#                         bcount -= 1
#                         continue
#                     else:
#                         fin.append(s[i])
#             return "".join(fin)
        
#         return bsp(S) == bsp(T)

# Solution #2

# class Solution(object):
    # def backspaceCompare(self, S, T):
    #     """
    #     :type S: str
    #     :type T: str
    #     :rtype: bool
    #     """
    #     i = len(S)-1
    #     j = len(T)-1
    #     bs_s = 0
    #     bs_t = 0
    #     while True:
    #         while i >= 0 and (bs_s or S[i] == '#'):
    #             if S[i] == '#':
    #                 bs_s +=1
    #             else:
    #                 bs_s -= 1
    #             i -= 1
    #         while j >= 0 and (bs_t or T[j] == '#'):
    #             if T[j] == '#':
    #                 bs_t += 1
    #             else:
    #                 bs_t -= 1
    #             j -= 1
    #         if not (i >= 0 and j >=0 and S[i] == T[j]):
    #             return i == j == -1
    #         i -= 1
    #         j -= 1
        
        

