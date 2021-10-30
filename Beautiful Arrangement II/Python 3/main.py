#!/usr/bin/env python3

from typing import List

class Solution:
    def constructArray(self, n: int, k: int) -> List[int]:
        answer = [0] * n # To avoid to use append.
        x, y = 1, k+1

        for i in range(k+1):
            if i % 2:
                answer[i] = y
                y -= 1
            else:
                answer[i] = x
                x += 1

        for i in range(k+1,n):
            answer[i] = i+1
        return answer

if __name__ == '__main__':
    s = Solution()
    print(s.constructArray(7,5))
