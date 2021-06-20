string is_palindrome(int n) {
	string number = to_string(n);
	int start = 0; 
	int end = number.size()-1;
    for(start =0; start < number.size()/2; start++) {
		if(number[start] != number[end])   
		        return "No";
		    end--;
	}
		return "Yes"; 
}