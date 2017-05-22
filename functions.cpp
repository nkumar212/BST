#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
#include "binaryTreeNode.h"

void printPostOrder(BinaryTreeNode * node){

	if( node == NULL )
	{
		return;
	}
	
	printPostOrder(node->left_);
	printPostOrder(node->right_);
	
	std::cout << node->value_ << " ";
}

void printPreOrder(BinaryTreeNode * node)
{

	if(node == NULL )
	{
		return;
	}

	std::cout << node->value_ << " ";
	
	printPreOrder(node->left_);
	printPreOrder(node->right_);

}

void printInOrder(BinaryTreeNode * node)
{
	if(node == NULL)
	{
		return;
	}
	
	printInOrder(node->left_);
	
	std::cout << node->value_ << " ";

	printInOrder(node->right_);
}

bool checkBalance(BinaryTreeNode * node, const int lowerBound = std::numeric_limits<int>::min(), const int upperBound = std::numeric_limits<int>::max())
{

	if(node == NULL)
	{
		return true;
	}

	if(node->value_ >= upperBound || node->value_ <= lowerBound)
	{
		return false;
	}

	return checkBalance(node->left_, lowerBound, node->value_) && checkBalance(node->right_, node->value_, upperBound);
}
	

	
