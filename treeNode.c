#include <stdlib.h>
#include <stdio.h>

#include "TreeNode.h"

TreeNode* newNode(int val){
	TreeNode* ret = malloc(sizeof(TreeNode));
	ret->val = val;
	return ret;
}

/*TreeNode* searchNode(TreeNode* node, int target){
    while(node != NULL)
    {
        if (target == node->val)
        {
            return node;
        }
        else if(target < node->val)
        {
           node = node->left;
        }
        else
        {
            node = node->right;
        }
    }
    return NULL;
}*/

//helper function that prints if targOrder is equal to order
static void printOrder_(enum tree_order targOrder, TreeNode* node, enum tree_order order){
	if(order == targOrder){
		printf("%d ", node->val);
	} 
}

void printOrder(TreeNode* node, enum tree_order order){
	if(node == NULL){
		return;
	}
	printOrder_(PreOrder, node, order); //only prints if order is PreOrder and is called through enum tree_order order
	printOrder(node->left, order);
	printOrder_(InOrder, node, order); //only prints if order is InOrder and is called through enum tree_order order
	printOrder(node->right, order);
	printOrder_(PostOrder, node, order); //only prints if order is PostOrder and is called through enum tree_order order
}

static int mx(int a, int b){
	return a<b ? b : a;
}

int heightNode(TreeNode* node){
	if(node == NULL){
		return 0;
	}
	return 1 + mx(heightNode(node->left), heightNode(node->right));
}
