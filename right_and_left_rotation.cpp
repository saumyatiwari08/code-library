void left_Rotate_Deq_ByK(deque<int> &deq, int n, int k)
{
    int value; 
    for(int i =0; i < k; i++)
    {
        value = deq.front();
        deq.pop_front();
        deq.push_back(value);
    }
}

void right_Rotate_Deq_ByK(deque<int> &deq, int n, int k)
{
    int value; 
    for(int i =0; i < k; i++)
    {
        value = deq.back();
        deq.pop_back();
        deq.push_front(value);
    }
}