/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* root=head;
        ListNode* prev=head;
        
        while(root!=NULL){
            if(root->val==val){
                if(root==head){
                    head=head->next;
                    root=head;
                }
                else{
                    root=root->next;
                    prev->next=root;
                  //  prev=prev->next;
                }
            }
            else{
                prev=root;
                root=root->next;
       
            }
            
        }
        
        return head;
        
    }
};