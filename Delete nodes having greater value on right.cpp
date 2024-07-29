class Solution
{
public:
    Node* compute(Node* head)
    {
        if (head == NULL || head->next == NULL) return head;

        
        Node* prev = NULL;
        Node* curr = head;
        Node* next;

        while (curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        head = prev;

        
        Node* maxNode = head;
        curr = head;
        while (curr != NULL && curr->next != NULL) {
            if (curr->next->data < maxNode->data) {
                Node* toDelete = curr->next;
                curr->next = curr->next->next;
                delete toDelete;
            } else {
                curr = curr->next;
                maxNode = curr;
            }
        }

        
        prev = NULL;
        curr = head;
        while (curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        head = prev;

        return head;
    }
};
