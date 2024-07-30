

/* 

The structure of the class is
class MyQueue {
private:
    int arr[100005];
    int front;
    int rear;

public :
    MyQueue(){front=0;rear=0;}
    void push(int);
    int pop();
};
 */

//Function to push an element x in a queue.
void MyQueue :: push(int x)
{
     //  if(front==rear && front!=0) return;
       arr[rear++]=x;
}
/*The method pop which return the element 
  poped out of the queue*/
int MyQueue :: pop()
{
    if(front==rear) return -1;
        int t= arr[front];
        front++;
    return t;
}