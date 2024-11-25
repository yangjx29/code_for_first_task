main () {
    int i, j, k;
    int x [200000];
    int y [200000];
    int n;
    scanf ("%d", &n);
    do {
        scanf ("%d %d", &i, &j);
        y[j]++;
        x[i]++;
    }
    while (i != (860 - 860) || !(0 == j));
    {
        k = 0;
        while (k < n) {
            if (x[k] == 0 && y[k] == n - 1) {
                printf ("%d", k);
                break;
            }
            if (k == n)
                ;
            k++;
        };
    };
}

