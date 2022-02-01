#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Node
{
	char data;
	Node* left;
	Node* right;

	Node(char d) : data(d), left(nullptr), right(nullptr) {}
};

// 전위 순회 (preorder traversal)
void preorder(Node* node)
{
	if (node) {
		std::cout << node->data << ", ";		// 1. 현재 노드 (상위 노드)
		preorder(node->left);					// 2. 왼쪽 서브트리
		preorder(node->right);					// 3. 오른쪽 서브트리
	}
}

// 중위 순회 (inorder traversal)
void inorder(Node* node)
{
	if (node) {
		preorder(node->left);				// 1. 왼쪽 서브트리
		std::cout << node->data << ", ";	// 2. 현재 노드 (상위 노드)
		preorder(node->right);				// 3. 오른쪽 서브트리
	}
}

// 후위 순회 (postorder traversal)
void postorder(Node* node)
{
	if (node) {
		preorder(node->left);				// 1. 왼쪽 서브트리
		preorder(node->right);				// 2. 오른쪽 서브트리
		std::cout << node->data << ", ";	// 3. 현재 노드 (상위 노드)
	}
}

// 레벨 순서 순회 (level order traversal)
// queue 자료 구조 이용
void levelorder(Node* node)
{
	std::queue<Node*> q;
	q.push(node);

	while (!q.empty()) {
		auto curr = q.front();
		q.pop();

		std::cout << curr->data << ", ";
		if (curr->left) q.push(curr->left);
		if (curr->right) q.push(curr->right);
	}
}

// 이진 트리 삭제하기 (후위 순회 방식)
void delete_tree(Node* node)
{
	if (node) {
		delete_tree(node->left);
		delete_tree(node->right);
		delete node;
	}
}

// 트리 순회 테스트 코드
int main(void)
{
	Node* root = nullptr;

	/*
			A
		B		C
	  D  E		  F
	*/
	root = new Node('A');
	root->left = new Node('B');
	root->right = new Node('C');
	root->left->left = new Node('D');
	root->left->right = new Node('E');
	root->right->right = new Node('F');

	cout << "preorder : ";	preorder(root);		cout << "\n";
	cout << "inorder : ";	inorder(root);		cout << "\n";
	cout << "postorder : ";	postorder(root);	cout << "\n";
	cout << "levelorder : ";levelorder(root);	cout << "\n";

	delete_tree(root);

	return 0;
}
