//striver-brute force we can use hash map to get the visited nodes and if the node occurs twice there is cycle and if pointer reaches to the null no cycle present.
//optimize -  like prev que of cycle we will use slow and fast pointer,till both of the pointr do not collides,
//step2 - find the starting of the ll,we will use entry pointer frm head and start pointer from the point of collision and when they both meet we will get result.

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
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL)
        {
            return NULL;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* entry=head;

        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){//yes cycle
                while(slow!=entry){//found entry point
                    slow=slow->next;
                    entry=entry->next;
                }
                return entry;
            }
        }
        return NULL;
        
    }
};
