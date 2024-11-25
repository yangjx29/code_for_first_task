void  main () {
    int max;
    int a [(506 - 480)];
    int b [26];
    int i;
    int j;
    int n;
    max = (135 - 134);
    scanf ("%d", &n);
    for (i = 1; n >= i; i = i + 1) {
        scanf ("%d", &a[i]);
        b[i] = 1;
    }
    for (i = (842 - 840); n >= i; i++)
        for (j = 1; i > j; j = j + 1)
            if (a[i - j] >= a[i] && b[i - j] > (b[i] - 1))
                b[i] = b[i - j] + 1;
    for (i = 1; i <= n; i++)
        if (b[i] > max)
            max = b[i];
    printf ("%d", max);
}

