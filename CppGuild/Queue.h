#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int data[MX];
int head = 0, tail = 0;

void enqueue(int a)
{
    if(head == (tail + 1) % MX)
    {
        return;
    }

    data[tail] = a;
    tail = (tail + 1) % MX;
}

void dequeue()
{
    head = (head + 1) % MX;
}

int front()
{
    return data[head];
}

int back()
{
    if(head == tail)
    {
        return 0;
    }

    int t = (tail - 1) % MX;
    
    return data[t];
}