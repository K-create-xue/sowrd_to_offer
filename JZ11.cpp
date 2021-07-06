class Solution {
public:
     int  NumberOf1(int n) {
         //if(n==0) return 0;
          
         int count=0,flag=1;
         for(int i=0;i<32;i++){
             if((n&flag)!=0){
                 count++;
             }
             flag=flag<<1;
         }
         return count;
         
//         int count=0;
//          for(int i=0;i<32;i++){
//          if((n&1)==1){
//             count++;
             
//          }
//              n=n>>1;
//          }
         
//          return count;
         
     }
};
