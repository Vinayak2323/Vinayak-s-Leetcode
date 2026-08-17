#include<stdlib.h>

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode*ptr=list1;
    struct ListNode*ptr1=list2;
    struct ListNode *head=NULL;
    struct ListNode *ptr3=NULL;
    head=malloc(sizeof(struct ListNode));
    ptr3=head;
    
    if(ptr==NULL){
        return ptr1;
    }
    if(ptr1==NULL){
        return ptr;
    }
    if(ptr->val<=ptr1->val){
        ptr3->val=ptr->val;
        ptr=ptr->next;
    }
    else{
        ptr3->val=ptr1->val;
        ptr1=ptr1->next;
    }
    while(ptr!=NULL&&ptr1!=NULL){
    ptr3->next=malloc(sizeof(struct ListNode));
    ptr3=ptr3->next;
    if(ptr->val<=ptr1->val){
        ptr3->val=ptr->val;
        /*ptr3->next=malloc(sizeof(struct ListNode));
        ptr3=ptr3->next;*/
        ptr=ptr->next;
    }
    else{
        ptr3->val=ptr1->val;
        /*ptr3->next=malloc(sizeof(struct ListNode));
        ptr3=ptr3->next;*/
        ptr1=ptr1->next;
    }
    
    }
    while(ptr!=NULL){
        ptr3->next=malloc(sizeof(struct ListNode));
        ptr3=ptr3->next;
        ptr3->val=ptr->val;
        /*ptr3->next=malloc(sizeof(struct ListNode));
        ptr3=ptr3->next;*/
        ptr=ptr->next;
    }
    while(ptr1!=NULL){
        ptr3->next=malloc(sizeof(struct ListNode));
        ptr3=ptr3->next;
        ptr3->val=ptr1->val;
        /*ptr3->next=malloc(sizeof(struct ListNode));
        ptr3=ptr3->next;*/
        ptr1=ptr1->next;
    }
    ptr3->next=NULL;
    return head;
}