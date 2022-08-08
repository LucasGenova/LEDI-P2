#include "list.h"

// Structs:
struct vertex{
	int id;
	int val;
	List adj;
};

typedef struct vertex* Vtx;

struct graph{
	int id;
	int nVtx;
	List vtxs;
};

typedef struct graph* Graph;


// Functions:
int newGraph(Graph* g, int id); // Creates a new empty graph g with the id provided.
int newVertex(Vtx* v, int id, int val); // Creates a node with id and value provided.
int addVertex(Graph g, Vtx* x); // Adds the vertex x, if it is not there.

int adjacent(Graph g, Vtx x, Vtx y); // Tests whether there is an edge from the vertex x to the vertex y.
List neighbors(Graph g, Vtx x); // Returns a list with all vertices y adjacent to the vertex x.

int remove_vertex(Graph* g, Vtx x); // Removes the vertex x, if it is there.
int add_edge(Graph* g, Vtx x, Vtx y); // Adds an edge from the vertex x to the vertex y, if it is not there.
int remove_edge(Graph* g, Vtx x, Vtx y); // Removes the edge from the vertex x to the vertex y, if it is there.
int get_vertex_value(Graph g, Vtx x); // Returns the value associated with the vertex x.
int set_vertex_value(Graph* g, Vtx x, int val); // Sets the value associated with the vertex x to v.
