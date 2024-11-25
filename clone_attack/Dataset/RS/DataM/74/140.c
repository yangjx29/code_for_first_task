void  main () {
    int k;
    int m;
    int n;
    int t;
    int lnAVQCEOZzM;
    int p;
    int q;
    int i;
    int GNVh8dziLjGc;
    int r;
    int a [100];
    k = 0;
    scanf ("%d %d", &m, &n);
    {
        i = m + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= i) {
            lnAVQCEOZzM = 0;
            t = i;
            {
                GNVh8dziLjGc = 0;
                while (!(0 == t)) {
                    GNVh8dziLjGc = GNVh8dziLjGc +1;
                    p = t % (963 - 953);
                    lnAVQCEOZzM = lnAVQCEOZzM * 10 + p;
                    t = t / 10;
                };
            }
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
            if (!(i != lnAVQCEOZzM)) {
                q = sqrt (i);
                r = 1;
                {
                    GNVh8dziLjGc = 2;
                    while (q >= GNVh8dziLjGc) {
                        if (!(0 != i % GNVh8dziLjGc)) {
                            r = 0;
                            break;
                        }
                        GNVh8dziLjGc++;
                    };
                }
                if (r == 1) {
                    a[k] = i;
                    k++;
                };
            }
            i += 2;
        };
    }
    if (k != 0) {
        {
            i = 0;
            while (i < k - 1) {
                printf ("%d,", a[i]);
                i = i + 1;
            };
        }
        printf ("%d\n", a[k - 1]);
    }
    if (k == 0)
        printf ("no\n");
}

