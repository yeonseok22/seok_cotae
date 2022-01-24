#include <iostream>

using namespace std;

struct Node    // 이중 연결 리스트 구조 : prev - data - next
{
    int data;
    Node* prev;
    Node* next;
};

class DoublyLinkedList
{
private:
    int count;
    Node* header;
    Node* trailer;

public:
    DoublyLinkedList()  // 이중 연결 리스트 생성
    {
        count = 0;
		header = new Node {0, NULL, NULL};		// header 더미 변수 생성
		trailer = new Node {0, NULL, NULL};		// trailer 더미 변수 생성
		/*
		header->next = trailer;
		trailer->prev = header;
		*/
		header->next = trailer->prev = header;
	}
	
    ~DoublyLinkedList()  // 이중 연결 리스트 제거 
    {
        while (!empty()) {
            pop_front();
		}

		delete header;
		delete trailer;
    }

    // 노드 p 앞에 val 값을 갖는 새로운 노드를 삽입
    void insert(Node* p, int val)  // 이중 연결 리스트에 원소 삽입
    {
        Node* new_node = new Node {val, p->prev, p};	// 새로운 노드 동적 생성
		new_node->prev->next = new_node;
		new_node->next->prev = new_node;
		count++;		// 노드가 추가되었음을 표기
    }

    void push_front(int val)  // 이중 연결 리스트에 맨 앞에  원소 삽입
    {
        insert(header->next, val);
    }

    void push_back(int val)	// 이중 연결 리스트에 맨 뒤에 원소 삽입
    {
        insert(trailer, val);
    }

    // 이중 연결 리스트에서 노드 p를 삭제하기
    void erase(Node *p)
    {
        p->prev->next = p->next;
		p->next->prev = p->prev;
		delete p;
		count--;
    }

    void pop_front()
    {
        if (!empty())
		{
            erase(header->next);
		}
    }

    void pop_back()
    {
        if (!empty())
		{
            erase(trailer->prev);
		}
    }

    bool empty() const
    {
        return count == 0;
    }

    int size() const
    {
        return count;
    }

    void print_all() const
    {
        Node* curr = header->next;

		while (curr != trailer) {
            cout << curr->data << ", ";
			curr = curr->next;
		}	

		cout << "\n";
    }

    void print_reverse() const
    {
        Node* curr = trailer->prev;

		while (curr != header) {
            cout << curr->data << ", ";
			curr = curr->prev;
		}

		cout << "\n";
    }
};

int main(void)
{
    DoublyLinkedList ll;
    ll.push_back(10);
    ll.push_back(20);
    ll.push_back(30);
    ll.print_all();
    ll.print_reverse();

    // ll : header -> 10 -> 20 -> 30 -> trailer
    
    ll.pop_front();
    ll.pop_back();
    ll.print_all();

    ll.push_front(100);
    ll.push_back(400);
    ll.print_all();

    return 0;
}
