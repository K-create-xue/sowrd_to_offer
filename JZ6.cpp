class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        if(rotateArray.size()==0) return 0;
        //return *min_element(rotateArray.begin(),rotateArray.end());
        //sort(rotateArray.begin(),rotateArray.end());
        int left=0,right=rotateArray.size()-1,index=rotateArray[0];
        while(left<right){
            if(rotateArray[left]<rotateArray[right])
                return rotateArray[left];
            
            int mid=(left+right)/2;
            if(rotateArray[mid]>index) {
                left=mid+1;
            }
            else if(rotateArray[mid]<index) {
                right=mid;
            }
            else {
                ++left;
            }
        }
        return rotateArray[left];
    }
};
