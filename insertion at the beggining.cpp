#include <iostream>
using namespace std;
struct node{
    int data;
    node* link;
};
node* head;
void insert(int x){//inserts n
    node* temp = new node;
    temp->data = x;
    temp->link = head;
    head = temp;
    return;
}
void print(){//prints all elements of the list
    node* temp2 = head;
    while(temp2 != NULL){
        cout<<temp2->data<<endl;
        temp2 = temp2->link;
    }
    return;
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
}

