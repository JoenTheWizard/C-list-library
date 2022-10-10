#include "list.h"

void add_l(node_l* h, int val) {
    node_l* cur = h;

    if (h == NULL) {
        //printf("hit!\n");
        // h = (node_l*)malloc(sizeof(node_l));
        // h->data = val;
        // h->next = NULL;
        node_l* tmp = (node_l*)malloc(sizeof(node_l));
        tmp->next = NULL;
        h = tmp;
        return;
    } 

    while (cur->next != NULL)
            cur = cur->next;

    //Dynamically allocate the new node
    cur->next = (node_l*)malloc(sizeof(node_l));

    assert(cur->next != NULL);
    cur->next->data = val;
    cur->next->next = NULL;
}

void print_list(node_l* h) {
    node_l* current = h;

    while (current != NULL) {
        printf("%i\n",current->data);
        current = current->next;
    }
}

void free_list(node_l* h) {
    node_l* tmp;
    while (h != NULL) {
        tmp = h;
        h = h->next;
        free(tmp);
    }

    free(h);
}