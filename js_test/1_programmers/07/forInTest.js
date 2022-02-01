// 문제 : for in 문을 이용해서 obj의 속성중,
// number 타입의 값을 모두 더해서 sum에 저장하도록 빈칸을 채워
// 코드를 완성해 보세요

// for in문은 객체의 각 엘리먼트에 접근할 수 있는 반복문
// for in문은 속성의 이름을 통해 엘리먼트에 접근할 수 있다.

var obj = {
    name: "object",
	age: 10,
	weight: 5
}

var sum = 0;
for (var o in obj) {
	if (typeof(obj[prop]) == "number") {
		sum+= obj[prop];
}

console.log("sum : ", sum);
