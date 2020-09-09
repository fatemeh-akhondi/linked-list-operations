#include <iostream>
using namespace std;
struct node{
    int data;
    node* link;
};
node* head;
void insert(int x){//inserts n
    node* temp = new node;
     if(head == NULL){
        head = temp;
        temp->data = x;
    	temp->link = NULL;
    	return;
    }
    temp->data = x;
    temp->link = NULL;
    node* temp2;
    temp2 = head;
    while(temp2->link != NULL){
        temp2 = temp2->link;
    }
    temp2->link = temp;
}
void reverse(){//reverses the list
    node *current, *prev, *next;
    current = head;
    prev = NULL;
    next = current->link;
    while(current != NULL){
    	next = current->link;
        current->link = prev;
		prev = current;
        current = next;
    }
    head = prev;
    return;
}
void print(){//prints all elements of the list
    node* temp2 = head;
    while(temp2 != NULL){
        cout<<temp2->data<<" ";
        temp2 = temp2->link;
    }
    cout<<endl;
}
int main(){
    head = NULL;
    int n,x;
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    cout<<"enter the elements"<<endl;
    for( int i = 0; i<n ; i++){
        cin>>x;
        insert(x);
    }
    print();
    reverse();
    cout<<"reversed list"<<endl;
    print();
}
