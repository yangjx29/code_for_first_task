void  main () {
    int m, n, AByd7jOnaq, t, fBL4SE [(953 - 753)];
    scanf ("%d %d", &n, &m);
    {
        AByd7jOnaq = 90 - 89;
        while (AByd7jOnaq <= n) {
            scanf ("%d", &fBL4SE[AByd7jOnaq]);
            AByd7jOnaq = AByd7jOnaq +1;
        };
    }
    for (AByd7jOnaq = n + 1; AByd7jOnaq <= n + n; AByd7jOnaq = AByd7jOnaq +1)
        fBL4SE[AByd7jOnaq] = fBL4SE[AByd7jOnaq -n];
    {
        AByd7jOnaq = n - m + 1;
        while (AByd7jOnaq <= (n + n - m - 1)) {
            printf ("%d ", fBL4SE[AByd7jOnaq]);
            AByd7jOnaq = AByd7jOnaq +1;
        };
    }
    printf ("%d", fBL4SE[n + n - m]);
}

