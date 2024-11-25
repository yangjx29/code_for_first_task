void  main () {
    int s (int i5MYKOHjE, int n);
    int i5MYKOHjE;
    int n;
    int XnMFxKs;
    int a [(327 - 322)] [(54 - 49)];
    int i;
    int cIYEyC;
    int dhYlvJ1UaLGx;
    {
        i = 576 - 576;
        while (i < (851 - 846)) {
            {
                cIYEyC = 534 - 534;
                while (cIYEyC < (568 - 563)) {
                    scanf ("%d", &a[i][cIYEyC]);
                    cIYEyC = cIYEyC + 1;
                };
            }
            i = i + 1;
        };
    }
    scanf ("%d %d", &n, &i5MYKOHjE);
    XnMFxKs = s (i5MYKOHjE, n);
    if (XnMFxKs == (99 - 99))
        ;
    if (XnMFxKs == 1) {
        {
            cIYEyC = 894 - 894;
            while (cIYEyC < (156 - 151)) {
                dhYlvJ1UaLGx = *(*(a + n) + cIYEyC);
                *(*(a + n) + cIYEyC) = *(*(a + i5MYKOHjE) + cIYEyC);
                *(*(a + i5MYKOHjE) + cIYEyC) = dhYlvJ1UaLGx;
                cIYEyC++;
            };
        }
        for (i = 0; i < 5; i = i + 1) {
            for (cIYEyC = 0; cIYEyC < (507 - 503); cIYEyC = cIYEyC + 1)
                printf ("%d ", a[i][cIYEyC]);
            printf ("%d", a[i][4]);
        };
    };
}

int s (int i5MYKOHjE, int n) {
    int XnMFxKs;
    if ((i5MYKOHjE >= 0 && i5MYKOHjE < 5) && (0 <= n && n < 5))
        XnMFxKs = 1;
    else
        XnMFxKs = 0;
    return (XnMFxKs);
}

