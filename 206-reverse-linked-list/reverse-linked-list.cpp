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
    ListNode* reverseList(ListNode* head) {
    //assigning previous node to nullptr since we need to focus on the next node
        ListNode* prev = nullptr;
    //assigining the current node to the head of the linked list
        ListNode* current = head;
    //create while loop to traverse through the list, make sure we are not at a nullptr first, then go on
        while(current != nullptr){
    //to move through the list, save the next node we move to before replacing the pointer or else we will lose the entire list
            ListNode* next = current -> next;
    //reverse the list, instead of going forward, we now move backwards
            current -> next = prev;
    //now the current node is the one we got to when traversing backwards since we are reversing the list
            prev = current;
    //current node is now going to move forwards with the reversed list
            current = next;
        }
    //return reversed linked list by resturning prev as the new head
        return prev;

    }
};