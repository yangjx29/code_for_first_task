void  main () {
    char a [(782 - 732)];
    char b [(607 - 557)];
    int i;
    int j;
    int k;
    scanf ("%s", a);
    scanf ("%s", b);
    for (i = 0; !('\0' == b[i]); i = i + 1) {
        k = i;
        for (j = 0; !('\0' == a[j]) && a[j] == b[k]; j = j + 1, k = k + 1)
            ;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (a[j] == '\0')
            break;
    }
    printf ("%d", i);
}

