#include<stdlib.h>
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode*ptr1=l1;
    struct ListNode*ptr2=l2;
    struct ListNode*head=NULL;
    struct ListNode*ptr3=NULL;
    head=malloc(sizeof(struct ListNode));
    ptr3=head;
    //ptr3->next=NULL;
    if(ptr1==NULL&&ptr2==NULL){
        printf("invalid");
        return 0;
    }
    if(ptr1==NULL){
        return ptr2;
    }
    if(ptr2==NULL){
        return ptr1;
    }
    ptr3->val=ptr1->val+ptr2->val;
    ptr1=ptr1->next;
    ptr2=ptr2->next;
    int carry=0;
    if(ptr3->val>9){
            ptr3->val=ptr3->val%10;
            carry=1;
        }
    while(ptr1!=NULL&&ptr2!=NULL){
        
        ptr3->next=malloc(sizeof(struct ListNode));
        ptr3=ptr3->next;
        //ptr3->next=NULL;
        ptr3->val=ptr1->val+ptr2->val+carry;
        carry=0;
        if(ptr3->val>9){
            ptr3->val=ptr3->val%10;
            carry=1;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
        //ptr3=ptr3->next;
        //ptr3->next=malloc(sizeof(struct ListNode));
    }
    while(ptr1!=NULL){
        ptr3->next=malloc(sizeof(struct ListNode));
        ptr3=ptr3->next;
        //ptr3->next=NULL;
        ptr3->val=ptr1->val+carry;
        carry=0;
        if(ptr3->val>9){
            ptr3->val=ptr3->val%10;
            carry=1;
        }
        ptr1=ptr1->next;
    }
    while(ptr2!=NULL){
        ptr3->next=malloc(sizeof(struct ListNode));
        ptr3=ptr3->next;
        //ptr3->next=NULL;
        ptr3->val=ptr2->val+carry;
        carry=0;
        if(ptr3->val>9){
            ptr3->val=ptr3->val%10;
            carry=1;
        }
        ptr2=ptr2->next;
    }
    if(carry==1){
        ptr3->next=malloc(sizeof(struct ListNode));
        ptr3=ptr3->next;
        //ptr3->next=NULL;
        ptr3->val=1;
        
    }
    ptr3->next=NULL;
    return head;
}