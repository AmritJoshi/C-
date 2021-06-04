#include<iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};

void Insert(node** head){
    int key;
    cout<<"Insert: ";
    cin>>key;

    node* temp=new node;

    if(temp==NULL){
        cout<<"no memory";
        return;
    }
    temp->data=key;
    temp->next=NULL;

    if(*head==NULL){
        *head=temp;
        return;
    }else{
        node* itr=*head;

        while(itr->next!=NULL)
            itr=itr->next;
        itr->next=temp;
    }
    
}
void deletefirstelement(node** head){
    node *temp=*head;
    if(*head==NULL){
        cout<<"nothing to delete";
    }else{
        cout<<"deleted elsement: "<<(*head)->data;
        *head=(*head)->next;
        free(temp);
    }
}

void display(node* head){
    node *temp=head;
    if(head==NULL){
        cout<<"empty";
    }else{
        cout<<"no's are :"<<endl;
        while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    }
    
}
int main(){
    node *head=NULL;
    int n=1,ch;
    while(n==1){
     cin>>ch;

        switch (ch)
        {
        case 1:Insert(&head);
            break;
        case 2:deletefirstelement(&head);
            break;
        case 3:display(head);
            break;       
        default:cout<<"wrong choice";
            break;
        }
    }

}