# Repository

### 1. Repository Rule

---

**_Repository 생성 규칙입니다._**

> 스터디를 한 이론적 내용 및 그에 따른 소스코드 관리를 위한 Repository 생성 규칙을 정의합니다.

1. Name : { Chapter No }. { Chapter Name } 으로 Repository를 생성합니다.
   ```
   Ex> 3. Greedy
   ```  
2. Directory Tree : source / theory / baekjoon
explan 로 구성된다.
   - source : 소스코드를 저장한다. 해당 하위 목록에는 풀이 언어에 대한 폴더가 존재합니다.
   - theory : 해당 챕터에 대한 이론적 내용을 정리합니다. 공동으로 작성하며, 토의에 관련된 내용을 취합하여 정리합니다.
   - baekjoon : 실전 문제 풀이 내용은 해당 폴더에서 관리합니다. 문제에 대한 소스코드 파일 명칭은 해당 문제의 문제 번호로 지정합니다.

3. 1번항목과 2번항목 기준으로 다음과 같이 Repository를 정의합니다.
   ```
   Ex> 
   3. Greedy : repository 명
      - source : 책 소스코드 풀이
        - python : python code 관리
          - greedy.py  
        - cpp : cpp 코드 관리
          - greedy.cpp
      - theory : 이론 내용 정리
        - README.md
      - baekjoon : 실전 풀이
        - python : python code 관리
          - 11047.py : baekjon의 문제 번호를 파일명으로 지정
          - 1931.py
            ...
          - 13305.py
        - cpp : cpp code 관리
          - 11047.cpp : baekjon의 문제 번호를 파일명으로 지정
          - 1931.cpp
            ...
          - 13305.cpp
   ```  

