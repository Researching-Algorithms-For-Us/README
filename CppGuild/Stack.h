#include <bits/stdc++.h>
using namespace std;

const int MX = 100005;
int data[MX];
int pos = 0;

void push(int x)
{
    data[pos++] = x;
}

void pop()
{
    pos--;
}

int top()
{
    return data[pos - 1];
}


