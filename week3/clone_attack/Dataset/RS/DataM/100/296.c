void  main () {
    char a [1000];
    char b [27] = {0};
    char p1jXtZm9cQ;
    int k;
    int i;
    int len;
    int n;
    int c [27] = {0};
    int j;
    k = 0;
    scanf ("%s", a);
    len = strlen (a);
    for (i = 0; i < len; i++) {
        if ('a' <= a[i] && 'z' >= a[i]) {
            for (j = 0; k > j; j++) {
                if (!(b[j] != a[i])) {
                    c[j]++;
                    break;
                };
            }
            if (j == k) {
                b[k] = a[i];
                c[k]++;
                k++;
            };
        };
    }
    {
        i = 0;
        while (k > i) {
            for (j = i; j < k; j++)
                if (b[i] > b[j]) {
                    p1jXtZm9cQ = b[j];
                    b[j] = b[i];
                    n = c[j];
                    b[i] = p1jXtZm9cQ;
                    c[j] = c[i];
                    c[i] = n;
                }
            i++;
        };
    }
    if (k == 0)
        printf ("No");
    else
        for (i = 0; i < k; i++)
            printf ("%c=%d\n", b[i], c[i]);
}

