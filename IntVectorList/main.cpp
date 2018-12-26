#include <iostream>
#include "IntVectorList.h"

int main(){

IntVectorList *list = new IntVectorList();

for(int i = 0; i < 400; i++){
    if(i % 2 == 0)
        list->insert_element(i);
}

list->print();

list->~IntVectorList();

    return 0;
}


//Programa dando erro: Tenta dar um free em local n alocado. Abort Trap: 6
