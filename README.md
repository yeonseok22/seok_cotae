# seok_cotae

- git 참고 사항
- [git 초기 설정](https://blog.naver.com/ogh010/222412610320)
    1. repository 생성
    2. vscode 터미널 창에 들어가서, ```git init .``` 명령어로 초기화한다.
    3. ```git add .```, ```git commit -m "커밋할 때_설명 글"``` 입력
    4. 접속 권한을 받는다.
        - ```git config --global user.email "깃허브_이메일_주소"```를 입력한다.
        - ```git config --global user.name "깃허브_사용자_이름"```를 입력한다.
    5. ```git remote add origin "깃허브에서 url 복사한 것"``` 입력하기 -> github 연동
    6. push 해서 업로드한다.
        - ```git push --set-upstream origin master``` 입력

- 이후 업로드 참고사항
- [git 업로드 참고](https://miaow-miaow.tistory.com/133)
    1. 코드 수정
    2. Source Control 들어가기 (좌측 메뉴 위에서 세번째)
    3. CHANGES에 +를 클릭한다. (Git Add)
    4. 상세 메뉴(점 3개) 클릭해서 Commit Staged 또는 Commit All 선택
    5. commit 메시지 입력하기
    6. push to 클릭해서 git 어디에 push 할 건지 정할 수 있다.

