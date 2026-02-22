/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution
{
public:
    const int MOD = 1e9 + 7;
    long long maxp = 0, total = 0;
    int dfs(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        int sum = root->val + dfs(root->left) + dfs(root->right);
        maxp = max(maxp, (total - sum) * sum); // total - sum = sum of subtree
        return sum;
    }
    int maxProduct(TreeNode *root)
    {
        total = dfs(root); // calculates the total sum as initially = 0
        dfs(root);         // no gives the actual maxp
        return maxp % MOD;
    }
};