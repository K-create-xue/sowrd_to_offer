class Solution {
public:
  
方法1：
  
    string replaceSpace(string s) {
        int count_e=0,len=s.size();
        for(auto e:s){
            if(e==' ')
            count_e++;
        }
        s.resize(len+2*count_e);
      
        for(int i=len-1,j=s.size()-1;i>=0;i--,j--){
            if(s[i]==' '){
            s[j]='0';
            s[j-1]='2';
            s[j-2]='%';
            j-=2;
            }
            else 
            s[j]=s[i];
        }
        return s;

方法2：
  
        // std::string s_copy;
        // for(auto e:s){
        //     if(e==' '){
        //         s_copy.push_back('%');
        //         s_copy.push_back('2');
        //         s_copy.push_back('0');
        //     }
        //     else 
        //         s_copy.push_back(e);
        // }
        // return s_copy;
     }
};
