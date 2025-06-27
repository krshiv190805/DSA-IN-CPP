/*
class Node {
public:
    int data;
    Node* next;
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

// Function to reverse a linked list using the 3-pointer approach
Node* reverseLinkedList(Node *head) {
    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL){
        Node* front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }
    return prev;
}
*/
