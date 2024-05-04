
"""
- Leetcode problem: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/?envType=study-plan-v2&envId=leetcode-75
"""

def kidsWithCandies(candies: list[int], extraCandies: int) -> list[bool]:
    result = []
    greatest = False

    # O(n^2) because I'm checking each element of the list
    for i in range(len(candies)):
        for j in range(len(candies)):
            if j != i:
                if candies[i] + extraCandies >= candies[j]:
                    greatest = True
                else:
                    greatest = False
                    break
        result.append(True) if greatest else result.append(False)
    
    return result
