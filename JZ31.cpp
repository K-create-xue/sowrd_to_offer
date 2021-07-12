class Solution {
public:
    int NumberOf1Between1AndN_Solution(int n) {
        if(n<=0) return 0;
        int count=0;
        int ret=0;
        int temp=n;
        while(temp){
            temp/=10;
            count++;
        }
       // pow(10,exponent-1)*exponent;
        int e=0;
        int a=0,b=n;
        while(count--){
            a=b%10;//a记录每一位的数，从最低位开始
            b=b/10;//b记录剩下的数，
            //个位含1数，写入。。十位含1数，写入..依次...
            if(a>1)
            ret+=pow(10,e-1)*e*a+pow(10,e);
            else if(a==0) {}
            else {
                int index=pow(10,e);
                ret+=pow(10,e-1)*e*a+n%index+1;
        }
                        e++;
        }
        return ret;
        
        
        
        
        //     int cnt = 0;
//     for(int m = 1; m <= n; m *= 10) {
//         int a = n / m, b = n % m;
//         cnt += (a + 8) / 10 * m + (a % 10 == 1 ? b + 1 : 0);
//     }
//     return cnt;


    
    
    
//     int NumberOf1Between1AndN_Solution(int n) {
//         if(n<=0) return 0;
//     int num=0;
//         int i=n;
        
//         while(i){
//             if(i%10==1)
//                 num++;
//             i/=10;
//         }
//             num+=NumberOf1Between1AndN_Solution(n-1);
//         return num;
    
    
//     int Count(string s){
//         int num=0;
//         for(auto &e:s){
//             if(e=='1')
//                 num++;
//         }
//         return num;
//     }
//     int NumberOf1Between1AndN_Solution(int n) {
//         int ret=0;
//         for(int i=1;i<=n;i++){
//             ret+=Count(to_string(i));
//         }
//         return ret;
        
        
        
        /*
        if(n<=0) return 0;
    int ret=0;
    for(int i=1;i<=n;i++){//遍历每个数
        int temp=i;
        while(temp){//循环拆分判断个位是否有1,直到数为0；
            if(temp%10==1)
                ret++;
            temp/=10;
        }
    }
        return ret;
        */
    }
};
