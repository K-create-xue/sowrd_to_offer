/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    vector<int> reversePrint(ListNode* head) {
		
   方法1：   
      vector<int> v;
        ListNode* _head=head;
        while(_head){
            v.push_back(_head->val);
            _head=_head->next;
        }
         reverse(v.begin(),v.end());
        return v;

   方法2：
       /* 
       vector<int> v;
        if(head==NULL)
        return v;
        ListNode* _end=head;
        while(_end->next!=NULL){
			v.push_back(_end->val);
            _end=_end->next;
        }
        v.push_back(_end->val);
        vector<int> v_reverse(v.rbegin(),v.rend());
        return v_reverse;
    */
    }
};
