
"""
- Leetcode problem: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/?envType=study-plan-v2&envId=leetcode-75
"""

def kidsWithCandies(candies: list[int], extraCandies: int) -> list[bool]:
    max_candy = max(candies)
    return [True if candies[i] + extraCandies >= max_candy else False for i in range(len(candies))]
