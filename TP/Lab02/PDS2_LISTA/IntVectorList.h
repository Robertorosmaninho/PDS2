#ifndef PDS2_VECTOR_LIST_H
#define PDS2_VECTOR_LIST_H
#define INITIAL_SIZE 100


class IntVectorList{
private:
    int *_elements;
    int _num_elements_inserted;
    int _capacity;
public:
    IntVectorList();
    ~IntVectorList();

    void insert_element(int element);
    void delete_last();
    void print();
};
#endif
