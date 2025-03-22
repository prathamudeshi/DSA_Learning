#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
        int*arr;
        int top;
        int size;

    Stack(int size){
        this->size = size; 
        arr = new int[size];
        top = -1;
    }

    void push(int n){
        if(size == top){
            cout<<"Stack Overflow"<<endl;
        }
        else
            arr[++top] = n;
    }

    int pop(){
        if(top == -1){
            cout<<"Stack Underflow"<<endl;
            return -1;
        }
        else{
            size--;
            return arr[top--];
        }
    }

    int peek() {
        if (top == -1) {
            cout << "Stack is Empty" << endl;
            return -1;
        } else
            return arr[top];
    }

    int getSize() {
        return size;
    }

};

int main(){
    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout<<s.pop()<<endl;
    cout<<s.peek()<<endl; 
    cout<<s.getSize()<<endl; 

    return 0;
}