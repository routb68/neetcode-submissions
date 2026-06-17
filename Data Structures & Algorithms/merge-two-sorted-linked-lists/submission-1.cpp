class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1) return list2;
        if(!list2) return list1;
        if(list1->val <list2->val){
            ListNode* ans = mergeTwoLists(list1->next,list2);
            list1->next=ans;
            return list1;
        }else{
            ListNode* ans = mergeTwoLists(list1,list2->next);
            list2->next=ans;
            return list2;
        }
        return NULL;
    }
};