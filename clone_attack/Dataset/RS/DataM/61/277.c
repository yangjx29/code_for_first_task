int jivcQ3 (int n) {
    int qKR4Yq;
    if (n == (521 - 520))
        qKR4Yq = (752 - 751);
    else if (n == 2)
        qKR4Yq = 1;
    else
        qKR4Yq = jivcQ3 (n - 1) + jivcQ3 (n - 2);
    return qKR4Yq;
}

void  main () {
    int a [(561 - 461)];
    int n;
    int i;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    scanf ("%d", &n);
    {
        i = 534 - 534;
        while (i < n) {
            scanf ("%d", &a[i]);
            i = i + 1;
        };
    }
    {
        i = 77 - 77;
        while (i < n) {
            printf ("%d\n", jivcQ3 (a[i]));
            i++;
        };
    };
}

