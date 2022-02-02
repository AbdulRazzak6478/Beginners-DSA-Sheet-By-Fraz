#include <queue>
class Stack
{
    // Define the data members.

public:
    queue<int> q1;
    queue<int> q2;
    Stack()
    {
        // Implement the Constructor.
    }

    /*----------------- Public Functions of Stack -----------------*/

    int getSize()
    {
        // Implement the getSize() function.
        return q1.size();
    }

    bool isEmpty()
    {
        // Implement the isEmpty() function.
        return q1.empty();
    }

    void push(int element)
    {
        // Implement the push() function.
        q2.push(element);
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> t = q1;
        q1 = q2;
        q2 = t;
    }

    int pop()
    {
        // Implement the pop() function.
        if (q1.empty())
            return -1;
        int ele = q1.front();
        q1.pop();
        return ele;
    }

    int top()
    {
        // Implement the top() function.
        if (q1.empty())
            return -1;
        return q1.front();
    }
};