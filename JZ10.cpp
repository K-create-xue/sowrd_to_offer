class Solution {
public:
    int rectCover(int number) {
        if(number==0||number==1||number==2)
            return number;
        
        
        
         vector<int> f(number+1,0);
       f[0]=0;f[1]=1;f[2]=2;
         for(int i=3;i<=number;i++){
          f[i]=f[i-1]+f[i-2];
         }
         return f[number];
        
        return rectCover(number-1)+rectCover(number-2);
        
    }
};  
