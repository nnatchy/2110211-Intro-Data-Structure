#include "stack.h"
#include "queue.h"

namespace CP {
    template<typename T>
    void stack<T>::appendStack(stack<T> s) {
        while (!s.empty()) {
            push(s.top());
            s.pop();
        }
    }

    template<typename T>
    void stack<T>::appendQueue(queue<T> q) {
        int qS = q.size();
        int sS = size();
        while (!q.empty()) {
            push(q.front());
            q.pop();
        }
        T* arr = new T[mSize];
        for (int i = 0; i < qS; i++) arr[i] = mData[mSize - 1 - i];
        for (int i = 0; i < sS; i++) arr[qS + i] = mData[i];
        delete[] mData;
        mData = arr;
        mCap = mSize;
    }

    template<typename T>
    void queue<T>::appendStack(stack<T> s) {
        while (!s.empty()) {
            push(s.top());
            s.pop();
        }
    }

    template<typename T>
    void queue<T>::appendQueue(queue<T> q) {
        while (!q.empty()) {
            push(q.front());
            q.pop();
        }
    }
}

