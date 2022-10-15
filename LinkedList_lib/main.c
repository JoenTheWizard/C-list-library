#include <stdio.h>
#include "list.h"

int main(int argc, char** argv) {
    
    
    //Allocate the memory and create list
    List* list = createList();

    //Add the nodes to list
    add_l(list, 10);
    for (int i = 0; i < 10; i++)
        add_l(list, i);

    pop_l(list);
    //Print the list
    print_list(list);

    //Deallocate the list
    free_list(list);

    return 0;
}