

//https://leetcode.com/problems/permutation-in-string/

/*
class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        # Build Hash
        s1Hash = {}
        for s in s1:
            s1Hash[s] = s1Hash.get(s, 0) + 1
            
        startIdx = 0
        while startIdx <= len(s2) - len(s1):
            s1HashCopy = s1Hash.copy()
            count = 0
            # Iterate scan len(s1) from startIdx
            for i in range(startIdx, startIdx + len(s1)):
                s = s2[i]
                if s in s1HashCopy and s1HashCopy[s] > 0:
                    s1HashCopy[s] -= 1
                    count += 1
                else:
                    break
                    
            if count == len(s1): return True
            startIdx += 1
            
        return False

        */