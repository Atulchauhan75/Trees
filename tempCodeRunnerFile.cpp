#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left, *right;

    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

// Function to print all nodes of a binary tree in Preorder, Postorder and Inorder using only one stack
void allTraversal(Node *root)
{
    // Stores preorder traversal
    vector<int> pre;
    // Stores inorder traversal
    vector<int> post;
    // Stores postorder traversal
    vector<int> in;
    // Stores the nodes and the order in which they are currently visited
    stack<pair<Node *, int>> s;

    s.push(make_pair(root, 1));
    while (!s.empty())
    {
        pair<Node *, int> p = s.top();
        if (p.second == 1)// If the status of top node of the stack is 1
        {
            // Update the status of top node
            s.top().second++;
            // Insert the current node into preorder, pre[]
            pre.push_back(p.first->data);
            if (p.first->left)// If left child is not NULL
            {
                // Insert the left subtree  with status code 1
                s.push({p.first->left, 1});
            }
        }
        else if (p.second == 2)// If the status of top node of the stack is 2
        {
            // Update the status of top node
            s.top().second++;
            // Insert the current node in inorder, in[]
            in.push_back(p.first->data);
            if (p.first->right)// If right child is not NULL
            {
                // Insert the right subtree into the stack with status code 1
                s.push({p.first->right, 1});
            }
        }
        else // If the status of top node of the stack is 1
        {
            // Push the current node in post[]
            post.push_back(p.first->data);
            s.pop();
        }
    }

    cout << "Preorder Traversal: ";
    for (int i = 0; i < pre.size(); i++)
    {
        cout << pre[i] << " ";
    }
    cout << "\n";

    // Printing Inorder
    cout << "Inorder Traversal: ";

    for (int i = 0; i < in.size(); i++)
    {
        cout << in[i] << " ";
    }
    cout << "\n";

    // Printing Postorder
    cout << "Postorder Traversal: ";

    for (int i = 0; i < post.size(); i++)
    {
        cout << post[i] << " ";
    }
    cout << "\n";
}

// Driver Code
int main()
{

    // Creating the root
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    // Function call
    allTraversal(root);

    return 0;
}
