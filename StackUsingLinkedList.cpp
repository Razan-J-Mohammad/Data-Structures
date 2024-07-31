#include<iostream>
class stack{
    struct node
    {
       int item;
      node*next;
    };
    public:
    node*top,*temp,*curr;

    stack(){
        top=NULL;
    }

    //push function
    void push(int element){
        node*elemnode=new node;//create new node

        elemnode->item=element;
        elemnode->next=top;
        top=elemnode;
    }

    //pop function
    void pop(){
        temp=top;
        top=top->next;
        delete temp;

    }
    void print(){
    
     curr=top;
     while(!curr){
        std::cout<<curr->item<<"   ";
        curr=curr->next;
     }

    }
    
};
void main (){
    stack S;
    S.push(10);
    S.push(5);
    S.push(6);
    S.push(7);
    S.push(9);
    S.push(3);
    S.pop();
    S.print();
}