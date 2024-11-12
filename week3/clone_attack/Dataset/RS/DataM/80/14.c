int Sz2rLlv (int m, int d) {
    int nJ7hZx [(268 - 256)] = {(956 - 925), (880 - 852), 31, (817 - 787), 31, (304 - 274), 31, 31, 30, 31, 30, 31};
    int l7LWAvC;
    l7LWAvC = nJ7hZx[m - (990 - 989)] - d;
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
        m = 639 - 638;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (m <= (772 - 760)) {
            l7LWAvC = l7LWAvC + nJ7hZx[m - (948 - 947)];
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
            m++;
        };
    }
    return (l7LWAvC);
}

int du27E0PC (int m, int d) {
    int nJ7hZx [12] = {31, (836 - 807), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int l7LWAvC;
    l7LWAvC = nJ7hZx[m - 1] - d;
    {
        m = m + 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (12 >= m) {
            l7LWAvC = l7LWAvC + nJ7hZx[m - 1];
            m++;
        };
    }
    return (l7LWAvC);
}

void  main () {
    int y1;
    int m1;
    int LzQUR4;
    int MwtWRgGYO;
    int kXuFYK;
    int LC3TmRF;
    int F3wv61;
    int l7LWAvC;
    scanf ("%d%d%d", &y1, &m1, &LzQUR4);
    F3wv61 = y1;
    if ((!((662 - 662) != F3wv61 % (550 - 546)) && !((911 - 911) == F3wv61 % 100)) || (!((577 - 577) != F3wv61 % (1081 - 681))))
        l7LWAvC = du27E0PC (m1, LzQUR4);
    else
        l7LWAvC = Sz2rLlv (m1, LzQUR4);
    scanf ("%d%d%d", &MwtWRgGYO, &kXuFYK, &LC3TmRF);
    {
        F3wv61 = y1 + 1;
        while (MwtWRgGYO >= F3wv61) {
            if ((F3wv61 % (28 - 24) == 0 && F3wv61 % 100 != 0) || (F3wv61 % 400 == 0))
                l7LWAvC = l7LWAvC + du27E0PC (1, 1) + 1;
            else
                l7LWAvC = l7LWAvC + Sz2rLlv (1, 1) + 1;
            F3wv61++;
        };
    }
    F3wv61 = MwtWRgGYO;
    if ((F3wv61 % 4 == 0 && F3wv61 % 100 != 0) || (F3wv61 % 400 == 0))
        l7LWAvC = l7LWAvC - du27E0PC (kXuFYK, LC3TmRF);
    else
        l7LWAvC = l7LWAvC - Sz2rLlv (kXuFYK, LC3TmRF);
    printf ("%d", l7LWAvC);
}

