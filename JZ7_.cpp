class Solution {
public:
    int Fibonacci(int n) {
        if(n==0||n==1) 
          return n;
      
        return Fibonacci(n-1)+Fibonacci(n-2);
        
//         int i=0,j=1,temp=0;
//         while(n--){
//             
//             temp=j;
//             j=i+j;
//             i=temp;
//         }
//         return i;
    }
};
