#include"JQ_LIB.h"

#ifndef Tree
#define Tree

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

//三种遍历，非递归
void PostOrder(TreeNode* root) {
    stack<pair<TreeNode*, bool> > route;
    route.push(make_pair(root, false));
    while(!route.empty()) {
        TreeNode* root = route.top().first;
        bool visit = route.top().second;
        route.pop();
        if(root==NULL)
            continue;
        if(visit) {
            cout << root->val << ' ';
        } else {//改变下面三者的顺序就可以实现三种排序
            route.push(make_pair(root, true));
            route.push(make_pair(root->right, false));
            route.push(make_pair(root->left, false));

        }
    }
}

#endif