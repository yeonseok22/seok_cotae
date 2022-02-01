// 문제 : undefined 값을 가진 변수 a와 null 값을 가진 변수 b를 선언해보세요

/* undefined
시스템에서 어떤 변수나 속성이 정의되지 않은 경우를 표현한다.
선언만 하고 초기화 되지 않은 변수의 타입이나 값, 
객체의 정의되지 않은 속성의 타입이나 값을 나타낸다.
*/

/* null
개발자가 명시적으로 비어있는 상태를 나타낼때 사용한다.
typeof의 결과는 object이며 값은 null 이다.
*/

// undefined 값을 가진 변수 a를 선언하세요.
var a;

// null 값을 가진 변수 b를 선언하세요.
var b = null;

console.log("a의 자료형 :", typeof(a), "입니다.");
console.log("b의 자료형 :", typeof(b), "이고, 값은", b, "입니다.");
