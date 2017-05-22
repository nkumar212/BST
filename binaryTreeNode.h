#ifndef BINARY_TREE_H
#define BINARY_TREE_H

class BinaryTreeNode
{
	public: 
		int value_;
		BinaryTreeNode* left_;
		BinaryTreeNode* right_;

		BinaryTreeNode(int value);
	
		BinaryTreeNode * insertLeft(int value);
		BinaryTreeNode * insertRight(int value);

};

#endif	

