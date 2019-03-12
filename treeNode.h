#ifndef __treeNode__
#define __treeNode__

#include <stdbool.h>

typedef struct tree_node_struct {
	struct tree_node_struct *left, *right;
	int val;
} TreeNode;

//Used to tell the user how to implement the order
enum tree_order{PreOrder, InOrder, PostOrder};

TreeNode* newNode(int val);
TreeNode* searchNode(TreeNode* node, int target);
void printOrder(TreeNode* node, enum tree_order order); //prints all orders depending on which order is specified
int heightNode(TreeNode* node);

#endif
