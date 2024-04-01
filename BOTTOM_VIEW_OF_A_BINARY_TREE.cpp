// class Solution {
//   public:
//     vector <int> bottomView(Node *root) {
//         if(root==NULL) return{};
//         map<int,int> m ;// {line,node}
//         queue<pair<Node* , int> > q;
//         q.push({root,0});
//         while(!q.empty()){
//             int size=q.size();
//             for(int i=0 ;i<size ; i++){
//                 int line=q.front().second;
//                 Node* node=q.front().first;
//                 q.pop();
//                 m[line]=node->data;
//                 if(node->left){
//                     q.push({node->left,line-1});
//                 }
//                 if(node->right){
//                     q.push({node->right,line+1});
//                 }
//             }
//         }
//         vector<int> ans;
//         for(auto pr : m) ans.push_back(pr.second);
//         return ans;
//     }
// };