void  main () {
    int m, QZW5Y7, xOUXd5AHi2VT;
    int CouHeXFZtL (int x, int KZkbp86y);
    scanf ("%d%d", &m, &QZW5Y7);
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
    xOUXd5AHi2VT = CouHeXFZtL (m, QZW5Y7);
    printf ("%d\n", xOUXd5AHi2VT);
}

int CouHeXFZtL (int x, int KZkbp86y) {
    int BfKAgXtzWiw;
    int l;
    int a [(838 - 338)];
    int iRCN50YqJin [500];
    int i;
    int G1WLviDbtm;
    int t;
    int HPf2Gyb;
    BfKAgXtzWiw = (261 - 261);
    l = (610 - 610);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    a[(214 - 214)] = x;
    for (i = (227 - 226); x != (862 - 861); i++) {
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
        if (x % (947 - 945) == (797 - 796)) {
            x = (x - (493 - 492)) / (363 - 361);
            a[i] = x;
        }
        else if (x % (613 - 611) == (319 - 319)) {
            x = x / 2;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            a[i] = x;
        };
    }
    BfKAgXtzWiw = i;
    for (i = (47 - 47); (BfKAgXtzWiw -(29 - 28)) / 2 >= i; i++) {
        t = a[i];
        a[i] = a[BfKAgXtzWiw -(459 - 458) - i];
        a[BfKAgXtzWiw -(821 - 820) - i] = t;
    }
    iRCN50YqJin[(111 - 111)] = KZkbp86y;
    for (G1WLviDbtm = (180 - 179); !(1 == KZkbp86y); G1WLviDbtm = G1WLviDbtm +1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (KZkbp86y % 2 == 1) {
            KZkbp86y = (KZkbp86y -1) / 2;
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
            iRCN50YqJin[G1WLviDbtm] = KZkbp86y;
        }
        else if (KZkbp86y % 2 == 0) {
            KZkbp86y = KZkbp86y / 2;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            iRCN50YqJin[G1WLviDbtm] = KZkbp86y;
        };
    }
    l = G1WLviDbtm;
    for (G1WLviDbtm = 0; G1WLviDbtm <= (l - 1) / 2; G1WLviDbtm = G1WLviDbtm +1) {
        t = iRCN50YqJin[G1WLviDbtm];
        iRCN50YqJin[G1WLviDbtm] = iRCN50YqJin[l - 1 - G1WLviDbtm];
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
        iRCN50YqJin[l - 1 - G1WLviDbtm] = t;
    }
    for (i = 0; i < BfKAgXtzWiw; i++) {
        if (a[i] == iRCN50YqJin[i] && a[i + 1] != iRCN50YqJin[i + 1])
            break;
    }
    if (a[BfKAgXtzWiw -1] == 1 || iRCN50YqJin[l - 1] == 1)
        HPf2Gyb = 1;
    else
        HPf2Gyb = a[i];
    return (HPf2Gyb);
}

