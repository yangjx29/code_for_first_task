main () {
    int i;
    int j;
    int n;
    unsigned  int a [301], x;
    char c;
    n = 1;
    do {
        scanf ("%d", &a[n]);
        n++;
        c = getchar ();
    }
    while (c != '\n');
    n = n - 1;
    if (n == 1)
        ;
    else {
        for (i = 1; i <= n - 1; i++) {
            for (j = 1; n - i >= j; j++) {
                if (a[j + 1] <= a[j]) {
                    x = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = x;
                };
            };
        }
        i = n;
        while (i >= 2) {
            if (a[i] > a[i - 1]) {
                printf ("%u", a[i - 1]);
                break;
            }
            i--;
        }
        if (i == 1)
            ;
    }
    return 0;
}

