// 문제 : book의 title을 이용해서 코드 2번째 줄이 책의 제목을 출력하도록 만들어라.

// 객체의 속성에 접근하는 방법
// 1. 객체이름.속성이름
// 2. 객체이름["속성이름"]

var man = { name: "홍길동", age : 20 };

console.log(man.name);		// 이름
console.log(man.age);		// 나이

var book = { title: "어린왕자" };
console.log("제목:", book.title);
