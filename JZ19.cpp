class Solution {
public:
    vector<int> printMatrix(vector<vector<int> > matrix) {
        vector<int> v;
        if(matrix.empty())
            return v;
        int rows=matrix.size();
        int cols=matrix[0].size();
        int left=0,top=0,right=cols-1,bottom=rows-1;
        while(left<=right && top<=bottom){
            //left——》right
            for(int i=left;i<=right;++i)
                v.push_back(matrix[top][i]);
            //top-->bottom
            for(int i=top+1;i<=bottom;++i)
                v.push_back(matrix[i][right]);
            //right-->left
            if(top!=bottom)
            for(int i=right-1;i>=left;--i)
                v.push_back(matrix[bottom][i]);
            //bottom-->top
            if(left!=right)
            for(int i=bottom-1;i>top;--i)
                    v.push_back(matrix[i][left]);
            left++,top++,right--,bottom--;
        }
        
//         int circles=((rows<cols?rows:cols)-1)/2+1;//圈数
//         for(int i=0;i<circles;i++){
//         //从左往右打印
//             for(int j=i;j<cols-i;j++){
//                 v.push_back(matrix[i][j]);
//             }
//         //从上往下打印
//             for(int k=i+1;k<rows-i;k++){
//                 v.push_back(matrix[k][cols-1-i]);
//             }
//         //从右往左打印(判断有无重复打印)
//             for(int m=cols-i-2;(m>=i)&&(rows-i-1!=i);m--){
//                 v.push_back(matrix[rows-i-1][m]);
//             }
//         //从下往上(判断是否重复打印)
//             for(int n=rows-i-2;(n>i)&&(cols-i-1!=i);n--){
//                 v.push_back(matrix[n][i]);
//             }
//         }
        

        return v;
    }
};
