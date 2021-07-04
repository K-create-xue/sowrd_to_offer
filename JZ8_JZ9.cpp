class Solution {
public:
    int jumpFloor(int number) {
        if(number==0||number==1)
            return 1;
        int i=1,j=1;
        while(number--){
            j=i+j;
            i=j-i;
        }
        return i;
        
//         if(number==0)
//             return 1;
//         else if(number==1)
//             return 1;
        
//         return jumpFloor(number-1)+jumpFloor(number-2);
    }
};



class Solution {
public:
    int jumpFloorII(int number) {
        if(number==0||number==1) return 1;
        
       return 2*jumpFloorII(number-1);
//         vector<int> f(number+1,0);
//         f[0]=f[1]=1;
//         for(int i=2;i<=number;++i){
//             for(int j=0;j<i;j++){
//                 f[i]+=f[j];
//             }
//         }
//         return f[number];
    }
};
