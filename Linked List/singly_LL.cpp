#include<iostream>
using namespace std;


class Node{
    public:
    int data ;
    Node* next ;

    //constructor banain ga

    Node(int data){
        this -> data = data ;
        this -> next = NULL ; 
    }

};

void insertAtHead( Node* &head , int d){
    //new node create karan ga
    Node* temp = new Node(d);
    temp ->  next = head;
    head = temp;

// Node* temp = new Node(5)
// → temp: [5 | NULL]

// temp->next = head
// → temp: [5 | →10]

// head = temp
// → head now points to [5]

}

void print(Node* &head){

    Node* temp = head;

    while(temp != NULL){
        cout<<temp -> data <<" ";
        temp  = temp -> next;
    }
    cout<<endl;
}

int main(){
    //created a new node
    Node* node1 = new Node(10);
    cout<< node1 -> data <<endl;
    cout<< node1 -> next <<endl;

    //head pointed to node1
    Node* head = node1;
    print(head);
    insertAtHead(head,15);
    print(head);

    return 0;
}