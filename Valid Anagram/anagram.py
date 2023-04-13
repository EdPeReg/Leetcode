def isAnagram(s: str, t: str) -> bool:
    s, t = sorted(s), sorted(t)
    return s == t

def isAnagramHash(s: str, t: str) -> bool:
    ds, dt = {}, {}

    for char in s:
        ds[char] = ds.get(char, 0) + 1
    for char in t:
        dt[char] = dt.get(char, 0) + 1
    
    # The order doesn't matter in a dictionary, as long as all the values are the same
    return ds == dt

def isAnagramChatGPT(s: str, t: str) -> bool:
        if len(s) != len(t):
            return False

        freq_s = {}
        freq_t = {}

        # Mantener un registro de la frecuencia de los caracteres en ambas cadenas
        for char in s:
            freq_s[char] = freq_s.get(char, 0) + 1

        for char in t:
            freq_t[char] = freq_t.get(char, 0) + 1

        # Comparar los diccionarios de frecuencia para determinar si son anagramas
        for char in freq_s:
            if char not in freq_t or freq_s[char] != freq_t[char]:
                return False

        return True

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
