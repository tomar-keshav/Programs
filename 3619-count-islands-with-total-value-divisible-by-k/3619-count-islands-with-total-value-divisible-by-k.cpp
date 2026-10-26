class Solution {
public:
    int helper(vector<vector<int>>& grid, int k, int i, int j){
        int c_ans = grid[i][j];

        grid[i][j]=0;
        int a=0, b=0, c=0, d=0;
        if(i-1>=0&&grid[i-1][j]>0){
            a=helper(grid,k,i-1,j);
            c_ans=(c_ans+a)%k;
        }
        if(j-1>=0&&grid[i][j-1]>0){
            b=helper(grid,k,i,j-1);
            c_ans=(c_ans+b)%k;
        }
        if(i+1<grid.size()&&grid[i+1][j]>0){
            c=helper(grid,k,i+1,j);
            c_ans=(c_ans+c)%k;
        }
        if(j+1<grid[0].size()&&grid[i][j+1]>0){
            d=helper(grid,k,i,j+1);
            c_ans=(c_ans+d)%k;
        }
        
        return c_ans;
    }

    int countIslands(vector<vector<int>>& grid, int k) {
        int ans = 0;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                if(grid[i][j]!=0){
                    int x = helper(grid,k,i,j);
                    cout<<"for i "<<i<<" and j = "<<j<<" found ans is "<<x<<endl;
                    ans += (x%k==0);
                }
            }
        }
        return ans;
    }
};