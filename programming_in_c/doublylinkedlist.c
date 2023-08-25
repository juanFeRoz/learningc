#include <stdio.h>

struct node {
    int value;
    struct node *prev;
    struct node *next;
};

void insert_node(struct node *insert, struct node *after);
void remove_node(struct node *remove);

int main(void) {
    struct node n1, n2, n3;
    struct node *list_pointer;
 
    struct node head;
    head.next = &n1;
    head.prev = (struct node *) 0;

    n1.value = 1;
    n2.value = 2;
    n3.value = 3;
    
    insert_node(&n1, &head);
    insert_node(&n2, &n1);
    insert_node(&n3, &n2);

    remove_node(&n1);
    head.next = n1.next;
    
    n3.next = (struct node *) 0;
    
    list_pointer = head.next;
    while (list_pointer != (struct node *) 0) {
        printf("%i\n", list_pointer->value);
        list_pointer = list_pointer->next;
    }
}


void insert_node(struct node *insert, struct node *after) {
    insert->next = after->next;
    insert->prev = after;
    if (after->next != (struct node *) 0)
        after->next->prev = insert;
    after->next = insert;
}

void remove_node(struct node *remove) {
    remove->prev->next = remove->next;
    remove->next->prev = remove->prev;
}
