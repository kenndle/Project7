#!/bin/bash
cd $(dirname "$BASH_SOURCE")
make
if [ $? -ne 0 ]; then
  echo Make Failed!;
  exit -1;
fi  
cd testData
../binarytree.exe
if [ $? -eq 0 ]; then
	echo Wrongly returned success with no arg!
	exit -1
fi
../binarytree.exe test1.txt test2.txt
if [ $? -eq 0 ]; then
	echo Wrongly returned success with Too many args!
	exit -1
fi
../binarytree.exe test1.txt > out1.out
if [ $? -ne 0 ]; then
	echo Test 1 failed!
	exit -1
fi
diff out1.out expected1.txt
if [ $? -ne 0 ]; then
	echo Diff in Test 2!
	exit -1
fi
../binarytree.exe test2.txt > out2.out
if [ $? -ne 0 ]; then
	echo Test 2 failed!
	exit -1
fi
diff out2.out expected2.txt
if [ $? -ne 0 ]; then
	echo Diff in Test 2!
	exit -1
fi
../binarytree.exe test3.txt > out3.out
if [ $? -ne 0 ]; then
	echo Test 3 failed!
	exit -1
fi
diff out3.out expected3.txt
if [ $? -ne 0 ]; then
	echo Diff in Test 3!
	exit -1
fi
echo Finished Successfully!
exit 0