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

Node *findMiddle(Node *head)
{
    int l = 1;
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
        l++;
    }
    int mid = l / 2;
    int count = 0;
    temp = head;
    while (temp != NULL && count != mid)
    {
        temp = temp->next;
        count++;
    }
    return temp;
}