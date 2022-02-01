# 자료형
	> 프로그래밍의 기본이 되는 자료형에 대해 알아볼 것.
	> 숫자, 문자열 등 다양한 자료형을 배울 수 있다.

### 목차
- 기본 자료형
- Number
- String
- Object
- undefined와 null

## 1. 기본 자료형
- 자료형 : 변수에 저장할 수 있는 값의 종류
	- 자료형의 종류
		- number Type : 숫자
			- ```var a=100, b=3.14;```

		- string Type : 문자열
			- ```var c="안녕하세요", d="a";```

		- boolean Type : true/false
			- ```var e = true, f = false;```
	
	- ```typeof()``` 명령어
		- typeof 뒤에 따라오는 괄호 안에 들어있는 변수의 type을 알려주는 명령어
			```javascript
            var a=100;
			console.log(a.typeof(a));
			// 100 "number"라고 출력

			var c="안녕하세요";
			console.log(c,typeof(c));
			// 안녕하세요 "string"라고 출력

			var e=true;
			console.log(e,typeof(e));
			// true "boolean"라고 출력
			```
## 2. Number
- Number
	- 숫자를 나타내는 자료형
	- 64bit로 실수와 정수 모두 표현 가능
	- 정상적이지 않은 숫자나 표현할 수 없는 범위의 수를 표시하는 NaN, Infinity

- parseInt, parseFloat 명령어
	- 문자열 "1"과 1은 다르다.
	- 명령어 뒤에 따라오는 괄호 안에 있는 문자열의 앞에서부터 Number를 인식함

	- 문자열을 정수로 변환하기 위해 ```parseInt```를 이용할 수 있다.
		- ```parseInt```는 명령어 뒤에 따라오는 괄호의 문자열 앞에서부터 Number를 인식한다.

		```javascript
		var height = "160.4";
		console.log(height, typeof(height));

		var height_int = parseInt(height);
		console.log(height_int, typeof(height_int));
		```

	- 문자열을 실수로 변환하기 위해 ```parseFloat```를 이용할 수 있다.
		- ```parseFloat```는 명령어 뒤에 따라오는 괄호의 문자열 앞에서부터 Number를 인식한다.

		```javascript
		var height = "160.4";
		console.log(height, typeof(height));

		var height_int = parseInt(height);
		console.log(height_int, typeof(height_int));

		var height_float = parseFloat(height);
		console.log(height_float, typeof(height_float));
		```
## 3. String
```javascript
var a='문자열을 따옴표로 둘러싸면 된다.';
var b="큰따옴표로도 문자열을 표현할 수 있다.";

var c = "큰따옴표 문자열에는 따옴표 '를 사용할 수 있다.";
var d = '따옴표 문자열에는 큰따옴표 "를 사용할 수 있다.';

var e = "따옴표를 쓰고 싶다면 \'처럼 사용하면 된다. \"도 가능하다.";
var f = '따옴표를 쓰고 싶다면 \'처럼 사용하면 된다. \"도 가능하다.';

var g = "\\ 문자를 쓰고 싶다면 역슬래시를 두번 쓰면 된다.";

var h = "문자열에서 줄바꿈을 하고 싶다면, \n 을 작성하면 된다.";

var i = a + b;

var j = "abcde";
```

- String 표현
	- 따옴표('), 큰따옴표(")로 감싸서 문자열 표현
	- 문자열 안에 따옴표, 큰따옴표 등의 문자를 활용하려면 escape character('\')를 활용
		- 줄바꿈 : \n
		- 따옴표 : \'
		- 큰따옴표 : \"
		- 역슬래시 : \\

- SyntaxError : 잘못된 문법이라서 발생하는 에러

## 4. Object
- Object(객체) : number, string, boolean의 단순 자료형보다 더 복잡한 자료를 표현할 때 사용
	- (간단히) 객체 : 속성(property)의 집합

- Property(속성) 정의하기
	- ```{ name1 : value1, name2 : value2, ... };```
	- ```객체이름["속성이름"]``` -> ```man["name"];```
- 객체를 만드는 법
	- 중괄호 ```{}```를 사용해 정의 가능
	- 객체는 속성의 집합으로 이뤄짐
		- 각 속성은 이름과 값으로 이뤄짐
		- 객체 정의 시 ```속성이름:값```의 형태로 속성 정의 가능
		- 속성의 값은 모든 자료형이 가능, object 포함

- 객체의 속성에 접근하는 법
	- 객체 이름 뒤에 점(.)을 사용하고 속성 이름에 접근 할 수 있음
	- 객체 이름 뒤에 대괄호(```[]```) 안에 속성 이름을 문자열로 접근할 수 있음

- 객체의 속성의 값을 변경하는 법
	- 객체 속성에 접근해서 변수에 값을 저장하듯이 사용

```javascript
var empty_obj = {};
typeof(empty_obj);

var man = { name:"홍길동", age:20, height:100 };
man.name
man["name"]
man.name="이몽룡";
man["age"]=15;
man
```

## 5. undefined와 null
- undefined, null <-> 값이 없다.
- undefined
	- 시스템에서 어떤 변수나 속성이 정의되지 않은 경우를 표현하기 위해 사용
		- 선언만 하고 초기화가 되지 않는 변수의 타입이나 값
		- 객체의 정의되지 않은 속성의 타입이나 값
- null
	- 개발자가 명시적으로 아무것도 없는 비어있는 상태를 나타낼 때 사용
		- typeof의 결과는 object이며 값은 null

```javascript
var uninitialized_var;

var obj={
			x:1,
			yL2
		};
```
