#include <iostream>
#include "IntVectorList.h"

IntVectorList::IntVectorList(){
    this->_elements = new int[INITIAL_SIZE]();
    this->_num_elements_inserted = 0;
		this->_capacity = INITIAL_SIZE;
}

void IntVectorList::insert_element(int element){
    if(this->_num_elements_inserted == this->_capacity){
        int *new_data = new int[this->_capacity * 2];

        for(int i = 0; i < this->_num_elements_inserted; i++){
            new_data[i] = this->_elements[i];
        }

        delete[] this->_elements;

        this->_elements = new_data;
//				delete[] new_data;
        this->_capacity = this->_capacity * 2;
    }
    this->_elements[this->_num_elements_inserted] = element;
    this->_num_elements_inserted++;
}
void IntVectorList::print(){
    for(int i = 0; i < _num_elements_inserted; i++){
        std::cout << this->_elements[i] << " ";
    }
    std::cout << std::endl;
}

void IntVectorList::delete_last(){
    this->_num_elements_inserted--;
}

IntVectorList::~IntVectorList(){
    delete[] this->_elements;
}
