vector<int>s;
void inorder(Node *root)
{
    if(root == NULL)
        return; 
    inorder(root->left);
    s.push_back(root->data);
    inorder(root->right);
}
// return the Kth largest element in the given BST rooted at 'root'
int kthLargest(Node *root, int K)
{
    inorder(root);
    return s[s.size()-K];
}