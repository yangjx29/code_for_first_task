int main () {
    int uJMhQcLGPN;
    uJMhQcLGPN = 0;
    char yWY7Hv [252], zan4dT1U [252];
    int la;
    la = strlen (yWY7Hv);
    int MvbqwCTYnVgk;
    MvbqwCTYnVgk = strlen (zan4dT1U);
    int BoCtmVa9QcrS;
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
    }
    BoCtmVa9QcrS = la - 1;
    int MwUDOKcGM;
    MwUDOKcGM = 0;
    cin >> yWY7Hv >> zan4dT1U;
    if (la < MvbqwCTYnVgk) {
        char KqPalUfheZ [252];
        int MwUDOKcGM = 0, Af1CquMXY7;
        Af1CquMXY7 = la;
        la = MvbqwCTYnVgk;
        MvbqwCTYnVgk = Af1CquMXY7;
        for (MwUDOKcGM = 0; !('\0' == yWY7Hv[MwUDOKcGM]); MwUDOKcGM = MwUDOKcGM +1)
            KqPalUfheZ[MwUDOKcGM] = yWY7Hv[MwUDOKcGM];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        KqPalUfheZ[MwUDOKcGM] = '\0';
        for (MwUDOKcGM = 0; !('\0' == zan4dT1U[MwUDOKcGM]); MwUDOKcGM = MwUDOKcGM +1) {
            yWY7Hv[MwUDOKcGM] = zan4dT1U[MwUDOKcGM];
        }
        yWY7Hv[MwUDOKcGM] = '\0';
        for (MwUDOKcGM = 0; KqPalUfheZ[MwUDOKcGM] != '\0'; MwUDOKcGM++) {
            zan4dT1U[MwUDOKcGM] = KqPalUfheZ[MwUDOKcGM];
        }
        zan4dT1U[MwUDOKcGM] = '\0';
    }
    for (j = MvbqwCTYnVgk -1; 0 <= j; j--) {
        yWY7Hv[BoCtmVa9QcrS] = yWY7Hv[BoCtmVa9QcrS] + zan4dT1U[j] - 48;
        if ('9' < yWY7Hv[BoCtmVa9QcrS] && BoCtmVa9QcrS != 0) {
            yWY7Hv[BoCtmVa9QcrS] = yWY7Hv[BoCtmVa9QcrS] - 10;
            yWY7Hv[BoCtmVa9QcrS -1]++;
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if ('9' < yWY7Hv[BoCtmVa9QcrS] && !(0 != BoCtmVa9QcrS)) {
            uJMhQcLGPN = 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            yWY7Hv[BoCtmVa9QcrS] = yWY7Hv[BoCtmVa9QcrS] - 10;
        }
        BoCtmVa9QcrS--;
    }
    for (int MwUDOKcGM = la - 1;
    MwUDOKcGM >= 0; MwUDOKcGM = MwUDOKcGM -1) {
        if (yWY7Hv[MwUDOKcGM] > '9' && MwUDOKcGM != 0) {
            yWY7Hv[MwUDOKcGM] = yWY7Hv[MwUDOKcGM] - 10;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            yWY7Hv[MwUDOKcGM -1]++;
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
        if (yWY7Hv[MwUDOKcGM] > '9' && MwUDOKcGM == 0) {
            uJMhQcLGPN = 1;
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
            yWY7Hv[MwUDOKcGM] = yWY7Hv[MwUDOKcGM] - 10;
        };
    }
    if (uJMhQcLGPN == 1)
        cout << 1;
    if (uJMhQcLGPN == 0) {
        MwUDOKcGM = 0;
        while (yWY7Hv[MwUDOKcGM] != '\0') {
            if (yWY7Hv[MwUDOKcGM] != '0')
                break;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            MwUDOKcGM = MwUDOKcGM +1;
        };
    }
    cout << yWY7Hv + MwUDOKcGM;
    if (atoi (yWY7Hv) == 0 && atoi (zan4dT1U) == 0)
        cout << 0;
    return 0;
}

