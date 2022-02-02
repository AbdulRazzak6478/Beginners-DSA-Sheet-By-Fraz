/************************************************************

    Following is the linkedList class structure:

    class Node {
    public:
        int data;
        Node *next;

        Node(int val) {
            this->data = val;
            next = NULL;
        }
        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
};

************************************************************/

int binaryToInteger(int n, Node *head)
{
    //    Write your code here
    Node *temp = head;
    int ans = 0;
    while (temp != NULL)
    {
        ans *= 2;
        ans += (temp->data);
        temp = temp->next;
    }
    return ans;
    /*
    int num=0,nm=n;
    Node*temp=head;
    vector<int>v(n);
    int i=0;
    while(temp!=NULL)
    {
        v[i]=temp->data;
        temp=temp->next;
        i++;
    }
    int power=1,ans=0;
    i=0;
    while(1)
    {
        if(i==n)break;
        num=num*10+v[i];
        i++;
    }
    while(num>0)
    {
        int rem=num%10;
        ans=ans+power*rem;
        power*=2;
        num=num/10;
    }
    return ans;
    */
}