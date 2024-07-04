# DAY-19

Maximum No.of Vowels in substring of given length

Problem Sataement

Given a string s and an integer k, return the maximum number of vowel letters in any substring of s with length k.

Solution Approach :

Sliding windows - find intially count of vowels in first window of string & then slide the window by incrementing count if right element is vowel & decreasing count if left element is vowel & find max count at each iteration.
