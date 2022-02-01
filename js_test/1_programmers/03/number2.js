// 문제 : 변수 str에 저장된 문자열을 실수로 변환해서 pi_float에 저장하라.

// 문자열을 실수로 변환하기 위해 ```parseFloat```를 이용할 수 있다.
// ```parseFloat```는 명령어 뒤에 따라오는 괄호의 문자열 앞에서부터
// Number를 인식한다.

var str="3.141592는 Pi의 근사값입니다.";
var pi_float = parseFloat(str);

console.log("pi_float의 값은", pi_float, "입니다.");
