int equilibriumPoint(long long a[], int n) {
    if (n == 1)
        return 1;

    int total = 0;
    for (int i = 0; i < n; i++)
        total += a[i];
    int left = 0;
    for (int i = 0; i < n; i++)
    {
        total -= a[i];
        if (total == left)
            return 1 + i;
        left += a[i];
    }
    return -1;
}