void  main () {
    char a [(302 - 47)];
    char b [(467 - 212)];
    int x [(1071 - 816)];
    int y [255];
    int sum [255];
    int dL8JBV2fRnD6;
    int j;
    int m;
    int vWZwcGF;
    int p;
    gets (a);
    gets (b);
    memset (x, (604 - 604), sizeof (x));
    memset (y, (296 - 296), sizeof (y));
    memset (sum, (939 - 939), sizeof (sum));
    m = strlen (a);
    {
        dL8JBV2fRnD6 = m - 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        j = 0;
        while (0 <= dL8JBV2fRnD6) {
            x[j] = a[dL8JBV2fRnD6] - '0';
            dL8JBV2fRnD6 = dL8JBV2fRnD6 - 1;
            j = j + 1;
        };
    }
    vWZwcGF = strlen (b);
    {
        j = 0;
        dL8JBV2fRnD6 = vWZwcGF - 1;
        while (dL8JBV2fRnD6 >= 0) {
            y[j] = b[dL8JBV2fRnD6] - '0';
            j = j + 1;
            dL8JBV2fRnD6--;
        };
    }
    p = vWZwcGF < m ? m : vWZwcGF;
    {
        dL8JBV2fRnD6 = 0;
        while (p > dL8JBV2fRnD6) {
            sum[dL8JBV2fRnD6] = sum[dL8JBV2fRnD6] + x[dL8JBV2fRnD6] + y[dL8JBV2fRnD6];
            if (sum[dL8JBV2fRnD6] >= (668 - 658)) {
                sum[dL8JBV2fRnD6] = sum[dL8JBV2fRnD6] - 10;
                sum[dL8JBV2fRnD6 + 1]++;
            }
            dL8JBV2fRnD6 = dL8JBV2fRnD6 + 1;
        };
    }
    while (sum[p] == 0)
        p--;
    if (p < 0)
        printf ("0");
    else {
        dL8JBV2fRnD6 = p;
        while (dL8JBV2fRnD6 >= 0) {
            printf ("%d", sum[dL8JBV2fRnD6]);
            dL8JBV2fRnD6--;
        };
    };
}

