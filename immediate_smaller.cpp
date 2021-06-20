int immediateSmaller(int arr[], int n, int x)
{
    sort(arr, arr + n);
    int last = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= x)
            return last;
        if (arr[i] < x)
            last = arr[i];
    }
    return last;
}