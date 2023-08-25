#include <stdio.h>

struct node {
    int value;
    struct node *next;
};

void insert_node(struct node *insert, struct node *after);
void remove_node(struct node *remove);

int main(void) {
    struct node n1, n2, n3, n0;
    struct node *list_pointer = &n1;

    struct node head;
    head.next = &n1;

    n1.value = 1;
    n2.value = 2;
    n3.value = 3;
    n0.value = 0;

    insert_node(&n0, &head);
    list_pointer = head.next;

    insert_node(&n2, &n1);
    insert_node(&n3,&n2);

    remove_node(&head);
    list_pointer = head.next;
    
    n3.next = (struct node *) 0;
    
    while (list_pointer != (struct node *) 0) {
        printf("%i\n", list_pointer->value);
        list_pointer = list_pointer->next;
    }

}

void insert_node(struct node *insert, struct node *after) {
    insert->next = after->next;
    after->next = insert;
}

void remove_node(struct node *remove) {
   remove->next = (remove->next)->next;
}
