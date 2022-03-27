class Solution:
    def checkIfPangram(self, sentence: str) -> bool:
        sum = 0
        d = {}
        for i in sentence:
            if i not in d:
                sum += 1
            d[i] = 1
        if(sum == 26):
            return 1
        return 0