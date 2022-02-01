- ```std::queue```
	- FIFO(First-In First-Out) 방식의 큐 자료 구조를 구현한 컨테이너 어댑터
		```C++
		template<class T, class Container = std::deque<T>>
		class queue;
		```
	- 템플릿 매개변수 T는 큐에 저장할 타입을 지정하고, Container에는 내부에서 사용할 컨테이너를 지정한다.
	- Container에는 ```deque``` 또는 ```list```를 지정할 수 있다.
	- ```<queue>```에 정의되어 있다.
	- 주요 멤버 함수
		- ```queue::push(e)```
		- ```queue::pop()```
		- ```queue::front()```
	
