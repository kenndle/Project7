#include "binarytree.h"

#include <stdbool.h>

int main(int argc, char* argv[]) {
   FILE* inFile = NULL;
	int i;
	bool found;
	
	binary_tree bt;
	
	initialize(&bt);
	
   printf("argc: %d\n", argc);
   for (i = 0; i < argc; ++i) {
     printf("argv[%d]: %s\n", i, argv[i]);
   }

   if (argc < 2) {
      fprintf(stderr,"Usage: %s input_file\n", argv[0]);
      return -1; // -1 indicates error
   }

   inFile = fopen(argv[1], "r");

   if (inFile == NULL) {
      fprintf(stderr, "Could not open file %s.\n", argv[1]);
      return -2; // -1 indicates error
   }

	//TODO: Populate tree
	
   printf("Print in order\n");
   printinorder(&bt);
   printf("\nPrint pre order\n");
   printpreorder(&bt);
   printf("\nPrint post order\n");
   printpostorder(&bt);
   printf("\n");
   found = search(&bt,33);
   if (found){
     printf("FOUND 33\n");
   }
  found = search(&bt,38);
  if (found) {
    printf("FOUND 38\n");
  }
    printf("Number of elements in tree: %d\n", btsize(&bt));
    printf("Tree height: %d\n", treeheight(&bt));

    return 0;
}
