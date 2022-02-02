/************************************************************

    Following is the linked list node structure.

    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/
Node<int> *sortTwoLists(Node<int> *first, Node<int> *second)
{
    if (first == NULL)
        return second;
    if (second == NULL)
        return first;
    Node<int> *result;
    if (first->data < second->data)
    {
        result = first;
        result->next = sortTwoLists(first->next, second);
    }
    else
    {
        result = second;
        result->next = sortTwoLists(first, second->next);
    }
    return result;
}
/*
Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    Node<int>*temp1=first;
    Node<int>*temp2=second;
    Node<int>*dummy=new Node<int>(-1);
    Node<int>*p=dummy;
    while(temp1!=NULL&&temp2!=NULL)
    {
        if(temp1->data<temp2->data)
        {
            p->next=temp1;
            temp1=temp1->next;
            p=p->next;
        }
        else
        {
            p->next=temp2;
            temp2=temp2->next;
            p=p->next;
        }
    }
    while(temp1!=NULL)
    {
         p->next=temp1;
            temp1=temp1->next;
            p=p->next;
    }
    while(temp2!=NULL)
    {
         p->next=temp2;
            temp2=temp2->next;
            p=p->next;
    }
    return dummy->next;
}
*/
