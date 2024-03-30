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
// public:
//     vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
//         if (root == NULL)
//             return {};
//         bool ok = false;
//         vector<vector<int>> ans;
//         queue<TreeNode*> q;
//         q.push(root);
//         while (!q.empty()) {
//             int curr_size = q.size();
//             vector<int> level;
//             if (ok == false) {
//                 for (int i = 0; i < curr_size; i++) {
//                     TreeNode* temp=q.front();
//                     q.pop();
//                     level.push_back(temp->val);
//                     if(temp->left)q.push(temp->left);
//                     if(temp->right)q.push(temp->right);
//                 }
//                 ok=true;
//                 ans.push_back(level);
//             }
//             else {
//                 for (int i = 0; i < curr_size; i++) {
//                     TreeNode* temp=q.front();
//                     q.pop();
//                     level.insert(level.begin(),temp->val);
//                     if(temp->left)q.push(temp->left);
//                     if(temp->right)q.push(temp->right);
//                 }
//                 ok=false;
//                 ans.push_back(level);
//             }
//         }
//         return ans;
//     }
// };