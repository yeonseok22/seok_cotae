// 문제 : 각 달을 month라는 인자로 받아 그 달이 몇일까지 있는 반환하는 함수
// solution 함수를 완성하세요. (2월은 28일까지 있다고 가정하세요)

function solution( month ) {
	switch(month) {
		case 2:
			return 28;
			break;

	    case 4:
			return 30;
			break;
		case 6:
			return 30;
			break;
		case 9:
			return 30;
			break;
		case 11:
			return 30;
			break;

		default:
			return 31;
			break;
	}
}
