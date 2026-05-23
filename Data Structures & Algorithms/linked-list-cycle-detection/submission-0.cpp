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
    bool hasCycle(ListNode* head) {
        unordered_map<ListNode*,int> tmp;
        ListNode* temp = head;
        while(temp!=nullptr){
            if(tmp[temp]==0){
                tmp[temp]++;
                temp = temp->next;
            }else return true;
        }
        return false;
    }
};
