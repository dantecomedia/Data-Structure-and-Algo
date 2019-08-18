//Solution for the is subsequence problem on leet code 

class Solution {
public:
    bool isSubsequence(string s, string t) {
        
      int i=0,j=0;
        while(i<t.length())
        {
            if(s[j]==t[i])
            {
                j++;
                i++;
            }
            else
                i++;
        }
        
        
        if(j<s.length())
            return false;
        
    return true;
    }
};