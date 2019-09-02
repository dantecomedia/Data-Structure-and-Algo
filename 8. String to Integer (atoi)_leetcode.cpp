class Solution {
public:
    int myAtoi(string str) {
        
        int j=str.find_first_not_of(" ");
        int sign=1;
        int res=0;
        
        if (j==-1)
            return 0;
        if (str[j]=='-') {
            sign=-1;
        j++;
        }
        else if (str[j]=='+')
        {
            
            j++;
        }
        while(str.size() && isdigit(str[j]))
        {
            int curr=str[j++]-'0';
            
          
            if (sign>0 && (res>INT_MAX/10 || res*10>INT_MAX-curr ))
                return INT_MAX;
            if(sign<0 && (res<INT_MIN/10 || res*10<INT_MIN+curr))
                return INT_MIN;
              res=res*10+sign*curr;
        }
        return res;
        
    }
};
