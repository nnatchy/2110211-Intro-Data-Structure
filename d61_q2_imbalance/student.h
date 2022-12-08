// Your code here
#include<cmath>
int get_height(node*n , KeyT &ans, int &mX) {
    if (n == NULL) return -1;
    int lH = get_height(n->left, ans, mX);
    int rH = get_height(n->right, ans, mX);
    int imb = std::abs(lH - rH);
    if (imb > mX) {
        mX = imb;
        ans = n->data.first;
    } else if (imb == mX && mLess(n->data.first, ans)) {
        ans = n->data.first;
    }
    return h;
}

KeyT getValueOfMostImbalanceNode() {
    // Your code here
    KeyT ans = mRoot->data.first;
    int mX = 0;
    _ = get_height(mRoot, ans, mXx);
    return ans;
}
