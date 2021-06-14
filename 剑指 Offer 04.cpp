//1.从左下角或者右上角进行比较搜索；
//2.两个for循环全部遍历；
    bool findNumberIn2DArray(vector<vector<int>> &matrix, int target) {
       // 二叉搜索树
        int i=matrix.size()-1,j=0;
        while(i>=0&&j<matrix[0].size()){
            if(matrix[i][j]>target) i--;
            else if(matrix[i][j]<target) j++;
            else return true;
            }
            return false;
            



         if(matrix.size()==0)
             return false;
        int i=0,j=matrix[0].size()-1;
        while(j>=0&&i<matrix.size()){
            if(matrix[i][j]>target) j--;
            else if(matrix[i][j]<target) i++;
            else return true;
        }
        return false;
        


   
        if(matrix.size()==0) 
        return false;
        for(int i=0;i<matrix.size();++i){
            for(int j=0;j<matrix[0].size();++j){
                if(target==matrix[i][j])
                return true;
            }
        }
        return false;

