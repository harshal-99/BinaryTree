#include "../include/binaryTree.hpp"

Node::Node(int val) : m_val(val) { }

void BinaryTree::insert(int val) {
	Node *previous, *temp = m_root;
	while(temp not_eq nullptr) {
		previous = temp;
		if(val < temp->m_val) {
			temp = temp->left;
		} else {
			temp = temp->right;
		}
	}
	if(m_root == nullptr) {
		m_root = new Node(val);
	} else if(val < previous->m_val) {
		previous->left = new Node(val);
	} else if(val > previous->m_val) {
		previous->right = new Node(val);
	}
}

void BinaryTree::inOrder() {
	inOrder(m_root);
}

void BinaryTree::inOrder(Node *root) {
	if(root == nullptr) return;
	this->inOrder(root->left);
	std::cout << root->m_val << " ";
	this->inOrder(root->right);
}

void BinaryTree::preOrder() {
	preOrder(m_root);
}

void BinaryTree::postOrder() {
	postOrder(m_root);
}

void BinaryTree::preOrder(Node *root) {
	if (root == nullptr) return;
	std::cout << root->m_val << " ";
	preOrder(root->left);
	preOrder(root->right);
}

void BinaryTree::postOrder(Node *root) {
	if(root == nullptr) return;
	postOrder(root->left);
	postOrder(root->right);
	std::cout << root->m_val << " ";
}

bool BinaryTree::search(int val) {
	return search(m_root,val);
}

bool BinaryTree::search(Node *root, int val) {
	if(root not_eq nullptr) {
		search(root->left, val);
		if(root->m_val == val) return true;
		search(root->right, val);
	}
}