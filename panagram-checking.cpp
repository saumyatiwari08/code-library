/*
    If a string is panagram, return true, false otherwise;

    A word is panagram if it contains at least once all the letters of the english 
    alphabet.
*/

bool isPanagram(string str){
    if(str.size() < 26)
        return false; 
    
    // hash table to mark the present character
    vector<bool>mark(26, false);
    int index;
    for(int i =0; i < str.size(); i++)
    {
        if('A' <= str[i] && str[i] <= 'Z')
            index = str[i] - 'A';
        
        else if('a' <= str[i] && str[i] <= 'z')
            index = str[i] - 'a';
        
        else
            continue;
        
        mark[index] = true;
    }
    
    
    for(int i =0; i <= 25; i++)
    {
        
        if(mark[i] == false)
            return false;
    }
   
    return true;
}