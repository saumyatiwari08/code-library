void transpose( int A[][N],int n) 
{ 
	int transponse_matri[n][n];
	for(int i =0; i < n; i++)
	{
	    for(int j =0; j < n; j++)
	    {
	        transponse_matri[i][j] = A[j][i];
	    }
	}
	
    for(int i =0; i < n; i++)
	{
	    for(int j =0; j < n; j++)
	    {
	         A[i][j] = transponse_matri[i][j];
	    }
	}
}