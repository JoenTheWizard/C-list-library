#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct node {
    int data;
    struct node* next;
} node_l;

//Add node to the end of list
void add_l(node_l* head, int val);

//Print list
void print_list(node_l* head);

//Free the list
void free_list(node_l* head);