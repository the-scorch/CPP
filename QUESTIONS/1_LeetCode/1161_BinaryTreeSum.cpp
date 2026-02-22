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
class Solution
{
public:
    vector<int> lsum = {INT_MIN};
    void DFS(TreeNode *Node, int level = 1)
    {
        if (Node == NULL)
            return;
        if (lsum.size() == level)
            lsum.push_back(Node->val);
        else
            lsum[level] += Node->val;
        DFS(Node->left, level + 1);
        DFS(Node->right, level + 1);
    }
    int maxLevelSum(TreeNode *root)
    {
        DFS(root);
        return max_element(lsum.begin(), lsum.end()) - lsum.begin();
        ;
    }
};