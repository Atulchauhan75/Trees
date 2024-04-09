// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//  * };
//  */
// //  TreeNode* aimnode;
// class Solution {
// private:
//     void markparents(TreeNode* root,
//                      unordered_map<TreeNode*, TreeNode*>& parent) {
//         if (root == NULL)
//             return;
//         queue<TreeNode*> q;
//         q.push(root);
//         while (!q.empty()) {
//             TreeNode* it = q.front();
//             q.pop();
//             if (it->left) {
//                 parent.insert({it->left, it});
//                 q.push(it->left);
//             }
//             if (it->right) {
//                 parent.insert({it->right, it});
//                 q.push(it->right);
//             }
//         }
//     }

// public:
//     vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
//         unordered_map<TreeNode*, TreeNode*> parent; // node->parent
//         markparents(root, parent);

//         unordered_map<TreeNode*, bool> visited;
//         queue<TreeNode*> q;
//         q.push(target);
//         int curr_level = 0;
//         visited[target] = true;
//         while (!q.empty()) {
//             int size = q.size();
//             if (curr_level++ == k)
//                 break;
//             for (int i = 0; i < size; i++) {
//                 auto it = q.front();
//                 q.pop();
//                 if (it->left && !visited[it->left]) {
//                     q.push(it->left);
//                     visited[it->left] = true;
//                 }
//                 if (it->right && !visited[it->right]) {
//                     q.push(it->right);
//                     visited[it->right] = true;
//                 }
//                 if (parent[it] && !visited[parent[it]]) {
//                     q.push(parent[it]);
//                     visited[parent[it]] = true;
//                 }
//             }
//         }
//         vector<int> ans;
//         while (!q.empty()) {
//             ans.push_back(q.front()->val);
//             q.pop();
//         }
//         return ans;
//     }
// };