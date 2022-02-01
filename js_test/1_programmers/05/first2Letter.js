// 문제 : 함수 solution을 수정해서 인자 str의 첫2글자를 문자열로 return하는 함수를 만들어라
// 예를 들어, str이 "hello"라면 substring 또는 substr 메서드를 써서 "he"를 return하면 된다.

// .substring(pos1, pos2) : pos1에서 pos2까지의 부분 문자열 반환
//	- pos2 생략 시, pos1에서부터 마지막까지의 문자열 반환

// .substr(pos, length) : pos에서 length길이 만큼의 부분 문자열 반환
//`	- length 생략 시, pos에서 마지막까지의 문자열 반환
//	- pos가 음수인 경우, str.length - pos로 동작

function solution(str){
	return str.substr(0, 2);
}
