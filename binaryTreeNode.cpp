#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
#include "binaryTreeNode.h"

BinaryTreeNode::BinaryTreeNode(int value) :
	
	value_(value),
	left_(nullptr),
	right_(nullptr)

{
}


BinaryTreeNode* BinaryTreeNode::insertLeft(int value)
{
	this->left_ = new BinaryTreeNode(value);
	return this->left_;
}

BinaryTreeNode* BinaryTreeNode::insertRight(int value)
{
	this->right_ = new BinaryTreeNode(value);
	return this->right_;
}



