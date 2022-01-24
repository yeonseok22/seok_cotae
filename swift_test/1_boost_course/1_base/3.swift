/* 상수와 변수 */
// 1. 상수와 변수 선언

/* let : 상수 선언 키워드
   let 상수이름: 타입 = 값 */

/* var : 변수 선언 키워드
   var 변수이름: 타입 = 값 */

// 값의 타입이 명확하다면 타입 생략이 가능하다.
/* 예시
   let 상수이름 = 값
   var 상수이름 = 값
*/

// 상수와 변수 활용
let constant: String = "차후에 변경이 불가능한 상수 let"
var variable: String = "차후에 변경이 가능한 변수 var"

variable = "변수는 이렇게 차후에 다른 값을 할당할 수 있다."
// constant = "상수는 차후에 값을 변경할 수 없다."

// 2. 상수 선언 후, 값 할당하기
// 선언을 한 뒤, 나중에 값을 할당하려는 상수나 변수는 반드시 타입을 명시해야 한다.

let sum: Int
let inputA: Int = 100
let inputB: Int = 200

// 선언 후 첫 할당
sum = inputA + inputB

// sum = 1 -> 상수이므로 다시 값을 바꿀 수 없다.

// 변수는 물론 차후에 할당하는 것이 가능하다.
var nickName: String

nickName = "Yagom"

// 변수는 차후에 다시 다른 값을 할당해도 문제가 없다.
nickName = "야곰"

// 이름과 수학에서 자주 사용되는 상수는 let으로 설정해 두어야 한다.
// 이렇듯, 변하지 않아야 하는 수는 let으로 설정해야 한다!
let name = "yagom"
let pi = 3.14159

// 이외에 값이 변해도 괜찮은 수는 var로 설정하면 된다.
var numberToAdd = 5
var maxItemCount = 1000
