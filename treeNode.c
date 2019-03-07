#include <stdlib.h>

#include "treeNode.h"

treeNode* newNode(int val, treeNode* left, treeNode* right){
	treeNode* ret = malloc(sizeof(treeNode));
	ret->val = val;
	ret->left = left;
	ret->right = right;
	return ret;
}