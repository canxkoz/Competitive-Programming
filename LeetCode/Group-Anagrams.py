# Group Anagrams

# Given an array of strings, group anagrams together.

# Example:

# Input: ["eat", "tea", "tan", "ate", "nat", "bat"],
# Output:
# [
#   ["ate","eat","tea"],
#   ["nat","tan"],
#   ["bat"]
# ]
# Note:

# All inputs will be in lowercase.
# The order of your output does not matter.

class Solution(object):
    def groupAnagrams(self, strs):
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """
        output = {}
        for i in strs:
            word = "".join(sorted(i))
            if word in output:
                output[word].append(i)
            else:
                output[word] = [i]
        return list(output.values())

# More optimal solutions

#Solution 1

# class Solution(object):
#     def groupAnagrams(self, strs):
#         """
#         :type strs: List[str]
#         :rtype: List[List[str]]
#         """
#         d = collections.defaultdict(list)
        
#         for x in strs:
#             xl = ''.join(sorted(x))
#             d[xl].append(x)
        
#         return d.values()


#Solution 2

# class Solution(object):
#     def groupAnagrams(self, strs):
#         """
#         :type strs: List[str]
#         :rtype: List[List[str]]
#         """
#         repo = {}
#         res = []
#         for word in strs:
#             temp = ''.join(sorted(word))
#             if temp in repo:
#                 res[repo[temp]].append(word)
#             else:
#                 current_len = len(res)
#                 res.append([word])
#                 repo[temp] = current_len
#         return res

#Solution 3

# class Solution(object):
#     def groupAnagrams(self, strs):
#         """
#         :type strs: List[str]
#         :rtype: List[List[str]]
        
#         """
#         answer=collections.defaultdict(list)
        
#         for s in strs:
#             answer[tuple(sorted(s))].append(s)
#         return answer.values()

#Solution 4
# class Solution(object):
#     def groupAnagrams(self, strs):
#         ans = collections.defaultdict(list)
#         for i in strs:
#             ans[tuple(sorted(i))].append(i)
#         return ans.values()