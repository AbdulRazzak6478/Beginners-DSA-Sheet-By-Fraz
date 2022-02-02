/****************************************************************
    Following is the class structure of the Node class:
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };
*****************************************************************/
#include <bits/stdc++.h>
Node *removeDuplicates(Node *head)
{
    // Write your code here
    unordered_map<int, int> m;

    Node *cur = head;

    m[cur->data] = 1;

    Node *prev = cur;

    cur = cur->next;

    while (cur != NULL)
    {

        if (m[cur->data])
        {

            prev->next = cur->next;

            free(cur);
        }

        else
        {

            m[cur->data] = 1;

            prev = cur;
        }

        cur = prev->next;
    }

    return head;
}