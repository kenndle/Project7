#include <stdlib.h>
#include <stdio.h>

#include "TreeNode.h"

TreeNode* newNode(int val){
	TreeNode* ret = malloc(sizeof(TreeNode));
	ret->val = val;
	return ret;
}

TreeNode* searchNode(TreeNode* node, int target){
	if(node == NULL || node->val == target) return node;
	if(node->val > target){
		
	}
	
}

static void printOrder_(enum tree_order targOrder, TreeNode* node, enum tree_order order){
	if(order == targOrder){
		printf("%d ", node->val);
	}
}

void printOrder(TreeNode* node, enum tree_order order){
	if(node == NULL){
		return;
	}
	printOrder_(PreOrder, node, order);
	printOrder(node->left, order);
	printOrder_(InOrder, node, order);
	printOrder(node->right, order);
	printOrder_(PostOrder, node, order);
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