int main () {
    int meet [100000];
    int i, j, n, a, b;
    scanf ("%d", &n);
    memset (meet, 0, n * sizeof (int));
    {
        while (a + b) {
            meet[b]++;
        };
    }
    for (i = 0; i < n; i++)
        if (!(n - 1 != meet[i]))
            break;
    if (i == n)
        ;
    else
        printf ("%d\n", i);
    return 0;
}

