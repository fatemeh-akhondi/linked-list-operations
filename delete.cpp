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
void Delete(int d){
    node* temp1 = head;
    if( d == 1 ){
        head = temp1->link;
        delete temp1;
        return;
    }
    for(int i = 0; i<d-2 ; i++){
        temp1 = temp1->link;
    }
	node* temp2 = temp1->link;
    temp1->link = temp1->link->link;
    delete temp2;
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
    int d;
    cout<<"enterthe position you want to be deleted"<<endl;
    cin>>d;
    Delete(d);
    print();
}
