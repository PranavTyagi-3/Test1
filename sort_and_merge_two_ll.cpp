#include <iostream>
using namespace std;

struct node{
    int data;
    struct node * next;
};

struct node *start1=NULL;
struct node *start2=NULL;

void insert1(int num){
    struct node * newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data=num;
    newnode->next=start1;
    start1=newnode;
}

void insert2(int num){
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data=num;
    newnode->next=start2;
    start2=newnode;
}

void disp(){
    struct node *ptr1=start1;
    struct node *ptr2=start2;
    while (ptr1!=NULL){
        cout<<ptr1->data<<" ";
        ptr1=ptr1->next;
    }
    cout<< endl;
    while (ptr2!=NULL){
        cout<<ptr2->data<<" ";
        ptr2=ptr2->next;
    }
}
void sort_merge(){
    struct node *ptr1=start1;
    struct node *ptr2=start2;
    struct node *final=NULL;
    int length=0;
    while (ptr1!=NULL){
        struct node *newnode =(struct node *)malloc(sizeof(struct node));
        newnode->data=ptr1->data;
        newnode->next=final;
        final=newnode;
        ptr1=ptr1->next;
        length++;
    }

    while (ptr2!=NULL){
        struct node *newnode =(struct node *)malloc(sizeof(struct node));
        newnode->data=ptr2->data;
        newnode->next=final;
        final=newnode;
        ptr2=ptr2->next;
        length++;
    }
    struct node *ptr_out=final;
    int temp;
    for (int i=0;i<length-1;i++){
        struct node *ptr_in=ptr_out;
        for (int j=i;j<length-1;j++){
            ptr_in=ptr_in->next;
            if (ptr_in->data < ptr_out->data){
                temp=ptr_in->data;
                ptr_in->data=ptr_out->data;
                ptr_out->data=temp;
                
            }
        }
        ptr_out=ptr_out->next;
    }

    //Display Result
    struct node *answer = final;
    while (answer!=NULL){
        cout<<answer->data<<" ";
        answer=answer->next;
    }
}
int main(){
    int l1[4]={6,9,4,8};
    int l2[4]={2,3,7,1};
    for (int i=0;i<4;i++){
        insert1(l1[i]);
        insert2(l2[i]);
    }
    disp();
    cout<<endl;
    sort_merge();

}