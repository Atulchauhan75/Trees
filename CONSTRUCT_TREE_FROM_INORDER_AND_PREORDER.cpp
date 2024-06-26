// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
//  * right(right) {}
//  * };
//  */
// class Solution
// {
// private:
//     TreeNode *buildingtree(vector<int> &preorder, int prestart, int preend,
//                            vector<int> &inorder, int instart, int inend,
//                            unordered_map<int, int> &m)
//     {
//         if (prestart > preend || instart > inend)
//             return NULL;
//         TreeNode *root = new TreeNode(preorder[prestart]);
//         int index =
//             m[root->val]; // this is the index of the root in inorder vector
//         int numsleft = index - instart;
//         root->left = buildingtree(preorder, prestart + 1, prestart + numsleft,
//                                   inorder, instart, index - 1, m);
//         root->right = buildingtree(preorder, prestart + numsleft + 1, preend,
//                                    inorder, index + 1, inend, m);
//         return root;
//     }

// public:
//     TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
//     {
//         unordered_map<int, int> m;
//         for (int i = 0; i < (int)inorder.size(); i++)
//             m[inorder[i]] = i;
//         return buildingtree(preorder, 0, preorder.size() - 1, inorder, 0,
//                             inorder.size() - 1, m);
//     }
// };