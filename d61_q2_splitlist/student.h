void splitList(list<T>& list1, list<T>& list2) {
    // Add your code here
    int ss = mSize / 2;
    int fs = mSize - ss;
    auto it = begin();
    for (int i = 0; i < fs; i++) {
        it++;
    }

    // 1 2 , 1 7 9 10 // 2 = it
    list1.mHeader->prev->next = mHeader->next;
    mHeader->next->prev = list1.mHeader->prev;
    it.ptr->prev->next = list1.mHeader;
    list1.mHeader->prev = it.ptr->prev;

    // 3 4 5 , 2 6 3
    list2.mHeader->prev->next = it.ptr;
    it.ptr->prev = list2.mHeader->prev;
    mHeader->prev->next = list2.mHeader;
    list2.mHeader->prev = mHeader->prev;

    mHeader->prev = mHeader;
    mHeader->next = mHeader;

    list1.mSize += fs;
    list2.mSize += ss;
    mSize = 0;
}