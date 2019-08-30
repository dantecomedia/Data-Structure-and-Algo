class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        
        
        int index_pawn[8][8]={0},index_rook[8][8]={0}, index_bishop[8][8]={0};
        
        for(int i=0;i<board.size();i++)
            for(int j=0;j<board[i].size();j++)
            {
                if (board[i][j]=='p')
                index_pawn[i][j]=1;
                else if(board[i][j]=='R')
                    index_rook[i][j]=1;
                else if(board[i][j]=='B')
                    index_bishop[i][j]=1;
            }
        
        int count=0;
        for(int i=0;i<8;i++)
        {
            int flag=0;
            for(int j=0;j<8;j++)
            {
                if (index_rook[i][j])
                {
                    int flag=0;
                    int flagr=0;
                    for(int l=j-1;l>=0;l--)
                    {
                        if (index_pawn[i][l] && flag==0)
                        {
                            count++;
                            break;
                        }
                        else if(index_bishop[i][l])
                        {
                            flag=1;
                        }
                    }
                    for(int r=7-j;r<8;r++)
                    {
                        if (index_pawn[i][r] && flagr==0)
                        {
                            count++;
                            break;
                        }
                        else if(index_bishop[i][r])
                        {
                            flagr=1;
                        }
                    }
                }
            }
        }
          
        
        for(int i=0;i<8;i++)
        {
            int flag=0;
            for(int j=0;j<8;j++)
            {
                if (index_rook[j][i])
                {
                    int flag=0;
                    int flagr=0;
                    for(int l=j-1;l>=0;l--)
                    {
                        if (index_pawn[l][i] && flag==0)
                        {
                            count++;
                            break;
                        }
                        else if(index_bishop[l][i])
                        {
                            flag=1;
                        }
                    }
                    for(int r=7-j;r<8;r++)
                    {
                        if (index_pawn[r][i] && flagr==0)
                        {
                            count++;
                            break;
                        }
                        else if(index_bishop[r][i])
                        {
                            flagr=1;
                        }
                    }
                }
            }
        }
                 
          
                    
                
    
    
   return count; 
    
    }
      
    
        
    
};