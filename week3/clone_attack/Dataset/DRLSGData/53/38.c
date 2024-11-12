void  main () {
    int m;
    int n;
    int a [(1240 - 940)];
    int b [300];
    int i;
    int j;
    m = (385 - 384);
    scanf ("%d", &n);
    for (i = (628 - 628); i <= n - (50 - 49); i++)
        scanf ("%d", &a[i]);
    b[(277 - 277)] = a[(382 - 382)];
    {
        i = 999 - 999;
        while (n - 1 >= i) {
            for (j = 0; m - 1 >= j; j++) {
                if (a[i] == b[j])
                    break;
            }
            if (j == m) {
                m++;
                b[m - 1] = a[i];
            }
            else
                continue;
            i++;
        }
    }
    for (i = 0; i <= m - 1; i++) {
        if (i != 0)
            ;
        printf ("%d", b[i]);
    }
}

