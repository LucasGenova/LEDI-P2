#include "graph.h"

int newGraph(Graph* g, int id){
    if(*g){
        if(!deleteList(&((*g)->vtxs))) 
            return 0;
        free(*g);
    }

    *g = (Graph) malloc(sizeof(struct graph));
    if(!g) return 0;

    (*g)->id = id;
    (*g)->nVtx = 0;
    (*g)->vtxs = NULL;
    return 1;
}

int newVertex(Vtx* v, int id, int val){
    *v = (Vtx) malloc(sizeof(struct vertex));
    if(!v) return 0;

    (*v)->id = id;
    (*v)->val = val;
    (*v)->adj = NULL;
    return 1;
}

int addVertex(Graph g, Vtx* x){
    if(search(g->vtxs, NULL, &x)) return 1;

    if(!append(g->vtxs, x))
        return 0;
    g->nVtx++;
    return 1;
}