#include <iostream>
#include<ostream>

using namespace std;
int Q[100],maxsize,rear,front;
void Createqueue(int size)
{
    maxsize=size;
   front=0;
rear=-1;
}
void Enqueue(int e)
{
    rear++;
    Q[rear]=e;
}
int Dequeue()
{
    int temp;
    temp=Q[front];
    front++;
    return (temp);
}

int isFull()
{
    if (rear==(maxsize-1))
    return(1);
    else
        return (0);
}
int isEmpty()
{
    if(front>rear)
        return(1);
        else
        return(0);
}
void printQueue()
{
    int i;
    for(i=front;i<=rear;i++)
    {
        cout<<Q[i]<<" ";
    }
}

int main()
{
     int size;
    int ch;
    int num;
    cout<<"Enter size of Queue"<<endl;
    cin>>size;
    Createqueue(size);
     do{
    cout << "Select choice\n 1. Enqueue \n 2. Dequeue \n 3. isFull \n 4. isEmpty \n 5. printQueue \n 0. Exit " << endl;
    cin>>ch;
    switch(ch){
            case 1: if(isFull()){
                    cout<<"Queue is full";


                    }
                    else
                        {
                            cout<<"Enter element"<<endl;
                        cin>>num;
                        Enqueue(num);
                    }
                    break;
            case 2: if(isEmpty()){
                cout<<"Queue is Empty";


                    }
                    else
                        Dequeue();
                    break;
            case 3: if(isFull())
                        cout<<"Full"<<endl;
                    else
                        cout<<"Not Full"<<endl;
                    break;
            case 4: if(isEmpty())
                        cout<<"queue is empty"<<endl;
                    else
                        cout<<"Not empty"<<endl;
                    break;
            case 5:
                if(isEmpty()){
                cout<<"Queue is empty "<<endl;
                }
                else
                    printQueue();
                break;
            case 0: exit(0);
                    break;
            default:
                    cout<<"Wrong choice"<<endl;
                    }
     }
    while(ch!=0);

    return 0;
}

