// class MinStack {
// public:
// vector<int>vec;
// MinStack() {

// }

// void push(int val) {
//     vec.push_back(val);
// }

// void pop() {
//     auto it = vec.end()-1;
//     vec.erase(it);
// }

// int top() {
//     return vec[vec.size()-1];
// }

// int getMin() {
//     return *min_element(vec.begin(),vec.end());
// }
// };
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
class MinStack
{
public:
    Node *head;
    MinStack()
    {
        head = NULL;
        // set<int>
    }

    void push(int val)
    {
        Node *n = new Node(val);
        n->next = head;
        head = n;
    }

    void pop()
    {
        if (head == NULL)
            return;
        head = head->next;
    }

    int top()
    {
        if (head == NULL)
            return -1;
        return head->data;
    }

    int getMin()
    {
        Node *temp = head;
        int minele = temp->data;
        temp = temp->next;
        while (temp != NULL)
        {
            if (minele > temp->data)
            {
                minele = temp->data;
            }
            temp = temp->next;
        }
        return minele;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */