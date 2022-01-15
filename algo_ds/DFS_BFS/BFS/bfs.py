# bfs 구현
from collections import deque       # bfs : queue 자료구조 이용

# bfs 메서드 정의
def bfs(graph, start, visited):

    # 큐 구현을 위해 deque 라이브러리르 사용
    queue = deque([start])

    # 현재 노드를 방문 처리
    visited[start] = True
    
    # 큐가 빌 때까지 반복
    while queue:

        # 큐에서 하나의 원소를 뽑아 출력
        v = queue.popleft()
        print(v, end = ' ')

        # 해당 원소와 연결된, 아직 방문하지 않은 원소들을 큐에 삽입
        for i in graph[v]:
            if not visited[i]:
                queue.append(i);
                visited[i] = True

# 노드가 연결된 정보를 리스트 자료형으로 표현 (2차원 리스트)
graph = [
    [],         # 노드 0 (없음)
    [2, 3, 8],  # 노드 1
    [1, 7],     # 노드 2
    [1, 4, 5],  # 노드 3
    [3, 5],     # 노드 4
    [3, 4],     # 노드 5
    [7],        # 노드 6
    [2, 6, 8],  # 노드 7
    [1, 7]      # 노드 8
]


# 노드가 방문된 정보를 리스트 자료형으로 표현 (1차원 리스트)
visited = [False] * 9       # 0 ~ 8

# 정의된 bfs 함수 호출
bfs(graph, 1, visited)

# 결과 :1 2 3 8 7 4 5 6