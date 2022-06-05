#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
    int r = matrix.size(), c = matrix[0].size();
    vector<pair<int, int>>vec;
     for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(matrix[i][j]==0)
                {
                   vec.push_back({i,j});
                }
            }
        }
        for(int i=0;i<vec.size();i++)
        {
            int row=vec[i].first;
            int col=vec[i].second;
            
            for(int x=0;x<c;x++)
            {
                matrix[row][x]=0;
            }
            
            for(int y=0;y<r;y++)
            {
                matrix[y][col]=0;
            }     
            
        }
    
}
