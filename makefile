binarytree.exe : main.o binarytree.o treeNode.o
    gcc main.o binarytree.o treeNode.o -o binarytree.exe

main.o : main.c binarytree.h
    gcc -Wall -c main.c

binarytree.o : binarytree.h binarytree.c treeNode.h
    gcc -Wall -c binarytree.c 

treeNode.o : treeNode.h treeNode.c

clean :
    rm *.o binarytree.exe
