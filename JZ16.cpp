/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* Merge(ListNode* l1, ListNode* l2) {
         ListNode* root=new ListNode(0);
        ListNode* cur=root;
        while(l1!=NULL&&l2!=NULL){
        if(l1->val<=l2->val){
            cur->next=l1;
            l1=l1->next;
        }else{
            cur->next=l2;
            l2=l2->next;
        }
            cur=cur->next;
        }
        //if(!l1) cur->next=l2;
        //if(!l2) cur->next=l1;
        cur->next=l1?l1:l2;
        return root->next;
        
        
//         if(!pHead1) return pHead2;
//         if(!pHead2) return pHead1;
//         if(pHead1->val<=pHead2->val){
//             pHead1->next= Merge(pHead1->next,pHead2);
//             return pHead1;
//         }else {
//             pHead2->next=Merge(pHead1,pHead2->next);
//             return pHead2;
//         }
    }
};
