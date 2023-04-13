def isAnagram(s: str, t: str) -> bool:
    s, t = sorted(s), sorted(t)
    return s == t

"""
This function gives time limit because the complexity is N(n^2), this is due because in the worst
case we are iterating for the entire length for s and t, 
por lo tanto, en el peor de los casos, se tendría un número total de iteraciones igual a la longitud 
de la cadena "s" multiplicada por la longitud de la cadena "t". Esto da una complejidad de tiempo de O(n^2).
"""
def isAnagramTimeLimit(s: str, t: str) -> bool:
    l = [False] * max(len(s), len(t))

    left, right = 0,0
    while left < len(s) and right < len(t):
        if s[left] == t[right] and l[right] == False:
            l[right] = True
            left += 1
            right = 0
        else:
            right += 1
    return False if False in l else True
