/*
The structure of the node of the queue is
struct QueueNode
{
    int data;
    QueueNode *next;
};


and the structure of the class is
class Queue {
private:
    QueueNode *front;
    QueueNode *rear;
public :
    void push(int);
    int pop();
};

 */

/* The method push to push element into the queue*/
void Queue:: push(int x)
{
        QueueNode *root = new QueueNode();
        root->data = x;
        root->next = NULL;
        if(rear==NULL)
        {
            front = root;
            rear = front;
        }
        else
        {
            rear->next = root;
            rear = root;
        }
}

/*The method pop which return the element poped out of the queue*/
int Queue :: pop()
{
        if(front!=NULL)
        {
            QueueNode* temp = front;
            if(front->next)
                front = front->next;
            else
            {
                front=NULL;
                rear=NULL;
            }
            int ans = temp->data;
            delete(temp);
            return ans;
        }
        return -1;
}
