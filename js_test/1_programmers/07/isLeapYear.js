// 문제 : 인자 yeawr가 유년인지 아닌지를 true, false로 반환하는 solution 함수를 완성하세요.
// 현의상, 4의 배수인 해는 모두 윤년으로 생각해세요

function solution( year ) {
	if (year % 4 == 0) {
		return true;
	}
	else {
		return false;
	}
}
