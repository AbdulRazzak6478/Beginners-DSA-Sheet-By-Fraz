/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/
#include <bits/stdc++.h>

bool isPalindrome(LinkedListNode<int> *head)
{

    // Write your code here.

    stack<int> st;

    LinkedListNode<int> *p = head;

    while (p)
    {

        st.push(p->data);

        p = p->next;
    }

    int i = 0;

    int j = st.size() - 1;

    p = head;

    while (i < j)
    {

        if (p->data != st.top())
        {

            return false;
        }

        p = p->next;

        st.pop();

        i++, j--;
    }

    return true;
}
/*
bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    LinkedListNode<int>*curr=head;
    LinkedListNode<int>*prevptr=NULL;
    LinkedListNode<int>*nextptr;
    while(curr!=NULL)
    {
        nextptr=curr->next;
        curr->next=prevptr;
        prevptr=curr;
        curr=nextptr;
    }
    LinkedListNode<int>*temp=head;
    while(temp!=NULL&&prevptr!=NULL)
    {
        if(temp->data!=prevptr->data)
            return false;
        temp=temp->next;
        prevptr=prevptr->next;
    }
    return true;
}
*/