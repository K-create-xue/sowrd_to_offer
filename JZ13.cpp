class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 
     * @param array int整型vector 
     * @return int整型vector
     */
    //冒泡排序走一个
    vector<int> reOrderArray(vector<int>& array) {
        // write code here
        
        if(array.empty()) return array;
        for(int i=0;i<array.size()-1;i++)
            for(int j=0;j<array.size()-1;j++){
           // if(((array[j]&1)==0)&&((array[j+1]&1)==1)){
                if(array[j]%2==0&&array[j+1]%2==1){
                swap(array[j],array[j+1]);
            }
        }
        return array;
        
        
        //奇数从前往后相等，偶数就插到后面，然后删除中间没用改变的数；
//         int count=0;
//         int num=array.size();
//         //array.resize(2*num);
//         for(int i=0;i<num;i++){
//             if(array[i]&1){
//                 array[count]=array[i];
//                 count++;
//             }else
//             array.push_back(array[i]);
//         }
//         array.erase(array.begin()+count,array.begin()+num);
//         return array;
        
        
        /*
        int i=array.size();
        vector<int> v_even;
        int count=0;
        for(int i=0;i<array.size();i++){
            if(array[i]&1){
                array[count]=array[i];
                count++;
            }
            else
                v_even.push_back(array[i]);
        }
        //直接将多的删除掉，再插入
        while(array.size()!=count){
            array.pop_back();
        }
        array.insert(array.end(),v_even.begin(),v_even.end());
        //下面通过，先插入，后用resize调整
       // array.insert(array.begin()+count,v_even.begin(),v_even.end());
        //array.resize(i);
        return array;
        */
        
        //直接创建两个vector，遍历，奇数插入和偶数插入
        //         vector<int> v_even;
//         vector<int> v_odd;
//         for(int i=0;i<array.size();i++){
//             if(array[i]&1)
//                 v_odd.push_back(array[i]);
//             else
//                 v_even.push_back(array[i]);
//         }
//         v_odd.insert(v_odd.end(),v_even.begin(),v_even.end());
//         return v_odd;
    }
};
