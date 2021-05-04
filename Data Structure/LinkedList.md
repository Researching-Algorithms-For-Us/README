# 연결리스트

![](https://img1.daumcdn.net/thumb/R1280x0/?scode=mtistory2&fname=https%3A%2F%2Fblog.kakaocdn.net%2Fdn%2FmoASN%2FbtqCqNiHGUn%2FqKUiizT08aHIkeWaG5ONN0%2Fimg.png)
> 원소를 저장할때 그 다음 원소가 있는 위치를 포함시키는 방식으로 저장하는 자료구조, 원소는 이곳 저곳에 흩어져있음.


## 연결리시트의 성질

1. k 번째 원소를 확인/변경하기 위해 O(k)가 필요함
   1. 원하는 원소가 있는 위치까지 하나씩 이동해야 됨.
2. 임의의 위치에 원소를 추가/ 임의의 위치의 원소 제거는 O(1)  -> 해당 기능을 이용해서 editor 커서 기능을 구현할때 좋다.
   1. 포인팅 변수만 변경후 중간에 넣으면 된다.
3. 메모리상 원소들이 연속하지 않아 캐시적중률이 떨어진다.

## 연결리스트의 종류

1. 단일연결리스트
   1. 노드에 다음노드의 주소만 가지고있을경우
2. 이중연결리스트
   1. 노드에 이전, 다음 노드의 주소를 가지고 있는 경우 (std::list)
3. 원형 연결리스트
   1. 처음과 끝이 연결되어 loop를 이루고 있는 경우

## 연결리스트 vs 배열 (면접)

||배열|연결리스트|
|------|---|---|
|K번째 원소 접근|O(1)|O(k)|
|임의 위치 원소 추가 제거|O(n)|O(1)|
|메모리상 배치|aligned|not aligned|
|추가 공간|없음|필요|


## 연결리스트 코드예제(C++)

+ [단일연결리스트](../CppGuild/SingleLinkedList.h)
+ [듀얼연결리스트](../CppGuild/DoubleLinkedList.h)
+ [코딩테스트용 야매 연결리스트](../CppGuild/YameLinkedList.cpp)