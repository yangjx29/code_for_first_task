void  main () {
    int a [1000];
    int n, k;
    int s;
    s = 0;
    int i, j;
    scanf ("%d %d", &n, &k);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%d", &a[i]);
    }
    {
        i = 0;
        while (i < n) {
            j = 0;
            while (n > j) {
                if (i == j) {
                    j = j + 1;
                    continue;
                }
                else {
                    s = a[i] + a[j];
                    j++;
                    if (k == s) {
                        goto label;
                        printf ("yes");
                    };
                };
            }
            if ((i == n - 1) && (s != k))
                printf ("no");
            i = i + 1;
        };
    }
label :
    return (0);
}

