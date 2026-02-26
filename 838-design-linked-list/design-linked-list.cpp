
class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = nullptr;
    }
};

class MyLinkedList {
public:
    Node* head;
    int size;

    MyLinkedList() {
        head = nullptr;
        size = 0;
    }

    int get(int index) {
        if (index >= size || index < 0)
            return -1;
        Node* temp = head;
        for (int i = 0; i < index; i++)
            temp = temp->next;
        return temp->val;
    }

    void addAtHead(int val) {
        Node* temp = new Node(val);
        temp->next = head;
        head = temp;
        size++;
    }

    void addAtTail(int val) {
        // if (index >= size || index < 0) return;
        // Node *temp = head;
        // Node *test = new Node(val);
        // for(int i = 0; i < size; i++){
        //     temp = temp -> next;
        // }

        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next)
                temp = temp->next;
            temp->next = newNode;
        }
        size++;
    }

    void addAtIndex(int index, int val) {
        if (index < 0 || index > size)
            return;
        if (index == 0) {
            addAtHead(val);
            return;
        }
        if (index == size) {
            addAtTail(val);
            return;
        }
        Node* newNode = new Node(val);

        Node* temp = head;
        for (int i = 0; i < index - 1; i++)
            temp = temp->next;
        newNode->next = temp->next;
        temp->next = newNode;
        size++;
        // Node* temp1 = head;
        // Node* temp2 = head;
        // for(int i = 0; i < index-1; i++){
        //     temp1 = temp1 -> next;
        // }
        // for(int i = 0 ; i < index; i++){
        //     temp2 = temp2 -> next;
        // }
        // newNode-> next = temp2;
        // temp1->next = newNode
    }
    void deleteAtHead() {
        if (!head)
            return;
        // if (!head->next) {
        //     delete head;
        //     size--;
        // }
        Node* temp = head;
        head = head->next;
        delete temp;
        size--;
    }
    void deleteAtTail() {
        if (!head)
            return;
        if (!head->next) {
            delete head;
            head = nullptr;
        } else {
            Node* temp = head;
            while (temp->next->next) {
                temp = temp->next;
                delete temp->next;
                temp->next = nullptr;
            }
        }
        size--;
    }
    void deleteAtIndex(int index) {
        if (index < 0 || index >= size)
            return;
        if (index == 0) {
            deleteAtHead();
        } else {
            Node* curr = head;
            for (int i = 0; i < index - 1; i++)
                curr = curr->next;
            Node* toDelete = curr->next;
            curr->next = curr->next->next;
            delete toDelete;
            size--;
        }
    }
};

