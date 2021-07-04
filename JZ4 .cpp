/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* reBuild(vector<int> pre,int pre_pre,int pre_end,vector<int> vin,int vin_pre,int vin_end){
        if(pre_pre>pre_end) return NULL;
        TreeNode* root=new TreeNode(pre[pre_pre]);
        for(int i=vin_pre;i<=vin_end;i++){
            if(vin[i]==pre[pre_pre]){
                root->left = reBuild(pre, pre_pre+1, pre_pre+i-vin_pre, vin, vin_pre, i-1);
                root->right = reBuild(pre, pre_pre+i-vin_pre+1, pre_end, vin, i+1, vin_end);
                break;
            }
        }
        return root;
    }
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
         return reBuild(pre,0,pre.size()-1,vin,0,vin.size()-1);

    }
};
