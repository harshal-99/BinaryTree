#include "../include/binaryTree.hpp"


int main() {
	BinaryTree b;
	b.insert(1);
	b.insert(22);
	b.insert(99);
	b.insert(-1);
	b.insert(2);
	std::cout << "In Order Traversal  : ";
	b.inOrder();
	std::cout << "\nPre Order Traversal : ";
	b.preOrder();
	std::cout << "\nPost Order Traversal: ";
	b.postOrder();
}

