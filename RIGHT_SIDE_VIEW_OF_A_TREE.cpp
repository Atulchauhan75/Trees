// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     vector<int> rightSideView(TreeNode* root) {
//         if(root==NULL) return{};
//         map<int,int> m;//{depth_level,node}
//         queue<pair<TreeNode*,int>> q;
//         q.push({root,0});
//         while(!q.empty()){
//             auto temp = q.front();
//             q.pop();
//             TreeNode* node=temp.first;
//             int depth=temp.second;
//             if(m.find(depth) == m.end()) m[depth]=node->val;
//             if(node->right){
//                 q.push({node->right,depth+1});
//             }
//             if(node->left){
//                 q.push({node->left,depth+1});
//             }
//         }
//         vector<int> ans;
//         for(auto pr : m){
//             ans.push_back(pr.second);
//         }
//         return ans;
//     }
// };