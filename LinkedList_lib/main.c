#include <stdio.h>
#include "list.h"

int main(int argc, char** argv) {
    
    node_l* list;

    //Allocate the list
    list = (node_l*)malloc(sizeof(node_l));

    //Add a node to the list
    add_l(list, 19);
    
    //Print the values from the list
    print_list(list);

    //Deallocate the list
    free_list(list);

    return 0;
}