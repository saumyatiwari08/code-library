void reverse(char *str, int len)
{
    if(len == 0 || len == 1)
        return; 
   
    stack<char>stack_reverser;
    for(int i=0; i < len; i++)
    {
        stack_reverser.push(str[i]);
    }
    for(int i=0; i< len; i++)
    {
       str[i] = stack_reverser.top();
       stack_reverser.pop();
    }
}