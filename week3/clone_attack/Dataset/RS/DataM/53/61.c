void  main () {
    int a [100], YfVFwY4D, i, D6u3fLP0EMRK, m;
    scanf ("%d", &YfVFwY4D);
    for (i = 0; i < YfVFwY4D; i++)
        scanf ("%d", &a[i]);
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
        while (i < YfVFwY4D) {
            {
                D6u3fLP0EMRK = i + 1;
                while (D6u3fLP0EMRK < YfVFwY4D) {
                    if (a[D6u3fLP0EMRK] == a[i]) {
                        {
                            m = D6u3fLP0EMRK;
                            while (m < YfVFwY4D) {
                                a[m] = a[m + 1];
                                m++;
                            };
                        }
                        YfVFwY4D--;
                        D6u3fLP0EMRK--;
                    }
                    D6u3fLP0EMRK++;
                };
            }
            i++;
        };
    }
    for (i = 0; i < YfVFwY4D -1; i++)
        printf ("%d,", a[i]);
    printf ("%d", a[YfVFwY4D -1]);
}

