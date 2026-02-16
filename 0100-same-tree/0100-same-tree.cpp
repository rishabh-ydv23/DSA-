/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {

        // Case 1: dono NULL hain
        if (p == NULL && q == NULL)
            return true;

        // Case 2: koi ek NULL hai
        if (p == NULL || q == NULL)
            return false;

        // Case 3: values match nahi karti
        if (p->val != q->val)
            return false;

        // Case 4: left aur right subtree check karo
        return isSameTree(p->left, q->left) &&
               isSameTree(p->right, q->right);
    }
};
