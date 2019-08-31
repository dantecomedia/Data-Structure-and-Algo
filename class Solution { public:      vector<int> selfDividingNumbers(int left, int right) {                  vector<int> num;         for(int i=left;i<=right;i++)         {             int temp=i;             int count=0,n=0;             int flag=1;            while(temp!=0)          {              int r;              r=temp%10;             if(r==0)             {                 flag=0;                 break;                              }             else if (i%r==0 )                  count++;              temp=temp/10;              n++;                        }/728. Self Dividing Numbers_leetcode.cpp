class Solution {
public:

    vector<int> selfDividingNumbers(int left, int right) {
        
        vector<int> num;
        for(int i=left;i<=right;i++)
        {
            int temp=i;
            int count=0,n=0;
            int flag=1;
           while(temp!=0)
         {
             int r;
             r=temp%10;
            if(r==0)
            {
                flag=0;
                break;
                
            }
            else if (i%r==0 )
                 count++;
             temp=temp/10;
             n++;
             
         }
            
           // cout<<i<<" "<<n<<" "<<count<<endl;
            if (n==count && flag==1)
                num.push_back(i);
                
        }
        
        
        
        return num;
        
    }
};
