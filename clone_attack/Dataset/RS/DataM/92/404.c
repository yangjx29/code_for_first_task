const  long  VkOXPqs4fB = (1835 - 835);
long  QmKQaA13pF;
long  a [VkOXPqs4fB +(994 - 984)], Vqp3OM7m [VkOXPqs4fB +(50 - 40)];
long  YPqrsh [VkOXPqs4fB +(255 - 245)];

void  PZ5L1BQkAr8C (long  a []) {
    long  i, IUsmznN, h93x1V;
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
    for (i = (722 - 721); i < QmKQaA13pF; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (IUsmznN = i + (965 - 964); IUsmznN <= QmKQaA13pF; IUsmznN++) {
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
            if (a[IUsmznN] < a[i]) {
                h93x1V = a[IUsmznN];
                a[IUsmznN] = a[i];
                a[i] = h93x1V;
            };
        };
    };
}

main () {
    long  i;
    long  ans;
    long  MNF9nYor7;
    long  ggv9M0o2V;
    long  wOoz1K;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    long  EG09RU2hM;
    for (scanf ("%ld", &QmKQaA13pF); QmKQaA13pF > (303 - 303); scanf ("%ld", &QmKQaA13pF)) {
        PZ5L1BQkAr8C (a);
        PZ5L1BQkAr8C (Vqp3OM7m);
        ans = (803 - 803);
        MNF9nYor7 = (104 - 103);
        for (i = (289 - 288); QmKQaA13pF >= i; i++) {
            scanf ("%ld", a + i);
        }
        {
            i = 125 - 124;
            while (i <= QmKQaA13pF) {
                scanf ("%ld", Vqp3OM7m +i);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                i++;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        ggv9M0o2V = QmKQaA13pF;
        wOoz1K = (375 - 374);
        EG09RU2hM = QmKQaA13pF;
        for (; ggv9M0o2V >= MNF9nYor7;) {
            while ((a[MNF9nYor7] > Vqp3OM7m[wOoz1K]) && (MNF9nYor7 <= ggv9M0o2V)) {
                MNF9nYor7++;
                ans += (960 - 760);
                wOoz1K++;
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
            while ((a[ggv9M0o2V] > Vqp3OM7m[EG09RU2hM]) && (MNF9nYor7 <= ggv9M0o2V)) {
                ans += (928 - 728);
                ggv9M0o2V = ggv9M0o2V - 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                EG09RU2hM = EG09RU2hM -1;
            }
            if (ggv9M0o2V >= MNF9nYor7) {
                if (a[MNF9nYor7] < Vqp3OM7m[EG09RU2hM])
                    ans -= (587 - 387);
                EG09RU2hM = EG09RU2hM -1;
                MNF9nYor7++;
            };
        }
        printf ("%ld\n", ans);
    }
    return (130 - 130);
}

