//inserts at nth position
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
void ninsert(int x, int z){//inserts at nth position
    node* temp = new node;
    temp->data = x;
    if (z == 1){
        temp->link = head;
        head = temp;
        return;
    }
    node* temp1;
    temp1 = head;
    for(int i=0; i<z-2 ; i++){
        temp1 = temp1->link;
    }
    temp->link = temp1->link;
    temp1->link = temp;
    return;
}
void print(){//prints all elements of the list
    node* temp2 = head;
    while(temp2 != NULL){
        cout<<temp2->data<<" "<<endl;
        temp2 = temp2->link;
    }
}
int main(){
    head = NULL;
    int n,x,z;
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    cout<<"enter the elements"<<endl;
    for( int i = 0; i<n ; i++){
        cin>>x;
        insert(x);
    }
    print();
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    for( int i = 0; i<n ; i++){
        cout<<"enter the element = ";
		cin>>x;
		cout<<"enter the position = ";
		cin>>z;
        ninsert(x,z);
    }
    print();
}

