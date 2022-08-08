#include "list.h"

int deleteList(List* list){
    if(!list) return 1;
    if(!(*list)) return 1;
    if(!(*list)->head){
        free(*list);
        *list = NULL;
        return 1;
    }

    Elem aux, delete = (*list)->head;
    while(delete->next){
        aux = delete;
        delete = delete->next;
        free(aux);
    }
    free(delete);
    free(*list);
    (*list) = NULL;
    return 1;

}
int append(List list, void* data){
    Elem aux, new = (Elem) malloc(sizeof(struct elem));
    if(!new) return 0;

    new->data = data;
    new->next = NULL;

    if(!list){
        list->head = new;
        return 1;
    }

    aux = list->head;
    while(aux->next)
        aux = aux->next;
    
    aux->next = new;
    return 1;
}