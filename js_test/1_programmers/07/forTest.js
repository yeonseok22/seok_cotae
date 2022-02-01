// 문제 : for문을 이용해서 배열 cost의 값을 모두 더해 total_cost 변수에 저장하세요

var cost = [ 85, 42, 37, 10, 22, 8, 15 ];
var total_cost = 0;

// for 안에 초기 함수는 var를 사용하도록!!
for (var i = 0; i < cost.length; i++) {
	total_cost += cost[i];
}

console.log(total_cost);
