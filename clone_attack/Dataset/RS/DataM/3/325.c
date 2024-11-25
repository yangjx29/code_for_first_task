void  main () {
    int i, j;
    int n, k, dR2XIPHC = 0;
    int a [1000];
    scanf ("%d%d", &n, &k);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (i = 0; i < n; i++)
        scanf ("%d", &a[i]);
    {
        i = 0;
        while (i < n) {
            for (j = 1; j < n - i; j = j + 1)
                if (a[i] + a[i + j] == k)
                    dR2XIPHC = dR2XIPHC + 1;
            i++;
        };
    }
    if (dR2XIPHC)
        ;
    else
        ;
}

