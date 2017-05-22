#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include "binaryTreeNode.h"
#include "functions.h"

int main()
{

	BinaryTreeNode * root = NULL;

	root = insert(root, 50);
	insert(root,30);
	insert(root,20);
	insert(root,40);
	insert(root,70);
	insert(root,60);
	insert(root,80);


	printInOrder(root);
	std::cout << "\n";
	
//	printPreOrder(&root);
//	std::cout << "\n";

//	printPostOrder(&root);
//	std::cout << "\n";

	if(checkBalance(root))
	{
		std::cout << "success\n";
	}
	else {
		std::cout << "failure\n";
	}
	
}
