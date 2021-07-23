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
    ListNode* ReverseList(ListNode* pHead) {
      //通过遍历每个节点，保存下一个节点，将节点的next指向上一个节点
//         if(pHead==nullptr) return pHead;
//         ListNode* now=pHead;
//         ListNode* store=NULL;
//         ListNode* _next=NULL;
//         while(now->next){
//             store=now->next;
//             now->next=_next;
//             _next=now;
//             now=store;
//         }
//         now->next=_next;
//         return now;
        
        //遍历每个节点，保存在vector中，然后reverse，然后将从头到尾连接起来
        if(!pHead) return nullptr;
        vector<ListNode*> v;
        while(pHead){
            v.push_back(pHead);
            pHead=pHead->next;
        }
        reverse(v.begin(),v.end());
        ListNode* head=v[0];
        ListNode* now=head;
        for(int i=1;i<v.size();i++){
            now->next=v[i];
            now=v[i];
            //head=head->next;
        }
        now->next=nullptr;
        return head;
    }
};
