#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

template <typename T>
void CP::stack<T>::mitosis(int a, int b)
{
    CP::stack<T> tmp;
    int x = 0;
    while (x < a) {
        tmp.push(top());
        pop();
        x++;
    }
    while (x >= a && x <= b) {
        for (int i = 0 ; i < 2; i++) tmp.push(top());
        pop();
        x++;
    }
    while (!tmp.empty()) {
        push(tmp.top());
        tmp.pop();
    }
}

#endif