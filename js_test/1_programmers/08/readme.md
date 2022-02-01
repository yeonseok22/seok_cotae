# 더 알아보기

### 목차
1. 변수의 scope
2. 변수의 shadowing
3. method, this
4. closure(클로저)


## 1. 변수의 scope
- 변수의 scope : 선언한 변수가 유효한 영역
	- 변수의 scope는 function의 scope를 따른다.
		- 객체(변수)는 선언된 함수 안에서만 접근이 가능하다.
- function scope
	- 선언된 변수는 선언된 함수 안에서 접근 가능
	- 선언된 함수 안에서 선언된 함수 (nested function)에서도 접근 가능

```javascript
function a(){
	var v_a = "a";

	function b() {
		var v_b = "b";
		console.log("b :", typeof(v), typeof(v_a), typeof(v_b));

	}

	b();

	console.log("a : ", typeof(v), typeof(v_a), typeof(v_b));
}

var v = "v";

a();

console.log("o :", typeof(v), typeof(v_a), typeof(v_b));
```

## 2. 변수의 shadowing
- 함수 안에서 밖에서도 선언되었던 같은 이름의 변수를 사용하는 경우
	- 함수 밖의 변수는 잠시 가려짐 (shadowing)
	- 함수 안에서는 해당 함수에서의 변수를 사용 (함수 밖 변수의 값은 변하지 않음)
	- 함수에서 빠져나오면 다시 해당 변수에 접근할 수 있음

- 함수 안에서만 값이 유지되어야 하는 경우
	- 함수 안에서 var 키워드를 사용해 선언하고 사용

- 여러 함수에서 값이 유지되면서 사용되는 변수의 경우
	- 함수를 포괄하는 곳에서 선언하고 사용

```javascript
function shadowing_example(){
	console.log("F", val);
	val++;
}

var val = 0;
shadowing_example();
console.log("O", val);
```

```javascript
function name(){
	// 한 함수 안에서만 값이 유지되는 변수
	var in_function_var;
}

// 여러 함수에서 값이 유지되면서 사용되는 변수
var out_function_var;
```
## 3. closure(클로저)
- Closure
	- 함수, 함수가 선언될 때의 environment로 구성
	- 함수가 정의될 때의 environment가 함께 closure로 결합되면서, 다양한 활용이 가능하다.
		```javascript
		function makeCounterFunction(initVal){
			var count = initVal;
			function Increase(){
				count++;
				console.log(count);
			}
			return Increase;
		}
	
		var counter1 = makeCounterFunction(0);
		var counter2 = makeCounterFunction(10);
		```

	- counter1의 closure
		- 함수 : ```function Increase(){}```
		- 환경 : ```var count = 0;```

	- counter2의 closure
		- 함수 : ```function Increase(){}```
		- 환경 : ```var count = 10;```
