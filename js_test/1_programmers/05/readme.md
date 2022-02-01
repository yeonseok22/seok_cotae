# String

### 목차
1. String 이어 붙이기
2. String 다루기

## 1. String 이어 붙이기
- 문자열 길이 알아내기 : 문자열의 ```.length``` 속성을 이용
	- ```str.length```(권장)
	- ```str["length"];```
- 문자열 붙이기
	1. ```.concat``` 함수 사용
		- ```str1.concat(str2)```
	2. 더하기(+) 연산자 사용
		- ```str1+str2```


## 2. String 다루기
- 특정 위치의 문자열 알아내기
	- ```.chatAt``` 함수 이용
		- 첫 문자 : ```str.charAt(0)```
		- 마지막 문자 : ```str.charAt(str.length-1)```

	- 대괄호(```[]```) 사용
		- 첫 문자 : ```str[0]```
		- 마지막 문자 : ```str[str.length-1]```

- 부분문자열 구하기 : 문자열의 연속된 일부분을 구하는 함수
	- ```.substring(pos1, pos2)``` : pos1에서 pos2까지의 부분 문자열 반환
		- pos2 생략시 pos1에서부터 마지막까지의 문자열 반환

	- ```substr(pos, length)``` : pos에서 length길이 만큼의 부분 문자열 반환
		- length 생략시, pos에서 마지막까지의 문자열 반환
		- pos가 음수인 경우, ```str.length - pos```로 동작

- 문자열 검색하기
	- ```indexOf(str)```
	- ```lastIndexOf(str)```
