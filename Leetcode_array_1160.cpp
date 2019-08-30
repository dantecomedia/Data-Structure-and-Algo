class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int total=0;
        for(int i=0;i<words.size();i++)
        {
            string temp=chars;
            int count=0;
            int l=words[i].length();
            
            for (int j=0;j<words[i].length();j++)
            {
            for(int k=0;k<temp.length();k++)
                if (temp[k]==words[i][j])
                {
                    
                    temp.erase(temp.begin()+k);
                    count++;
                    break;
                }
            }
            if (count==l)
                total=total+count;
    }
        return total;
    }
};