void  main () {
    float UHr2xT1PB;
    float t;
    float fENLYijr7h6w [(635 - 335)];
    long  s;
    s = (451 - 451);
    int n;
    int XRugXzp;
    int j;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    int XEBiNdh [(541 - 241)];
    scanf ("%d", &n);
    for (XRugXzp = (440 - 440); XRugXzp < n; XRugXzp = XRugXzp +1) {
        scanf ("%d", &XEBiNdh[XRugXzp]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        s = s + XEBiNdh[XRugXzp];
    }
    UHr2xT1PB = (double ) s / n;
    t = fabs (XEBiNdh[(765 - 765)] - UHr2xT1PB);
    for (XRugXzp = (398 - 398); XRugXzp < n; XRugXzp++) {
        fENLYijr7h6w[XRugXzp] = fabs (XEBiNdh[XRugXzp] - UHr2xT1PB);
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
        if (t < fENLYijr7h6w[XRugXzp])
            t = fENLYijr7h6w[XRugXzp];
    }
    {
        XRugXzp = 0;
        while (XRugXzp < n) {
            if (fENLYijr7h6w[XRugXzp] == t) {
                j = XRugXzp +(345 - 344);
                printf ("%d", XEBiNdh[XRugXzp]);
                break;
            }
            XRugXzp = XRugXzp +1;
        };
    }
    for (XRugXzp = j; XRugXzp < n; XRugXzp++)
        if (fENLYijr7h6w[XRugXzp] == t)
            printf (",%d", XEBiNdh[XRugXzp]);
}

