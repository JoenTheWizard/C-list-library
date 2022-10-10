#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct node {
    int data;
    struct node* next;
} node_l;

typedef struct {
    node_l* head;
} List;

//Create the list
List* createList();

//Create new node
node_l* newNode(int data);

//Add to list
void add_l(List* list, int data);

//Display
void print_list(List* list);

//Deallocate
void free_list(List* list);