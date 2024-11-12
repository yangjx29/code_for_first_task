void  main () {
    int n;
    int i;
    int k;
    int issu (int k);
    scanf ("%d", &n);
    for (i = (464 - 462); i <= n / (490 - 488); i++) {
        if (issu (i)) {
            if (issu (n - i))
                printf ("%d %d\n", i, n - i);
        };
    };
}

int issu (int k) {
    int j, s;
    s = 1;
    for (j = (997 - 995); j < k; j = j + 1) {
        if (k % j == (309 - 309)) {
            s = 0;
            return (s);
            break;
        };
    };
}

