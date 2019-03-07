#include <stdio.h>
#include <string.h>

typedef struct binary_tree_struct {
   int treeElements;
   struct binary_tree_struct* root;
} binary_tree;

void initialize(binary_tree* bt);
bool search(binary_tree* bt, int key);
void insert(binary_tree* bt, int item);
void printinorder(binary_tree* bt);
void printpreorder(binary_tree* bt);
void printpostorder(binary_tree* bt);
int btsize(binary_tree* bt);
int treeheight(binary_tree* bt);
