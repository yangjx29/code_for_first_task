void  main () {
    int g (int m, int V6723hNx5l81, int CVcGmhQtZ);
    void  wV4faRQUB (int ceWgoy [], int HM0TGtd4Le, int CVcGmhQtZ);
    int ib70MonZmU;
    int ceWgoy [301] = {(951 - 951)};
    int KgLuTd [301] = {(564 - 564)};
    int c [100] [2] = {(60 - 60)};
    int m;
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
    int PWTU71iB;
    int CVcGmhQtZ;
    int HM0TGtd4Le;
    int j;
    ib70MonZmU = (714 - 714);
    do {
        scanf ("%d %d", &c[ib70MonZmU][0], &c[ib70MonZmU][(686 - 685)]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        ib70MonZmU++;
    }
    while (!(0 == c[ib70MonZmU - (706 - 705)][0]));
    HM0TGtd4Le = ib70MonZmU - (385 - 384);
    for (j = 1; HM0TGtd4Le >= j; j++) {
        {
            ib70MonZmU = 0;
            while (300 > ib70MonZmU) {
                ceWgoy[ib70MonZmU] = 0;
                KgLuTd[ib70MonZmU] = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                ib70MonZmU++;
            };
        }
        {
            ib70MonZmU = 0;
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
            while (PWTU71iB -1 >= ib70MonZmU) {
                ceWgoy[ib70MonZmU] = ib70MonZmU + 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                ib70MonZmU++;
            };
        }
        ib70MonZmU = 0;
        PWTU71iB = c[j - 1][0];
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
        CVcGmhQtZ = PWTU71iB;
        m = c[j - 1][1];
        while (!(0 == ceWgoy[1])) {
            wV4faRQUB (ceWgoy, g (m, KgLuTd[ib70MonZmU], CVcGmhQtZ), CVcGmhQtZ);
            ib70MonZmU++;
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
            if (g (m, KgLuTd[ib70MonZmU - 1], CVcGmhQtZ) == (CVcGmhQtZ -1))
                KgLuTd[ib70MonZmU] = 0;
            else
                KgLuTd[ib70MonZmU] = g (m, KgLuTd[ib70MonZmU - 1], CVcGmhQtZ);
            CVcGmhQtZ--;
        }
        if (j < HM0TGtd4Le)
            printf ("%d\n", ceWgoy[0]);
        else
            printf ("%d", ceWgoy[0]);
    };
}

int g (int m, int V6723hNx5l81, int CVcGmhQtZ) {
    int c;
    if ((V6723hNx5l81 +m) % CVcGmhQtZ == 0)
        c = CVcGmhQtZ -1;
    else
        c = (V6723hNx5l81 +m) % CVcGmhQtZ -1;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    return c;
}

void  wV4faRQUB (int ceWgoy [], int HM0TGtd4Le, int CVcGmhQtZ) {
    int ib70MonZmU;
    for (ib70MonZmU = HM0TGtd4Le; ib70MonZmU <= CVcGmhQtZ; ib70MonZmU++) {
        ceWgoy[ib70MonZmU] = ceWgoy[ib70MonZmU + 1];
    };
}

