#include <iostream>

using namespace std;

struct Node 
{
    int data;
    Node* next;
};

class LinkedList 
{
private:
    Node* head;

public:
    LinkedList() : head(NULL) {};

    ~LinkedList()   // 연결 리스트 제거
    {
        while (!empty()) {
            pop_front();
		}
    }

    void push_front(int val)  // 연결 리스트 맨 앞에 노드 삽입하기
    {
        Node* new_node = new Node {val, head};

	if (head != NULL) {
            new_node->next = head;
		}

		head = new_node;
    }

    void pop_front()  // 연결 리스트 맨 앞 노드 삭제하기
    {
        if (head == NULL) {
            return;
		}	

		Node* first = head;
		head = head->next;
		delete first;
    }

    bool empty() const  // 연결 리스트가 비어 있는지 확인
    {
        return head == NULL;
    }

    void print_all() const  // 연결 리스트 전체 데이터 출력하기
    {
        Node* curr = head;

		while (curr != NULL) {
            cout << curr->data << ", ";
			curr = curr->next;
		}

		cout << "\n";
    }
};

int main(void)
{
    LinkedList ll;
    ll.push_front(10);
    ll.push_front(20);
    ll.push_front(30);
    ll.print_all();

    ll.pop_front();
    ll.print_all();

    ll.push_front(40);
    ll.print_all();

    return 0;
}
