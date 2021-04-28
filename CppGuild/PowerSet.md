# PowerSet(부분집합)

> 집합에 포함된 원소를 선택하는 것

예) {1, 2, 3} 의 부분집합은 다음과 같습니다. 
> {}, {1}, {2}, {3}, {1, 2}, {2, 3}, {1, 2, 3}


## 수학적 표현
> A라는 집합이 B라는 집합에 속하면 A⊂B라고 표시하면서, 이럴 때, A를 B의 부분집합 이라고 부릅니다.

<img style="-webkit-user-select: none;margin: auto;" src="https://postfiles.pstatic.net/MjAxODAxMDNfOTgg/MDAxNTE0OTQ5ODM1Njg5.D3SgZFgGzANz3bz4otERDumQqD774dfKOklrmBz7BG4g.azZYlQkhIm5K9pt-_hi7h99sTByO3hWC0ND-PfFwjPcg.PNG.junhyuk7272/%EB%B6%80%EB%B6%84%EC%A7%91%ED%95%A9.png?type=w1">

## 조합 (Combination)적 구현
> 확률과 통계 과목에서 등장하는 조합입니다. n개의 숫자 중에서 r개의 수를 임의 순서 없이 뽑는 것을 의미합니다. nCr
> 조합의 경우 r의 갯수를 1 ~ 원하고자 하는 뽑는 숫자 r 까지 뽑으시면 됩니다.


### BackTrack 방식의 구현 


```cpp
// arr : 조합 뽑아낼 배열 
// visited : 조합에 뽑혔는지 체크 하는 배열 
// n : 배열의 크기
// r : 조합의 크기
void Combination(int[] arr, bool[] visited, int start, int n, int r)
{
   if(r == 0)
   {
       // 조합 완성 arr, visited, n 출력
       return;
   }
   
   for (int i=start; i<n; ++i)
   {
      visited[i] = true;
      Combination(arr, visited, i + 1, n, r - 1);
      visited[1] = false;
   }
}
```

### 조합의 재귀적 구현 

```cpp
void Combination(int[] arr, bool[] visited, int depth, int n, int r) 
{
    if (r == 0) {
        print(arr, visited, n);
        return;
    }

    if (depth == n) {
        return;
    }

    visited[depth] = true;
    comb(arr, visited, depth + 1, n, r - 1);

    visited[depth] = false;
    comb(arr, visited, depth + 1, n, r);
}
```


## 재귀적 구현

> 조합의 경우를 잘 이용하면 됩니다.

```cpp
void PowerSet(int[] arr, bool[] visited, int targetdepth, int depth)
{
    if(depth == targetdepth)
    {
         // 부분집합 visited 
         return
    }
    
    visited[depth] = false;
    PowerSet(arr, visited, targetdepth, depth + 1);
    visited[depth] = true;
    PowerSet(arr, visited, targetdepth, depth + 1);
}
```


## 예제

[백준 2309](https://www.acmicpc.net/problem/2309)
