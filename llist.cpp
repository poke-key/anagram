
#include <iostream>
#include "llist.hpp"

void add(struct Person **head, struct Person *node) {
    if(*head == NULL) {
        *head = node;
        node-> nptr = NULL;
    }
    
    struct Person *headptr = *head;
    while(headptr->nptr) {
        headptr = headptr -> nptr;
    }
    headptr->nptr = node;
    node-> nptr = NULL;
}

void remove(struct Person **head, struct Person *node) {
    if(*head == NULL) {
        return;
    }
    // implement actual code hear   
    struct Person *headptr = *head;
    while(headptr->nptr) {
        if(headptr->nptr == node){
            //headptr is node's prev
            headptr->nptr = node->nptr;
            free(node);    
            break;
        }
        headptr = headptr -> nptr;
    } 
}

void insert(struct Person *afternode, struct Person *node) {
    // implement actual code hear
    node->nptr = afternode->nptr;
    afternode->nptr = node;
}
struct Person *find(struct Person *head, string first_name, string last_name) {
    if(head == NULL) {
        return NULL;
    }
    struct Person *headptr = head;
    while(headptr) {
        if(headptr->first_name == first_name && headptr->last_name == last_name) {
            return headptr;
        }
        headptr = headptr->nptr;
    }
    return NULL;
}


void print(struct Person **head) {
    if(*head == NULL) {
        return;
    }
    struct Person *headptr = *head;
    cout << "-----------------\n";
    while(headptr) {
       
        cout << headptr->last_name << ", " << headptr->first_name << ", " << headptr-> age << ", " << (headptr->gender?"female":"male") << "\n";
        headptr = headptr -> nptr;
        
    }
    cout << "-----------------\n";
}
