class Solution:
    def countCharacters(self, words: List[str], chars: str) -> int:
        
        total=0
        for i in words:
            count=0
            n=len(i)
            temp=list(chars)
            for j in i:
                if j in temp:
                    count=count+1
                    temp.remove(j)
                if count==n:
                    total=total+count
        
        return total
                    