### 1 목차
1. 실습환경 만들기
2. Developer Console 사용하기
3. console.log 실습

### 2 목차
1. 변수 선언과 초기화
2. 변수의 활용

1. 실습환경 만들기
	- Javascript 의 특징
		- HTML + CSS와 함께 사용해 clinet side 웹 프로그램을 작성할 수 있다.
		- 웹 브라우저에서 바로 실행이 가능하다.

	- alert 명령어
		- alert 뒤에 따라오는 괄호 안에 들어있는 메시지를 브라우저 경고창에 띄워주는 명령어

	- 실습 방법
		1. Javascript 코드를 작성한다.
			- lecture01.js

			```javascript
            alert("Hello World");
			```
		2. 해당 코드를 로드하는 HTML 파일을 작성한다.
			- index.html
				```html
				<html>
				    <head>
					...
					<script srt="lecture01.js"></script>
					...
					</head>

					<body>
					...
					</body>
				</html>
				```
			
		3. 브라우저에서 작성한 HTML 파일을 불러들여 결과를 확인한다.
2. Developer Console 사용하기
	- 개발자 도구 (Developer Console)
		- 브라우저의 우측 상단 메뉴에서 더보기, 개발자 도구 메뉴를 이용해 활성화
		- 여러 탭 중 console 탭을 사용해 console을 확인 가능
		- 직접 명령어를 입력해 실행 가능하며 (>), 그 결과를 바로 확인 가능 (<)

	- console.log 명령어
		- console.log 뒤에 따라오는 괄호 안에 들어있는 메시지를 콘솔창에 출력하는 명령어

3. console.log 실습
	- 문제
		- ```console.log```를 이용하여 'HelloWorld'를 출력해 보세요.
		- ```console.log```는 괄호 안의 메시지를 출력하는 명령어이다.

	- 정답
		```javascript
		console.log("HelloWorld");
		```

1. 변수 선언과 초기화
	- 변수
		- 프로그램 실행 도중 임의의 값을 저장해 두고 읽을 수 있는 공간
		- 변수의 선언과 초기화
			- 선언 : 컴퓨터에게 변수를 사용할 것이라고 선언(알려주는) 역할
			- 초기화 : 선언한 변수에 처음으로 값을 저장하는 과정
			- 변수에 값을 저장하는 법 : 대입 연산자 (```=```)를 활용
			- 콤마(,)를 활용해 여러 변수를 동시에 선언, 초기화 가능
			
		```javascript
		var variable_name;
		variable_name = value;

		var name;		// name이란 변수를 선언
		name = '홍길동';// 변수에 '홍길동'을 저장한다.

		var age = 20;	// 변수를 선언하고 초기화한다.
		```

	- ```prompt()``` 명령어
		- prompt 뒤에 따라오는 괄호 안에 들어 있는 메시지를 사용자에게 보여 주고, 문자열을 입력받는 명령
			- 변수에 값을 저장하는 구문과 함께 사용해서, 사용자가 입력한 값을 변수에 저장 가능

				```javascript
				var name=prompt("이름을 입력해주세요");
				```
2. 변수의 활용
	- 변수의 활용
		- 변수의 이름을 사용하면, 변수의 값을 읽어서 사용 가능
			
			```javascript
			var var1 = "1", var2 = "2", var3 = "3";

			console.log(var1);	// console에 출력
			alert(var2);		// 자바스크립트 알림 명령어
			prompt(var3);		// input()
			```
	- ```console.log``` 명령어
		- 괄호 안에 여러 개의 메시지를 콤마(,)로 구분하여 활용할 수도 있음
		
			```javascript
			console.log("홍길동", "님 안녕하세요");
			```

	- 예시
		
		```javascript
		var name=prompt("이름을 입력해 주세요.");
		console.log(name, "님 환영합니다.");
		```
