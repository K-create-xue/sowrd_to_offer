#include<vector>
#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;
int findRepeatNumber(vector<int> &nums){
        
        size_t slow = 0, fast = 1;
        while (fast != nums.size()) {
            if (nums[slow++] == nums[fast++])
                return nums[slow];
        }
        return -1;
    }
int main(){
    vector<int> nums{ 2, 3,1,3 };
    findRepeatNumber(nums);
	return 0;
}

//method 1:
//两个for循环，，最后时间超了
int findRepeatNumber(vector<int>& nums) {
     for(int i=0;i<nums.size();++i){
           for(int j=i+1;j<nums.size();++j){
               if(nums[i]==nums[j])
               return nums[i];
           }
       }
       return -1;
}

//method 2:
//利用sort排序后，利用迭代器，判断相邻是否相对
int findRepeatNumber(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<int>::iterator slow = nums.begin();
    vector<int>::iterator fast = slow++;
    while (fast != nums.end() ) {
        if (*fast == *slow)
            cout << *fast;
            return *slow;
        fast++;
        slow++;
    }
    return -1;
}

//method 3:
//sort排序后，利用下标，判断相邻是否相对
int findRepeatNumber(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    size_t slow = 0, fast = 1;
    while (fast != nums.size()) {
        if (nums[slow++] == nums[fast++])
            return nums[slow];
    }
    return -1;
}

//method 4:
//利用无序map，借用重载的[]赋值操作；pair<key,value> 
//value的值进行判断  value 可为bool char等，只要能作为标记即可
int findRepeatNumber(vector<int>& nums) {
     std::unordered_map<int,int> u_map;
       for(auto e:nums){
           if(u_map[e]>0)
           return e;
           u_map[e]++;
       }
       return -1;
}

//method 5:
//通过判断 nums[i] i nums[nums[i]] 的关系
int findRepeatNumber(vector<int>& nums) {
    int i = 0;
        while (i < nums.size()) {
            if (nums[i] == i) {
                ++i;
                continue;
            }
            if (nums[i] == nums[nums[i]])
                return nums[i];
            swap(nums[i], nums[nums[i]]);
        }
        return -1;
}

        //  sort(nums.begin(),nums.end());
      //     vector<int>::iterator slow=nums.begin();
      //     vector<int>::iterator fast=slow++;
      //     while(fast!=nums.end()){
      //         if(*fast==*slow)
      //         return *slow;
      //         fast++;
      //         slow++;
      //     }
      //    // if(slow==nums.end()&&*slow==*fast)
      //     //return *slow;
      //     return -1;

      // size_t slow=0,fast=1;
      // while(fast!=nums.size()){
      //     if(nums[slow++]==nums[fast++])
      //     return nums[slow];
      // }
      // return -1;
      

      // std::unordered_map<int,int> u_map;
      // for(auto e:nums){
      //     if(u_map[e]>0)
      //     return e;
      //     u_map[e]++;
      // }
      // return -1;

        /*int i = 0;
        while (i < nums.size()) {
            if (nums[i] == i) {
                ++i;
                continue;
            }
            if (nums[i] == nums[nums[i]])
                return nums[i];
            swap(nums[i], nums[nums[i]]);


        }
        return -1;
    }
};*/
