class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:
        ans = 0
        for i in range(len(sentences)) :
            c = sentences[i].count(' ')  
            if ans < c : 
                ans = c
        return ans + 1    
        