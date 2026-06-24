// #include <iostream>
// using namespace std;


// class Node{
//     public:
//     int data;
//     Node *next;
//     Node(int data){
//         this -> data = data;
//         this -> next = NULL;
//     }
// };

// void insertNode(Node* &head, int d ){
//     Node* temp = new Node(d);
//     temp->next = head;
//     head = temp;

// }

// void print(Node* head ){
//     Node* temp = head;
//     while(temp!= NULL){
//         cout << temp-> data<<" ";
//         temp = temp->next;
//     }
//     cout <<endl;
// }

// int main(){
//     Node* node1 = new Node(10);
    
//     cout << node1 -> data <<endl;
//     cout << node1 -> next <<endl;

//     Node* head = node1;
//     insertNode(head,12);
//     print(head);
//     insertNode(head,15);
//     print(head);
//     insertNode(head,20);
//     print(head);

//     return 0;
// }   

// Second Method :
#include <iostream>
using namespace std;


class Node{
    public :
        int data ;
        Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};
class List {
    Node* head;
    Node* tail;
    public:
    List(){
        head = NULL;
        tail = NULL;
    }
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head= newNode;
            tail =newNode;
            return;
        }else{
            newNode->next = head;
            head = newNode; 

        }
    }
    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            tail=newNode;

        }
    }
    void pop_front(){
        if(head==NULL){
            cout<<"LindList is empty";
            return;
        }
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    void pop_back(){
        if(head==NULL){
            cout<<"LindList is empty";
            return;
        }
        Node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }
    void insert_at_middle(int val , int pos){
        if(pos<0){
            return;
        }
        if(pos == 0){
            cout<< "position is zero "<<endl;
            push_front(val);
            return;
        }
        Node* temp = head;
        for(int i =0; i < pos-1; i++){
            temp = temp->next;
        }
        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;

    }
    int search_ll(int key){
        Node* temp = head;
        int index = 0;
        while(temp != NULL){
            if(temp->data == key){
                return index;
            }
            temp = temp->next;
            index++;
        }
        return -1;
    }
    void printLL(){
        Node *temp = head;
        while(temp != NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

int main(){
    List ll;
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(5);
    ll.printLL();
    cout<<ll.search_ll(3);
    // ll.insert_at_middle(8,3);   
    // ll.printLL();
    // ll.insert_at_middle(9,0);         
    // ll.pop_front();
    // ll.printLL();
    // ll.pop_back();
    // ll.printLL();
    
    return 0;
}   