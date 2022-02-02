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
Node *deleteNode(Node *head, int pos)
{
    if (head == NULL)
    {
        return head;
    }

    if (pos == 0)
    {
        Node *tmp = head;
        head = head->next;
        delete tmp;
    }
    else
    {
        Node *tmp = deleteNode(head->next, pos - 1);
        head->next = tmp;
    }

    return head;
}

// Node *deleteNode(Node *head, int pos)
// {
//      if (pos == 0)
//     {
//         head = head->next;
//         return head;
//     }
//     Node *temp = head;
//     int count=0;
//     while(temp!=NULL&&count<pos-1)
//     {
//         temp=temp->next;
//         count++;
//     }
//     Node *toDelete;
//     if(temp->next!=NULL){
//         toDelete= temp->next;
// //         if(temp->next->next!=NULL)
//     		temp->next = temp->next->next;
//     }
//     //     delete toDelete;
//     return head;
// }
