// #include <bits/stdc++.h> 
// /************************************************************

//     Following is the TreeNode class structure

//     template <typename T>
//     class TreeNode {
//        public:
//         T data;
//         TreeNode<T> *left;
//         TreeNode<T> *right;

//         TreeNode(T data) {
//             this->data = data;
//             left = NULL;
//             right = NULL;
//         }
//     };

// ************************************************************/

// vector<int> getLeftView(TreeNode<int> *root)
// {
//         if(root==NULL) return{};
//         map<int,int> m;//{depth_level,node}
//         queue<pair<TreeNode<int>*,int>> q;
//         q.push({root,0});
//         while(!q.empty()){
//             auto temp = q.front();
//             q.pop();
//             TreeNode<int>* node=temp.first;
//             int depth=temp.second;
//             if(m.find(depth) == m.end()) m[depth]=node->data;
//             if(node->left){
//                 q.push({node->left,depth+1});
//             }
//             if(node->right){
//                 q.push({node->right,depth+1});
//             }
//         }
//         vector<int> ans;
//         for(auto pr : m){
//             ans.push_back(pr.second);
//         }
//         return ans;
// }

