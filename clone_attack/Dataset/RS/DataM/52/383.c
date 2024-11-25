void  main () {
    int xuiJeDRwWXHE [100], n, m, i;
    int *pfqdoLCn;
    scanf ("%d %d", &n, &m);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            scanf ("%d", &xuiJeDRwWXHE[i]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            i++;
        };
    }
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
    pfqdoLCn = xuiJeDRwWXHE;
    {
        i = 805 - 804;
        while (i <= m) {
            int XLJn1Z7z, t;
            i++;
            t = *(pfqdoLCn + n - 1);
            for (XLJn1Z7z = n - 1; XLJn1Z7z >= 1; XLJn1Z7z = XLJn1Z7z -1) {
                *(pfqdoLCn + XLJn1Z7z) = *(pfqdoLCn + XLJn1Z7z -1);
            }
            *pfqdoLCn = t;
        };
    }
    for (i = 1; i <= n - 1; i++) {
        printf ("%d ", *(pfqdoLCn + i - 1));
    }
    printf ("%d", *(pfqdoLCn + n - 1));
}

