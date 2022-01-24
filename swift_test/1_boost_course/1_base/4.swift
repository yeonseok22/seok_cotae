// Bool : true, false
var someBool: Bool = true
someBool = false

/* 다음은 컴파일 오류 예시이다.
someBool = 0
someBool = 1
*/

// Int, UInt
// Int : 정수 타입, 현재는 기본적으로 64비트 정수형
var someInt: Int = -100

// someInt = 100.1  // 오류 발생

// UInt : 양의 정수 타입, 현재는 기본적으로 64비트 양의 정수형
var someUInt: UInt = 100

// someUInt = -100  // 오류 발생
// someUInt = someInt // 오류 발생

// Float, Double
// Float : 실수 타입, 32비트 부동소수형 
var someFloat: Float = 3.14
someFloat = 3

// Double : 실수 타입, 64비트 부동소수형
var someDouble: Double = 3.14
someDouble = 3

// someDouble = someFloat // 컴파일 오류 발생

// Character, String
// Character : 문자 타입, 유니코드 사용, 큰따옴표(" ") 사용
var someCharacter: Character = "가"
someCharacter = "A"

print(someCharacter)

// String : 문자열 타입, 유니코드 사용, 큰따옴표(" ") 사용
var someString: String = "하하하"
someString = someString + "웃자"
print(someString)

// someString = someCharater  // 오류 발생
