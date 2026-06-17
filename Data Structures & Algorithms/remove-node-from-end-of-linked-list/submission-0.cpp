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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<ListNode*>nums;
        while(head){
            nums.push_back(head);
            head = head->next;
        }
        int idx = nums.size()-n;
        if(idx==0) return nums[0]->next;
        else nums[idx-1]->next = nums[idx]->next;
        return nums[0];
    }
};
