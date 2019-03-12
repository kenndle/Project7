#include "binarytree.h"
#include "treeNode.h"

int main(int argc, char* argv[]) {
   FILE* inFile = NULL;

   printf("argc: %d\n", argc);
   for (i = 0; i < argc; ++i) {
     printf("argv[%d]: %s\n", i, argv[i]);
   }

   if (argc < 2) {
      printf("Could not open file\n");
      return -1; // -1 indicates error
   }

   inFile = fopen(argv[1], "r");

   if (inFile == NULL) {
      printf("Could not open file myfile.txt.\n");
      return -1; // -1 indicates error
   }

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
