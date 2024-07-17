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
auto _ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    return 0;
}();


class Solution {
public:
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int, TreeNode*> tree;
        unordered_set<int> children;
        for (auto i: descriptions){
            children.insert(i[1]);
            if (tree.find(i[0]) == tree.end())
                tree[i[0]] = new TreeNode(i[0]);
            if (tree.find(i[1]) == tree.end())
                tree[i[1]] = new TreeNode(i[1]);
            if (i[2] == 1)
                tree[i[0]]->left = tree[i[1]];
            else
                tree[i[0]]->right = tree[i[1]];
        }

        for (auto i: tree)
            if (children.find(i.first) == children.end())
                return tree[i.first];

        return NULL;
    }
};