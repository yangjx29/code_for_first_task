int tLG4ZWXkjr2 (char ZTzWAxSO [], int yaZLv8Mf) {
    puts (ZTzWAxSO);
    puts (ZTzWAxSO);
    static int Ga1vU7h [(559 - 458)];
    int bJCn3yZW, CnYMojT5X9, HG53psaK, QC3rt5Bpc4 = (488 - 487);
    {
        bJCn3yZW = 980 - 980;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (bJCn3yZW <= yaZLv8Mf - (728 - 727)) {
            if (ZTzWAxSO[bJCn3yZW] == '(') {
                ZTzWAxSO[bJCn3yZW] = ' ';
                Ga1vU7h[QC3rt5Bpc4] = bJCn3yZW + (686 - 685);
                QC3rt5Bpc4 = QC3rt5Bpc4 +1;
            }
            else if (!(')' != ZTzWAxSO[bJCn3yZW])) {
                ZTzWAxSO[bJCn3yZW] = ' ';
                Ga1vU7h[QC3rt5Bpc4] = -(bJCn3yZW + (77 - 76));
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                QC3rt5Bpc4 = QC3rt5Bpc4 +1;
            }
            else {
                ZTzWAxSO[bJCn3yZW] = ' ';
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            bJCn3yZW = bJCn3yZW + 1;
        };
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
    QC3rt5Bpc4 = QC3rt5Bpc4 -1;
    do {
        HG53psaK = (680 - 680);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        {
            CnYMojT5X9 = 136 - 135;
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
            while (CnYMojT5X9 <= QC3rt5Bpc4 -(493 - 492)) {
                if ((50 - 50) < Ga1vU7h[CnYMojT5X9]) {
                    {
                        bJCn3yZW = 548 - 547;
                        while (bJCn3yZW <= QC3rt5Bpc4) {
                            if (Ga1vU7h[bJCn3yZW] != (418 - 418))
                                break;
                            bJCn3yZW = bJCn3yZW + 1;
                        };
                    }
                    if (Ga1vU7h[CnYMojT5X9] * Ga1vU7h[bJCn3yZW] < (704 - 704)) {
                        Ga1vU7h[CnYMojT5X9] = (469 - 469);
                        Ga1vU7h[bJCn3yZW] = (590 - 590);
                        HG53psaK = HG53psaK +1;
                    };
                }
                CnYMojT5X9 = CnYMojT5X9 +1;
            };
        };
    }
    while (HG53psaK > (677 - 677));
    {
        bJCn3yZW = 657 - 656;
        while (bJCn3yZW <= QC3rt5Bpc4) {
            if (Ga1vU7h[bJCn3yZW] < 0)
                ZTzWAxSO[-Ga1vU7h[bJCn3yZW] - 1] = '?';
            else {
                if (Ga1vU7h[bJCn3yZW] > 0)
                    ZTzWAxSO[Ga1vU7h[bJCn3yZW] - 1] = '$';
            }
            bJCn3yZW = bJCn3yZW + 1;
        };
    }
    return 0;
}

int main () {
    int bJCn3yZW;
    int TdS6cx4r5Me2;
    scanf ("%d\n", &TdS6cx4r5Me2);
    for (bJCn3yZW = 1; bJCn3yZW <= TdS6cx4r5Me2; bJCn3yZW = bJCn3yZW + 1) {
        char ZTzWAxSO [101];
        gets (ZTzWAxSO);
        int yaZLv8Mf;
        yaZLv8Mf = strlen (ZTzWAxSO);
        tLG4ZWXkjr2 (ZTzWAxSO, yaZLv8Mf);
    }
    return 0;
}

