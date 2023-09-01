class Solution {
public:
    void dfs(int row,int col,vector<vector<int>>&ans,vector<vector<int>>&image,int color,
             int delRow[],int delCol[],int iniColor){
        ans[row][col] = color; // assigning new color to passed row and col i.e. first one
        int n = image.size(); // size of row
        int m = image[1].size(); // size of col
        for(int i=0;i<4;i++){
            int newrow = row+delRow[i]; // to check all 4 directional rows
            int newcol = col+delCol[i]; // to check 4 directional columns
            if(newrow>=0 && newrow<n && newcol>=0 && newcol<m && image[newrow][newcol]==iniColor 
               && ans[newrow][newcol]!=color){
                dfs(newrow,newcol,ans,image,color,delRow,delCol,iniColor);
            }
        }
    }  
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int iniColor = image[sr][sc];  // storing color of given sr and sc
        vector<vector<int>>ans = image; // copy of original given matrix
        int delRow[] = {-1,0,1,0}; 
        int delCol[] = {0,1,0,-1};
        dfs(sr,sc,ans,image,color,delRow,delCol,iniColor);
        return ans;
        
        
    }
};