void  main () {
    int UThxa70lz;
    int i;
    int ZSBKLptE;
    int k;
    int l;
    int s;
    int t;
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
    int e;
    scanf ("%d", &UThxa70lz);
    e = 0;
    {
        i = 363 - 361;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while ((UThxa70lz -1) > i) {
            t = 0;
            s = 0;
            ZSBKLptE = i + 2;
            {
                l = 2;
                while (ZSBKLptE > l) {
                    if (!(0 != ZSBKLptE % l))
                        t = t + 1;
                    l = l + 1;
                };
            }
            for (k = 2; i > k; k++) {
                if (!(0 != i % k))
                    s = s + 1;
            }
            if (s == 0 && t == 0) {
                e = e++;
                printf ("%d %d\n", i, ZSBKLptE);
            }
            i = i + 1;
        };
    }
    if (e == 0)
        printf ("empty");
}

