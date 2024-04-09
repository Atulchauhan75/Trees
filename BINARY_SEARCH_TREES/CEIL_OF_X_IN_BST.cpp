// void trav(Node* root,vector<int> & temp){
//     if(root==NULL) return;
//     trav(root->left , temp);
//     temp.push_back(root->data);
//     trav(root->right,temp);
// }
// // Function to return the ceil of given number in BST.
// int findCeil(Node* root, int input) {
//     if (root == NULL) return -1;
//     vector<int> temp;
//     trav(root,temp);
//     sort(temp.begin(),temp.end());
//     auto it = lower_bound(temp.begin(),temp.end(),input);
//     if(it==temp.end())return -1;
//     return *it;
// }




//METHOD2 O(1) SPACE COMPLEXITY
// Function to return the ceil of given number in BST.
// int findCeil(Node* root, int input) {
//     if (root == NULL) return -1;
//     int ans=-1;
//     while(root!=NULL){
//         if(root->data>=input){
//             ans=root->data;
//             root=root->left;
//             continue;
//         }
//         else{
//             root=root->right;
//             continue;
//         }
//     }
//     return ans;
// }