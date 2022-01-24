- 리스트
	- 리스트(List) : 순서를 가진 데이터의 모임, 목록
	- 리스트의 주요 연산 : 원소의 참조, 삽입(Insert), 삭제(Remove), 검색(Search), 등
	- 대표적인 리스트 구현 방법
		- 배열
			- 저장 공간 : 연속된 메모리 공간
			- 원소의 삽입과 삭제 : 비효율적
				- 삽입과 삭제는 데이터의 이동이 필요하다는 단점이 존재
			- 구현 : 쉬움
		- 연결 리스트
			- 저장 공간 : 임의의 메모리 공간
			- 원소의 삽입과 삭제 : 효율적
			- 구현 : 어려움

- 연결 리스트(Linked List) : 데이터와 링크로 구성된 노드(Node)가 연결되어 있는 자료구조
	- 데이터(data) : 정수, 문자열, 복합 자료형 등
	- 링크(link, next) : 다음 노드를 가리키는 포인터
	- 노드(node) : 데이터와 링크로 이루어진 연결 리스트 구성 단위 (node = data + link(next))

- 연결 리스트 장점
    - 임의의 위치에 원소의 삽입과 삭제가 효율적이다.
    - 원소 삽입과 삭제 시간 복잡도 : O(1)
    - 크기 제한이 없음.

- 연결 리스트 단점
    - 임의의 원소 접근이 비효율적이다. (시간 복잡도 : O(N)) 즉, N번 이동해야 한다는 것...
    - 링크를 위한 여분의 공간을 사용한다.
    - 구현이 복잡하다.

- 연결 리스트 종류
    1. 단순 연결 리스트 (singly linked list)
        - 다음 노드에 대한 링크만 가지고 있는 연결 리스트
        - 한쪽 방향으로만 순회(traverse)가 가능

    2. 이중 연결 리스트 (doubly linked list)
        - 이전 노드와 다음 노드에 대한 링크를 가지고 있는 연결 리스트
        - 양방향 순회가 가능 (양방향 연결 리스트)

    3. 원형 연결 리스트 (circular linked list)
        - 일반적인 연결 리스트의 마지막 노드 링크가 처음 노드를 가리키도록 구성된 자료 구조
        - 처음 노드가 다시 나타나면 순회를 멈춤


- 이중 연결 리스트의 장단점
    1. (단순 연결 리스트 대비) 이중 연결 리스트의 장점
        - 링크가 양방향이므로 양방향 검색이 가능

    2. (단순 연결 리스트 대비) 이중 연결 리스트의 단점
        - 이전 노드 링크를 위한 여분의 공간 사용
        - 데이터의 삽입과 삭제 구현이 더 복잡

- 향상된 이중 연결 리스트 클래스
	- DoublyLinkedList 클래스에 추가할 기능
		- 반복자(iterator) 지원
		- 데이터 검색 기능
		- 범용 데이터 저장을 위한 클래스 템플릿 작성

- std::list
	- **이중 연결 리스트**를 구현한 컨테이너
	```
	templete <class T, class Allocator = std::allocator<T>>
	class list;
	```
	- 어느 위치라도 원소의 삽입 또는 삭제를 **상수 시간**으로 처리 : O(1)
	- 그러나 특정 위치에 곧바로 접근할 수 없다.
		- ```std::vector```처럼 ```[]``` 연산자를 이용한 랜덤 엑세스는 지원하지 않는다.
		- ```begin()```, ```end()``` 등의 함수로 얻은 (양방향) 반복자와 ```++```, ```--``` 연산자로 위치 이동
	- ```<list>```에 정의되어 있음
	
	- std::list 주요 연산
		
		|함수 이름|설명|
		|:---|:---|
		|front(), back()|리스트의 맨 앞 또는 맨 마지막 원소 참조|
		|begin(), cbegin(), rbegin(), crbegin(), end(), cend(), rend(), crend()|(양방향) 반복자 반환|
		|insert(), push_front(), push_back(), emplace(), emplace_front(), emplace_back()|리스트에 원소 삽입|
		|clear(), erase(), pop_front(), pop_back()|리스트에서 원소 삭제|
		|splice()|다른 리스트의 원소를 이동|
		|remove(), remove_if()|특정 조건을 만족하는 원소를 삭제|
		|reverse()|원소 순서를 역순으로 변경|
		|unique()|연속적으로 나타나는 중복 원소를 삭제|
		|sort()|정렬|
		
- std::forward_list
	- **단순 연결 리스트**를 구현한 컨테이너
	```
	template <class T, class Allocator = std::allocator<T>>
	class forward_list;
	```

	- ```begin()``` 함수로 (순방향) 반복자를 얻을 수 있고, 오직 ++ 연산만 가능하다.
	- ```std::list```보다 빠르게 동작하고, 적은 메모리를 사용
	- C++11부터 지원한다.
	- ```<forward_list>```에 정의되어 있다.

- std::list와 std::forward_list의 차이점
	
	|```std::list```|```std::forward_list```|설명|
	|:---|:---|:---|
	|front(), back()|front()|forward_list는 front() 함수만 제공한다.|
	|begin(), end()|before_begin(), begin(), end()|forward_list는 before_begin() 함수를 추가로 제공하고, 순방향 반복자만 얻을 수 있다.|
	|insert(), emplace(), erase()|insert_after(), emplace_after(), erase_after()|forward_list는 특정 위치 다음에 원소를 삽입하거나 삭제하는 함수를 제공|
	|push_front(), push_back(), emplace_front(), emplace_back(), pop_front(), pop_back()|push_front(), emplace_front(), pop_front()|forward_list는 연결 리스트 맨 앞에서만 원소를 삽입하거나 삭제할 수 있음|
	|size()|N/A|forwarD_list는 std::distance() 함수를 활용하여 원소 개수를 알 수 있다.|


