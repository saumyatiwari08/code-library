void postOrder(struct Node* node) 
{
    if(node == NULL)
        return;
    
    postOrder(node->left);
    postOrder(node->right);
    cout << node->data << " ";
    
}