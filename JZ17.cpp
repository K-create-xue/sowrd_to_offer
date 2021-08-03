/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
/*
做树的题一般都会到递归上，树嘛高度不知道，只能爬了，所以要递归着看了
1.先有一个标记result，用result标记是否满足
2.空树不是任意一个树子集，则两数要是，就必须满足两数都不为NULL
3.写个函数判断当前节点是否满足条件
4.不满足就判断左子树，不满足判断右子树，都不满足就false
5.有一个满足就true
*/

 


class Solution{
public:
    bool HasSubtree(TreeNode* pRoot1,TreeNode* pRoot2){
        bool result=false;
        if(pRoot1!=nullptr && pRoot2!=nullptr){
            if(pRoot1->val==pRoot2->val){
                result=Tree1hasTree2(pRoot1,pRoot2);
            }
        if(result==false)
            result=HasSubtree(pRoot1->left, pRoot2);
         if(result==false)
             result=HasSubtree(pRoot1->right, pRoot2);
        }
        return result;
    }
    
    bool Tree1hasTree2(TreeNode* pRoot1, TreeNode* pRoot2){
        if(pRoot1==nullptr && pRoot2!=nullptr)
            return false;
        //if(pRoot1!=nullptr && pRoot2==nullptr)
        //    return true;
        //if(pRoot1==nullptr && pRoot2==nullptr)
        //    return true;
        if(pRoot2==nullptr)
            return true;
        if(pRoot1->val!=pRoot2->val)
            return false;
        return Tree1hasTree2(pRoot1->left,pRoot2->left)
            && Tree1hasTree2(pRoot1->right, pRoot2->right);
    }
};
