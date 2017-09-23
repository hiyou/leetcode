// �ؽ�������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

using namespace std;

struct BinaryTree
{
	int nodeValue;
	BinaryTree *left;
	BinaryTree *right;
};

BinaryTree * BuiledRecrusity(int *pPreOrderStart, int *pPreOrderEnd, int *pInorderStart, int *pInOrderEnd)
{
	// �ҵ����ڵ㲢����
	int value = pPreOrderStart[0];
	BinaryTree *node = new BinaryTree;
	node->nodeValue = value;
	node->left = nullptr;
	node->right = nullptr;
	//�ݹ��������������ΪҶ�ӽڵ�ʱ
	if (pPreOrderStart == pPreOrderEnd)
	{
		if ((pInorderStart == pInOrderEnd) && (*pPreOrderStart == *pInorderStart))
			return node;
		else
			throw exception();
	}

	//������������ҵ����ڵ��λ��

	int *pInOrderCursor = pInorderStart;
	while (pInOrderCursor < pInOrderEnd&&*pInOrderCursor != value)
		pInOrderCursor++;
	if ((pInOrderCursor == pInOrderEnd) && (*pInOrderCursor != value))
		throw exception();

	int leftTreeLength = pInOrderCursor - pInorderStart;

	int *pPreOrderLeftreeEnd = pPreOrderStart + leftTreeLength;
	//��������������ݹ�������
	if (leftTreeLength>0)
		node->left = BuiledRecrusity(pPreOrderStart + 1, pPreOrderLeftreeEnd, pInorderStart, pInOrderCursor - 1);

	//��������������ݹ�������
	if (pPreOrderEnd - pPreOrderStart > leftTreeLength)
		node->right = BuiledRecrusity(pPreOrderLeftreeEnd + 1, pPreOrderEnd, pInOrderCursor + 1, pInOrderEnd);
	
	return node;
}

BinaryTree *BuildBinaryTree(int *preOrder, int *InOrder, int length)
{
	int *preOrderStart = preOrder;
	int *preOrderEnd = preOrderStart + length-1;
	int *InOrderStart = InOrder;
	int *InOrderEnd = InOrder + length-1;
	return BuiledRecrusity(preOrderStart, preOrderEnd, InOrderStart, InOrderEnd);
}

//�������

void PreOrder(BinaryTree *tree)
{
	if (nullptr == tree)
		return;
	cout << tree->nodeValue;
	if (tree->left)
		PreOrder(tree->left);
	if (tree->right)
		PreOrder(tree->right);
}

//�������

void InOrder(BinaryTree* node)
{
	if (nullptr == node)
		return;
	if (node->left)
		InOrder(node->left);
	cout << node->nodeValue;
	if (node->right)
		InOrder(node->right);
}

//�������

void PostOrder(BinaryTree *node)
{
	if (nullptr == node)
		return;
	if (node->left)
		PostOrder(node->left);
	if (node->right)
		PostOrder(node->right);
	cout << node->nodeValue;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int iPreOrder[8] = { 1, 2, 4, 7, 3, 5, 6, 8 };
	int iInOrder[8] = { 4, 7, 2, 1, 5, 3, 8, 6 };
	BinaryTree *tree = BuildBinaryTree(iPreOrder, iInOrder, 8);
	cout << "PreOrder" << endl;
	PreOrder(tree);
	cout << "InOrder" << endl;
	InOrder(tree);
	cout << "PostOrder" << endl;
	PostOrder(tree);

	return 0;
}

