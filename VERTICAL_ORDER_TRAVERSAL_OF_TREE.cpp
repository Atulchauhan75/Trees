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
// map<int, vector<pair<int,int>> > m;
// class Solution {
//     private:
//     void trav(TreeNode* root , int x,int y,map<int, vector<pair<int,int>> > &m){
//         if(root==NULL) return;
//         m[x].push_back({y,root->val});
//         trav(root->left,x-1,y+1,m);
//         trav(root->right,x+1,y+1,m);
//     }
// public:
//     vector<vector<int>> verticalTraversal(TreeNode* root) {
//         m.clear();
//         trav(root,0,0,m);
//         vector<vector<int>> ans;
//         for(auto &pr : m){
//             vector<int> level;
//             if(pr.second.size()>1) sort(pr.second.begin(),pr.second.end());
//             for(auto &it : pr.second){
//                 level.push_back(it.second);
//             }
//             ans.push_back(level);
//         }
//         return ans;
//     }
// };