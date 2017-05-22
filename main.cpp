#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include "binaryTreeNode.h"
#include "functions.h"

int main()
{

	BinaryTreeNode  root = BinaryTreeNode(1);

	root.insertLeft(2);
	root.insertRight(3);
	root.left_->insertLeft(4);
	root.left_->insertRight(5);

	printInOrder(&root);
	std::cout << "\n";
	
	printPreOrder(&root);
	std::cout << "\n";

	printPostOrder(&root);
	std::cout << "\n";

	if(checkBalance(&root))
	{
		std::cout << "success\n";
	}
	else {
		std::cout << "failure\n";
	}
	
}
