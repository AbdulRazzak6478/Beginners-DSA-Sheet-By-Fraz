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
int length(Node *head)
{
    int l = 1;
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
        l++;
    }
    return l;
}
int findIntersection(Node *firstHead, Node *secondHead)
{
    // Write your code here
    int l1 = length(firstHead);
    int l2 = length(secondHead);
    int d = 0;
    Node *p1;
    Node *p2;
    if (l1 > l2)
    {
        d = l1 - l2;
        p1 = firstHead;
        p2 = secondHead;
    }
    else
    {
        d = l2 - l1;
        p2 = firstHead;
        p1 = secondHead;
    }
    while (d--)
    {
        p1 = p1->next;
    }
    while (p1 != NULL && p2 != NULL)
    {
        if (p1 == p2)
        {
            return p1->data;
        }
        p1 = p1->next;
        p2 = p2->next;
    }
    return -1;
}