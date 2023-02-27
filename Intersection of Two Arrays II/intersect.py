
def intersect(nums1: list[int], nums2: list[int]) -> list[int]:
    nums1.sort()
    nums2.sort()

    res = []
    i,j = 0,0
    while i < len(nums1) and j < len(nums2):
        if nums1[i] < nums2[j]: i += 1
        elif nums2[j] < nums1[i]: j += 1
        else:
            res.append(nums1[i])
            i += 1
            j += 1

    return res