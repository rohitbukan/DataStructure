/*Stack Program*/
#include <iostream>

using namespace std;
int MaxSize;    //max size of stack
int tos = -1;   // tos is top of stack
int *s;

void initStack(int size){   //size is size of stack to be created
    MaxSize = size;
    tos = -1;
    s=new int[size];
    cout<<"stack created"<<endl;
    }


void push(int e){   // e is for int element to be push

    tos++;
    s[tos]=e;


}
int pop(){
    int temp=tos;
    tos--;
    return s[temp];

}
int isFull(){
    if(tos==MaxSize-1)
            return 1;
    else
            return 0;
    }
int isEmpty(){
    if(tos==-1)
            return 1;
    else
            return 0;
    }
int atTop(){
    return s[tos];
    }


int main()
{   int size;
    int ch;
    int num;
    cout<<"Enter size of stack to be created"<<endl;
    cin>>size;
    initStack(size);

    do{
    cout << "Select choice\n 1. push \n 2. pop \n 3. isFull \n 4. isEmpty \n 5. atTop \n 0. Exit " << endl;
    cin>>ch;
    switch(ch){
            case 1: if(tos!=MaxSize-1){
                    cout<<"Enter element";
                    cin>>num;
                    push(num);
                    }
                    else
                        cout<<"stack is full"<<endl;
                    break;
            case 2: cout<<pop()<<endl;
                    break;
            case 3: if(isFull())
                        cout<<"Full"<<endl;
                    else
                        cout<<"Not Full"<<endl;
                    break;
            case 4: if(isEmpty())
                        cout<<"Stack is empty"<<endl;
                    else
                        cout<<"Not empty"<<endl;
                    break;
            case 5: if(!isEmpty()){
                cout<<atTop()<<endl;
                }
                else
                    cout<<"Stack is empty"<<endl;
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
