// 문제
// 정수를 담고 있는 배열 arr의 평균값을 return하는 함수, 
// solution을 완성해보라.

function solution(arr) {
	var answer = 0;

	for (var i = 0; i < arr.length; i++) {
		answer += arr[i] / arr.length;
	}

	return answer;
}
