// 이진 트리 구현 방법

#include <iostream>
#include <vector>

using namespace std;

struct Node
{
	char data;
	Node* left;
	Node* right;

	Node(char d) : data(d), left(nullptr), right(nullptr) {}
};

int main(void)
{
	/*
		 A
	 B		C
	D E		 F
	*/
    Node* root = new Node('A');
	root->left = new Node('B');
	root->right = new Node('C');
	root->left->left = new Node('D');
	root->left->right = new Node('E');
	root->right->right = new Node('F');

	// The tree is not deleted!

	return 0;
}
