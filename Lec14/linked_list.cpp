#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int ele){
        data = ele;
        next = nullptr;
    }
};

class LinkedList{
    Node *head;
    Node *tail;
    public:
    LinkedList(){
        head = tail = nullptr;
    }

    void push_back(int ele){
        Node *n = new Node(ele);

        if(tail == nullptr){
            head = tail = n;
            return;
        }

        tail->next = n;
        tail = n;
    }

    void push_front(int ele){
        Node *n = new Node(ele);

        if(head == nullptr){
            head = n;
            tail = n;
            return;
        }

        n->next = head;
        head = n;
    }

    void pop_back(){
        if(tail == nullptr){
            cout<<"List underflow"<<endl;
            return;
        }

        if(head == tail){
            head = tail = nullptr;
            return;
        }

        Node *q = head;

        while(q->next != tail){
            q = q->next;
        }

        q->next = nullptr;
        tail = q;
    }

    void pop_front(){
        if(head == nullptr){
            cout<<"List underflow"<<endl;
            return;
        }

        if(head == tail){
            head = tail = nullptr;
            return;
        }

        head = head->next;
    }

    void display(){
        Node *q = head;

        while(q!=nullptr){
            cout<<q->data<<" ";
            q = q->next;
        }
        cout<<endl;
    }
};

int main(){
    LinkedList lst;

    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(30);

    lst.display();

    lst.pop_front();
    lst.push_front(40);
    lst.push_front(50);

    lst.pop_back();

    lst.display();

    return 0;
}