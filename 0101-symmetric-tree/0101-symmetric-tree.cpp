class Solution {
public:

    bool isSymmetric(TreeNode* root) {
        if (root == NULL)
            return true;

        return isMirror(root->left, root->right);
    }

    bool isMirror(TreeNode* left, TreeNode* right) {

        // 1️⃣ Agar dono NULL hain
        if (left == NULL && right == NULL)
            return true;

        // 2️⃣ Agar ek NULL hai
        if (left == NULL || right == NULL)
            return false;

        // 3️⃣ Agar values different hain
        if (left->val != right->val)
            return false;

        // 4️⃣ Mirror direction me check karo
        bool outer = isMirror(left->left, right->right);
        bool inner = isMirror(left->right, right->left);

        return outer && inner;
    }
};