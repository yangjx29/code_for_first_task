void  main () {
    int a [301];
    int p;
    int j;
    int n;
    int i;
    int x;
    p = 0;
    scanf ("%d", &n);
    {
        i = 1;
        while (n >= i) {
            scanf ("%d", &a[i]);
            i = i + 1;
        };
    }
    for (i = 1; n >= i; i = i + 1) {
        for (j = 1; i > j; j = j + 1)
            if (a[i] == a[j])
                break;
        if (j >= i) {
            if (p > 0)
                ;
            printf ("%d", a[i]);
            p = p + 1;
        };
    };
}

