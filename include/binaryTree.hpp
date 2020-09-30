#ifndef BINARYTREE_BINARYTREE_HPP
#define BINARYTREE_BINARYTREE_HPP

#include <stdexcept>
#include <iostream>

struct Node {
	int m_val{};
	Node *left{};
	Node* right{};
	Node() = default;
	explicit Node(int val);
};

class BinaryTree {
private:
	Node* m_root{};
	void inOrder(Node* root);
	void preOrder(Node* root);
	void postOrder(Node* root);
	bool search(Node* root,int val);
public:
	BinaryTree() = default;
	void insert(int val);
	void inOrder();
	void preOrder();
	void postOrder();
	bool search(int val);
};
#endif //BINARYTREE_BINARYTREE_HPP
