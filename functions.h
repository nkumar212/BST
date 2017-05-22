#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "binaryTreeNode.h"

void printPostOrder(BinaryTreeNode * node);
void printPreOrder(BinaryTreeNode * node);
void printInOrder(BinaryTreeNode * node);

bool checkBalance(BinaryTreeNode * node, const int lowerBound = std::numeric_limits<int>::min(), const int upperBound = std::numeric_limits<int>::max());

BinaryTreeNode * insert(BinaryTreeNode * node, int value);

#endif
