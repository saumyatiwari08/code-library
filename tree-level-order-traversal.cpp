vector<int> levelOrder(Node* node)
{
    vector<int>s;
    if(node == NULL)
        return s; 
    
    // Breadth first search algorithm
    queue<Node*> myQueue;
    myQueue.push(node);
    
    Node *current_node; 
    while(!myQueue.empty())
    {
        current_node = myQueue.front(); 
        s.push_back(current_node->data);
        myQueue.pop();
        
        if(current_node->left != NULL)
            myQueue.push(current_node->left);
        
        if(current_node->right != NULL)
            myQueue.push(current_node->right);
    }
}
