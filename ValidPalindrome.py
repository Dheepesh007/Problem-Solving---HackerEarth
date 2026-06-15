class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        # Keep only alphanumeric characters and convert to lowercase
        filtered_chars = [char.lower() for char in s if char.isalnum()]
        
        # Check if the list reads the same forward and backward
        return filtered_chars == filtered_chars[::-1]
