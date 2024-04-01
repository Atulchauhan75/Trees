// /*
// struct Node
// {
//     int data;
//     Node* left;
//     Node* right;
// };
// */


// class Solution
// {
//     public:
//     //Function to return a list of nodes visible from the top view 
//     //from left to right in Binary Tree.
//     vector<int> topView(Node *root)
//     {
//         if(root==NULL) return{};
//         map<int,int> m;//{side,node}
//         queue<pair<Node*,int>> q;
//         q.push({root,0});
//         while(!q.empty()){
//             auto temp = q.front();
//             q.pop();
//             Node* node=temp.first;
//             int side=temp.second;
//             if(!m[side]) m[side]=node->data;
//             if(node->left){
//                 q.push({node->left,side-1});
//             }
//             if(node->right){
//                 q.push({node->right,side+1});
//             }
//         }
//         vector<int> ans;
//         for(auto pr : m){
//             ans.push_back(pr.second);
//         }
//         return ans;
//     }

// };