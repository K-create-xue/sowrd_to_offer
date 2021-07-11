class Solution {
public:
    double Power(double base, int exponent) {
        //STL标准库源码
 /*       //template <class T,class Integer, class MonoidOperation>
//T power_this(T x, Integer n, MonoidOperation op){ // 可以看成求pow(x, n)
    if (n == 0)
        return identity_element(op); // 可以看成 1
    else{
        while ((n & 1) == 0){
            n >>= 1;
            x = op(x, x); //op看成乘法
        }
        T result = x; // 遇到 二进制中从低位到高位的第一个 1
        n >>= 1;
        while (n != 0){
            x = op(x, x);
            if ((n & 1) != 0)
                result = op(result, x);
            n >>= 1;
        }
        return result;
    }
}
*/
        
        //转换为>0
        if(exponent<0){
            base=1/base;
            exponent=-exponent;
        }
        double x=base;//记录base^0,base^1,base^2...
        double ret=1.0;
        while(exponent){
           if(exponent&1){
                ret*=x;//二进制位是1的，乘进去；
           }
            x*=x;//不断增大base*base*base...
            exponent>>=1;//二进制位移动
        }
        return ret;
        
        
        
 //c++11支持，此类型次方
//pow(base,exponent);
        
        
//         if(exponent==0) return 1.0;
//         double res=1;
//         if(exponent>0){
//             while(exponent--) res*=base;
//             return res;
//         }else 
//             return 1/Power(base,-exponent);
        
        
//         if(exponent<0){
//             base=1/base;
//             exponent=-exponent;
//         }
//         double ret=1.0;
//         while(exponent--){
//             ret*=base;
//         }
//         return ret;
        
        
//         if(exponent==0) return 1.0;
//         if(exponent<0){
//             base=1/base;
//             exponent=-exponent;
//         }
//         double ret=Power(base,exponent/2);
//         if(exponent&1){//奇数
//         //if(exponent%2==1){
//             return base*ret*ret;
//         }else{
//             return ret*ret;
//         }
    }
    
};
