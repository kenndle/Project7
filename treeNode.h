#ifndef __treeNode__
#define __treeNode__

typedef struct tree_node_struct {
	struct tree_node_struct *left, *right;
	int val;
} treeNode;

treeNode* newNode(int val, treeNode* left, treeNode* right);

#endif