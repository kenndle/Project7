#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "binarytree.h"

void initialize(binary_tree* bt) {
  bt->root = NULL;
  bt->treeElements = 0;
}

// Used to implement search and insert, not visible outside this file
static TreeNode** searchLink(binary_tree* bt, int key, bool* foundExact){
	TreeNode** link = &bt->root;  // -> goes first
	while(*link != NULL)
    {
		TreeNode* node = *link;
        if (key == node->val)
        {
			if(foundExact != NULL){
				*foundExact = true;
			}
            return link;
        }
        else if(key < node->val)
        {
           link = &node->left;
        }
        else
        {
           link = &node->right;
        }
    }
	if(foundExact != NULL){
		*foundExact = false;
	}
    return link;
}

bool search(binary_tree* bt, int key){
  bool found;
  searchLink(bt, key, &found);
  return found;
}

void insert(binary_tree* bt, int key){
	bool found;
	TreeNode** link = searchLink(bt, key, &found);
	if(!found){
		*link = newNode(key);
		bt->treeElements++;
	}
}

void printinorder(binary_tree* bt) {
  printOrder(bt->root, InOrder);
}

void printpreorder(binary_tree* bt){
  printOrder(bt->root, PreOrder);
}

void printpostorder(binary_tree* bt){
  printOrder(bt->root, PostOrder);
}

int btsize(binary_tree* bt){
  return bt->treeElements;
  
}

int treeheight(binary_tree* bt){
  return heightNode(bt->root);
}
