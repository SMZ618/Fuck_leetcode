// Fast slow pointer 
// Detect if there is a cycle in linked list
// fast pointer moves two steps one time, slow pointer moves one step one time
// if they can meet, then there exists a cycle. 
// Note : check whether fast -> next is NULL to avoid bug

using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};
bool has_cycle(ListNode* head){
    ListNode* fast = head;
    ListNode* slow = head;
    while(fast != NULL && slow != NULL && fast -> next != NULL){
        fast = fast -> next -> next;
        slow = slow -> next;
        if(fast == slow) return true;
    }
    return false;
}