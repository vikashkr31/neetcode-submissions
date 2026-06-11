/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    unordered_map<Node*, Node*> m;
    Node* copyRandomList(Node* head) {
        Node* newHead = NULL;
        Node* newCurr = NULL;
        Node* curr = head;
        while(curr != NULL) {
            Node* node = new Node(curr->val);
            if(newHead == NULL) {
                newHead = node;
                newCurr = node;
                m[curr] = node;
                curr = curr->next;
                continue;
            }

            m[curr] = node;
            newCurr->next = node;
            newCurr = node;
            curr = curr->next;
        }
        curr = head;
        newCurr = newHead;

        while(curr!=NULL) {
            newCurr->random = m[curr->random];
            curr = curr->next;
            newCurr = newCurr->next;
        }
        return newHead;
    }
};
