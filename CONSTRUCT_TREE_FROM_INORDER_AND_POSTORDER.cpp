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
// class Solution {
// private:
//     TreeNode* buildingtree(vector<int>& postorder, int poststart, int postend, vector<int>& inorder, int instart, int inend,unordered_map<int, int>& m) {
//         if(instart>inend || poststart>postend)return NULL;
//         int index=m[postorder[postend]];

//         TreeNode* root=new TreeNode(postorder[postend]);
//         int numsright=inend-index;
//         root->left=buildingtree(postorder , poststart , postend-numsright-1,inorder,instart,index-1,m);
//         root->right=buildingtree(postorder , postend-numsright,postend-1,inorder,index+1,inend,m);
//         return root;
//     }

// public:
//     TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
//         unordered_map<int, int> m;
//         for (int i = 0; i < (int)inorder.size(); i++)
//             m[inorder[i]] = i;
//         return buildingtree(postorder, 0, postorder.size() - 1, inorder, 0,
//                             inorder.size() - 1, m);
//     }
// };