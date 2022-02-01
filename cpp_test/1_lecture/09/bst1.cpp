#include <iostream>
#include <vector>

using namespace std;

struct Node
{
	int data;
	Node* left;
	Node* right;

	Node(int d) : data(d), left(nullptr), right(nullptr) {}
};

class BinarySearchTree
{
private:
	Node* root = nullptr;

public:
	~BinarySearchTree()
	{
		delete_tree(root);
	}

	void insert(int value)		// 삽입 함수
	{
		if (!root)		// root이 false라면 root 노드 생성
			root = new Node(value);
		else		
			insert_impl(root, value);
	}

	Node* find(int value)		// 탐색 함수
	{
		return find_impl(root, value);
	}

	void inorder()
	{
		inorder_impl(root);
	}

private:
	void insert_impl(Node* curr, int value)
	{
		if (value < curr->data) {
			if (!curr->left)
				curr->left = new Node(value);
			else
				insert_impl(curr->left, value);
		} else {
			if (!curr->right)
				curr->right = new Node(value);
			else
				insert_impl(curr->right, value);
		}
	}

	Node* find_impl(Node* curr, int value)
	{
		if (curr == nullptr)
			return nullptr;
		
		if (value == curr->data)
			return curr;
		else {
			if (value < curr->data)
				return find_impl(curr->left, value);
			else
				return find_impl(curr->right, value);
		}
	}

	void inorder_impl(Node* curr)
	{
		if (curr) {
			inorder_impl(curr->left);
			std::cout << curr->data << ", ";
			inorder_impl(curr->right);
		}
	}

	void delete_tree(Node* node)
	{
		if (node) {
			delete_tree(node->left);
			delete_tree(node->right);
			delete node;
		}
	}
};

int main(void)
{
	BinarySearchTree bst;
	bst.insert(10);
	bst.insert(14);
	bst.insert(5);
	bst.insert(7);
	bst.insert(18);
	bst.insert(4);
	bst.insert(6);
	bst.insert(20);
	bst.insert(16);
	bst.inorder();	cout << "\n";

	if (bst.find(7))
		cout << "7 is found" << "\n";
	else
		cout << "7 is not found" << "\n";

	if (bst.find(15))
		cout << "15 is found" << "\n";
	else
		cout << "15 is not found" << "\n";

	bst.insert(9);
	bst.insert(12);
	bst.inorder();	cout << "\n";

	return 0;
}
