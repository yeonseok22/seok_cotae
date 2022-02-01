# 조건문과 반복문

### 목차
1. if문
2. switch문
3. while문
4. do while문
5. for문
6. for in문

## 1. if문
- 조건문 : 조건에 따라 프로그램의 흐름을 분기해서 특정 코드가 실행되도록 함

```javascript
if (/*condition*/) {
	// 참일 경우 실행될 코드
}
else if ( /* condition */) {
	// if 문의 조건이 거짓이고, 위의 조건식이 참일 경우 실행될 코드
}
else if (/* condition */) {
	// ...
}
else {
	// ...
}
```
## 2. switch문 (진행중)
- switch문 : 조건에 따라 프로그램의 흐름을 분기해서 특정 코드가 실행되도록 함
	```javascript
	switch(/* 비교할 값 */) {
		case /*값1*/:
			// ...

		// ...

		default:
			// 비교할 값이 위의 모든 값과 다른 경우 실행될 코드
			break;

	}
	```
- break문
	- break 구문을 만나면, switch-case 문의 마지막 중괄호 밖으로 빠져나옴
	- break를 사용하지 않으면, switch 문에서 빠져나오지 않고 다음 case에 해당하는 코드까지 실행됨
## 3. while문
- while문 : 조건이 만족하는 동안 반복실행될 코드를 계속 실행
	```javascript
	while (/* 조건식 */) {
		// 반복 실행될 코드
	}
	```

- continue : 남은 반복실행될 코드를 모두 skip
- break : 반복문에서 즉시 탈출
## 4. do while문
- do, while : 한 번은 코드가 실행되고, 이후에 반복실행될지 말지를 결정

	```javascript
	do{
		// 반복 실행될 코드
	}while( /* 조건식 */);
	```

- while, do-while 차이점 (조건식이 거짓(False)일 때)
	- while : 한번도 실행되지 않음
	- do-while : 한번은 실행되고 종료
## 5. for문
- for : 초기구문, 업데이트 구문, 반복조건을 한 구문에 합친 반복문 (C/C++와 동일)
- 0 ~ 4까지 더하는 for문

```javascript
var array = [1,2,3,4,5,6,7,8,9,10];

for (var i = 0; i < array.length; i++) {
	console.log(array[i]);
}
```

```javascript
var sum = 0;
for (int i = 0; i < 5; i++) {
	sum += i;
}
```

## 6. for in문
- for in
	- 객체의 각 엘리먼트에 접근할 수 있는 반복문
	- **객체의 속성들을 출력하는 동일한 코드**

- for 구문 사용
	```javascript
	var property_list = Object.keys(obj);

	for (var i = 0; i < property_list.length; i++) {
		var propertyName = property_list[i];
		console.log("\t", propertyName, ": ", obj[propertyName] );
	}
	```

- for in 구문 사용
	```javascript
	for (var propertyName in obj) {
		console.log("\t", propertyName, ": ", obj[propertyName]);
	}
	```

```javascript
var obj = {
	name:"object",
	weight:30,
	isObject:true,
	arr:[1, 2, 3],
	obj:{property:1}
};

console.log("For 구문으로 object property 반복하기");

var property_list = Object.keys(obj);
console.log("Property List : ", property_list);

for (var i = 0; i < property_list.length; i++) {
	var propertyName = property_list[i];
	console.log("\t", propertyName, ": ", obj[propertyName] );
}

console.log("\n\nFor in 구문으로 object property 반복하기");

for (var propertyName in obj) {
	console.log("\t", propertyName, ": ", obj[propertyName] );
}
```

