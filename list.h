#include <stdlib.h>

struct elem{
    void* data;
    struct elem* next;
};
typedef struct elem* Elem;

struct list{
    int size;
    Elem head;
};
typedef struct list* List;

int newList(List*);
int deleteList(List*);
int append(List, void* data);
//int add_at(List, int idx, void* data);
int search(List, int* idx, void* data);