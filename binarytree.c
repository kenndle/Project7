#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "binarytree.h"

void initialize(binary_tree* bt) {
  bt->root = NULL;
  bt->treeElements = 0;
}

bool search(binary_tree* bt, int key){
  searchNode(bt->root, key);
}

void insert(binary_tree* bt, int item){



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
  heightNode(bt->root);
}
