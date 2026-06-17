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
    void reorderList(ListNode* head) {
        vector<ListNode*>arr;
        while(head){
            arr.emplace_back(head);
            head = head->next;
        }
        if(arr.size()<=2) return;
        int left=0,right=arr.size()-1;
        ListNode* curr=nullptr;
        while(left<right){
            arr[left]->next = arr[right];
            if(curr){
                curr->next = arr[left];
            }
            curr = arr[right];
            ++left;
            --right;
        }
        if(left==right){
            curr->next=arr[left];
            curr= curr->next;
        }
        curr->next = nullptr;
    }
};
