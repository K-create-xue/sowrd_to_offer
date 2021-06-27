将一个字符串转换成一个整数，要求不能使用字符串转换整数的库函数。 数值为0或者字符串不是一个合法的数值则返回0

class Solution {
public:
    int StrToInt(string str) {
        int flag=0,_size=str.size()-1;
        long int sum=0;
        for(int i=0;i<str.size();i++){
            if(str[0]=='+')
                flag=1;
            else if(str[0]=='-')
                flag=-1;
             if(i==0&&(str[i]=='+'||str[i]=='-')) {
                 _size--;
                 continue;
                                                  }
            if(str[i]>'9'||str[i]<'0')
                return 0;
                sum+=(str[i]-'0')*pow(10,_size);
                _size--;
            
        }
        if(flag==-1)
            sum=(-1)*sum;
        return sum;
    }
};
