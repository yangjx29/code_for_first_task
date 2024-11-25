main () {
    int mwae4t1 (int a, int eayAuPtGxWr9);
    int a, eayAuPtGxWr9, m8wayXTE, QyEkWjSLgzl, Lzsqrk9Du = 0;
    char WN3mrHoA [999];
    scanf ("%d %s %d", &a, WN3mrHoA, &eayAuPtGxWr9);
    QyEkWjSLgzl = strlen (WN3mrHoA);
    {
        m8wayXTE = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (QyEkWjSLgzl > m8wayXTE) {
            if (WN3mrHoA[m8wayXTE] >= 97 && WN3mrHoA[m8wayXTE] <= 122)
                WN3mrHoA[m8wayXTE] = WN3mrHoA[m8wayXTE] - 87;
            else {
                if (WN3mrHoA[m8wayXTE] >= 65 && WN3mrHoA[m8wayXTE] <= 90)
                    WN3mrHoA[m8wayXTE] = WN3mrHoA[m8wayXTE] - 55;
            }
            if (WN3mrHoA[m8wayXTE] >= 48 && (553 - 496) >= WN3mrHoA[m8wayXTE])
                WN3mrHoA[m8wayXTE] -= 48;
            m8wayXTE++;
        };
    }
    for (m8wayXTE = 0; m8wayXTE < QyEkWjSLgzl; m8wayXTE++)
        Lzsqrk9Du += WN3mrHoA[m8wayXTE] * mwae4t1 (a, QyEkWjSLgzl -m8wayXTE - 1);
    for (m8wayXTE = 0;; m8wayXTE++) {
        WN3mrHoA[m8wayXTE] = Lzsqrk9Du % eayAuPtGxWr9;
        Lzsqrk9Du = (Lzsqrk9Du -WN3mrHoA[m8wayXTE]) / eayAuPtGxWr9;
        if (WN3mrHoA[m8wayXTE] > 9)
            WN3mrHoA[m8wayXTE] = WN3mrHoA[m8wayXTE] + 55;
        if (Lzsqrk9Du == 0)
            break;
    }
    for (m8wayXTE = m8wayXTE; m8wayXTE >= 0; m8wayXTE--) {
        if (WN3mrHoA[m8wayXTE] > 9)
            printf ("%c", WN3mrHoA[m8wayXTE]);
        else
            printf ("%d", WN3mrHoA[m8wayXTE]);
    };
}

int mwae4t1 (int a, int eayAuPtGxWr9) {
    int QyEkWjSLgzl;
    int m8wayXTE;
    QyEkWjSLgzl = 1;
    for (m8wayXTE = 0; m8wayXTE < eayAuPtGxWr9; m8wayXTE++)
        QyEkWjSLgzl *= a;
    return QyEkWjSLgzl;
}

