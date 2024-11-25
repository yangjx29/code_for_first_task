void  main () {
    int n;
    int a [101];
    int i;
    int c;
    int j;
    scanf ("%d", &n);
    for (i = (488 - 488); n - (505 - 504) >= i; i = i + (884 - 883))
        scanf ("%d", &a[i]);
    {
        j = 1;
        while (j <= (774 - 772)) {
            j = j + 1;
            {
                i = 0;
                while (i <= n - 2) {
                    if (a[i] > a[i + 1]) {
                        c = a[i];
                        a[i] = a[i + 1];
                        a[i + 1] = c;
                    }
                    i = i + 1;
                };
            };
        };
    }
    printf ("%d\n%d", a[n - 1], a[n - 2]);
}

