// /*The Node structure is defined as
// struct Node {
//     int data;
//     Node *left;
//     Node *right;

//     Node(int val) {
//         data = val;
//         left = right = NULL;
//     }
// };
// */

// class Solution
// {
//     private:
//     void leng(Node* root,int& n){
//         if(root==NULL) return ;
//         leng(root->left,n);
//         n++;
//         leng(root->right,n);
//     }
//     private:
//     void intrav(Node* root ,int k ,int& cnt,int & ans){
//         if(root==NULL)return;
//         intrav(root->left,k,cnt, ans);
//         cnt++;
//         if(cnt==k){
//             ans=root->data;
//             return;
//         }
//         intrav(root->right,k,cnt,ans);
        
//     }
//     public:
//     int kthLargest(Node *root, int K)
//     {
//         int cnt=0;
//         int n=0;
//         leng(root,n);
//         // cout << n << endl;
//         int ans=0;
//         intrav(root,n-K+1,cnt,ans);
//         return ans;
//     }
// };
