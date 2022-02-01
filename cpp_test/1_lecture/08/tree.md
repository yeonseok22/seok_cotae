- 트리
	1. 트리와 이진 트리
		- 트리(tree) : 계층적인 구조를 나타내는 자료 구조
			- 보통 뿌리(root)가 위에, 나뭇가지(branch)와 잎(leaf)이 아래로 자라는 형태로 표현
			- 트리 사용 예
				- 회사 조직도
				- 대학 교과 과정의 수강 트리
				- 파일 시스템 디렉터리 구조

			- 노드 (node, vertex) : 트리의 데이터를 저장하는 원소 단위, 정점
			- 에지(edge, link)
				- 노드와 노드를 연결하는 선, 간선
				- 트리의 에지는 부모-자식 계층 관계만을 나타냄
				- 노드의 개수가 N이면 항상 N - 1개의 에지가 존재

			- 트리 용어 (그림 참고)
				- 루트(root)
				- 부모(parent) - 자식(child)
				- 리프(leap)
				- 내부 노드(internal node)
				- 형제(sibling)
				- 조상(ancestor) - 후손(descendant)
				- 차수(degree)
				- 레벨(level)
				- 높이(height)
				- 서브트리(subtree)

		- 이진 트리(binary tree) : 모든 노드가 최대 두 개의 자식을 갖는 트리
			- 모든 노드의 차수가 2 이하인 트리
			- 모든 노드가 2개의 서브트리를 가지고 있는 트리 (서브트리는 빈 트리(empty tree)일 수 있음)
			- 각각의 자식 노드는 부모의 **왼쪽 자식(left child)** 또는 **오른쪽 자식(right child)** 으로 지정됨

		- 이진 트리의 종류 : 정 이진 트리, 포화 이진 트리, 완전 이진 트리, 륜형 이진 트리, 편향 트리
			- 정 이진 트리 (proper binary tree, full binary tree)
				- 모든 노드가 0개 또는 2개의 자식 노드를 갖는 이진 트리
				- 즉, 리프 노드를 제외한 노드들은 모두 자식이 2개

			- 포화 이진 트리 (perfect binary tree)
				- 트리의 모든 레벨에서 노드가 모두 채워져 있는 이진 트리
				- 높이가 h이면 노드 개수가 2^{h + 1} - 1

			- 완전 이진 트리 (complete binary tree)
				- 마지막 레벨을 제외한 모든 레벨에는 노드가 완전히 채워져 있고, 마지막 레벨에는 노드가 왼쪽부터 채워져 있는 이진 트리

			- 균형 이진 트리 (balanced binary tree)
				- 모든 노드의 서브 트리 간의 높이 차이가 1 이하

			- 편향 트리 (skewed tree)
				- 리프 노드를 제외한 모든 노드가 하나의 자식 노드만 갖는 트리

		- 이진 트리 구현 방법
			- 배열 : 완전 이진 트리의 경우, 배열을 이용하여 효율적으로 표현 가능
				- 10장 힙(우선 순위 큐)에서 설명

			- 연결 리스트
				- 저장할 데이터와 왼쪽 자식과 오른쪽 자식 노드를 가리키는 포인터 2개를 갖는 구조체를 사용
				
				```C++
                struct Node
				{
					char data;
					Node* left;
					Node* right;

					Node(char d): data(d), left(nullptr), right(nullptr) {}
				};
				```

			
	2. 이진 트리의 순회
		- 트리 순회(traversal) : 정해진 순서에 의해 트리의 모든 노드를 (한 번씩) 방문하는 작업

		- 전형적인 트리 순회 방법 (그림 참고)
			- 깊이 우선 탐색(Depth-First Traversal, Search)
				- 전위 순회(preorder traversal)
				- 중위 순회(inorder traversal)
				- 후위 순회(postorder traversal)
			- 너비 우선 탐색(breadth first travel)
				- 레벨 순서 순회(level order traversal)

		- 전위 순회(preorder travel)
			
			```
			  1
			2   3
			```
			- 1. 현재 노드 (상위 노드)
			- 2. 왼쪽 서브트리
			- 3. 오른쪽 서브트리

			```
					  A
				  B		 C
				D  E	F  G
			  H	 I		 J
			```
			- 순서 : A -> B -> D -> H -> I -> E -> C -> F -> J -> G

			```C++
            void preorder(Node* node)
			{
				if (node) {
					std::cout << node->data << ", ";	// 1. 현재 노드
					preorder(node->left);				// 2. 왼쪽 서브 트리
					preorder(node->right);				// 3. 오른쪽 서브 트리
				}
			}
			```

		- 중위 순회(inorder traversal)
			
			```
              1
			2   3
			```
			- 1. 왼쪽 서브트리
			- 2. 현재 노드 (상위 노드)
			- 3. 오른쪽 서브트리

			```
						 A
					B		 C
				 D	  E	   F   G
				H I			J
			```

			- 순서 : H -> D -> I -> B -> E -> A -> F -> J -> C -> G

			```C++
			void inorder(Node* node)
			{
				if (node) {
					inorder(node->left);
					std::cout << node->data << ", ";
					inorder(node->right);
				}
			}
			```

		- 후위 순회(postorder traversal)
			
			```
			  3
			1   2
			```

			- 1. 왼쪽 서브 트리
			- 2. 오른쪽 서브 트리
			- 3. 현재 노드 (상위 노드)

			```
						A
					 B	   C
					D E	  F G
				   H I     J
			```

			- 순서 : H -> I -> D -> E -> B -> J -> F -> G -> C -> A

			```C++
			void postorder(Node* node)
			{
				if (node) {
					postorder(node->left);
					postorder(node->right);
					std::cout << node->data << ", ";
				}
			}
			```

		- 레벨 순서 순회 (level order traversal)
			- 낮은 레벨에 있는 노드를 모두 방문한 후, 큰 레벨로 이동하여 방문을 반복
			- 큐를 사용하여 구현

			```
					A				// 레벨 0
				B		C			// 레벨 1
			  D   E   F   G			// 레벨 2
			 H I	   J			// 레벨 3
			```

			- 순서 : A -> B -> C -> D -> E -> F -> G -> H -> I -> J

			```C++
			void levelorder(Node* node)
			{
				std::queue<Node*> q;
				q.push(node);

				while (!q.empty()) {
					auto curr = q.front();
					q.pop();

					std::cout << curr->data << ", ";
					if (curr->left) q.push(curr->left);
					if (curr->right) q.push(curr-right);
				}
			}
			```


			```

	- 이진 트리 삭제하기
		- 각각의 노드에서 왼쪽 자식 노드와 오른쪽 자식 노드를 먼저 삭제하고,
		- 자기 자신을 삭제하는 코드를 재귀적으로 수행

		- 후위 순회 방식
			1. 왼쪽 서브트리 삭제
			2. 오른쪽 서브트리 삭제
			3. 현재 노드 (상위 노드) 삭제

			```C++
            void delete_tree(Node* node)
			{
				if (node) {
					delete_tree(node->left);
					delete_tree(node->right);
					delete node;
				}
			}
			```

