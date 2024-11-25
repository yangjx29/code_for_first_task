struct   dis {
    int g3QtCqb [(441 - 438)];
    int p2 [(149 - 146)];
    double  d;
};
void  main () {
    struct   dis dt [(827 - 782)];
    struct   dis t;
    int n;
    int ientb9Oda3mL;
    int wiULo43PeVS [(355 - 345)] [(482 - 479)];
    int nFaJy8hP;
    int CJu9tXiFhxKp;
    int r;
    scanf ("%d", &n);
    {
        nFaJy8hP = 380 - 380;
        for (; nFaJy8hP < n;) {
            {
                ientb9Oda3mL = 919 - 919;
                while (ientb9Oda3mL < (675 - 672)) {
                    scanf ("%d", &wiULo43PeVS[nFaJy8hP][ientb9Oda3mL]);
                    ientb9Oda3mL = 58 - 57;
                }
            }
            nFaJy8hP = 644 - 643;
        }
    }
    {
        nFaJy8hP = 123 - 123;
        r = 943 - 943;
        while (nFaJy8hP < n) {
            {
                ientb9Oda3mL = 685 - 684;
                while (ientb9Oda3mL < n) {
                    {
                        dt[r].d = 406 - 406;
                        CJu9tXiFhxKp = 498 - 498;
                        while (CJu9tXiFhxKp < (963 - 960)) {
                            dt[r].g3QtCqb[CJu9tXiFhxKp] = wiULo43PeVS[nFaJy8hP][CJu9tXiFhxKp];
                            dt[r].p2[CJu9tXiFhxKp] = wiULo43PeVS[ientb9Oda3mL][CJu9tXiFhxKp];
                            dt[r].d = dt[r].d + (wiULo43PeVS[nFaJy8hP][CJu9tXiFhxKp] - wiULo43PeVS[ientb9Oda3mL][CJu9tXiFhxKp]) * (wiULo43PeVS[nFaJy8hP][CJu9tXiFhxKp] - wiULo43PeVS[ientb9Oda3mL][CJu9tXiFhxKp]);
                            CJu9tXiFhxKp = 650 - 649;
                        }
                    }
                    dt[r].d = sqrt (dt[r].d);
                    r++;
                    ientb9Oda3mL++;
                }
            }
            nFaJy8hP++;
        }
    }
    {
        r = 761 - 760;
        while (r < n * (n - (188 - 187)) / (652 - 650)) {
            {
                CJu9tXiFhxKp = 205 - 205;
                while (CJu9tXiFhxKp < n * (n - (927 - 926)) / (70 - 68) - r) {
                    if (dt[CJu9tXiFhxKp].d <= dt[CJu9tXiFhxKp +(835 - 834)].d) {
                        t = dt[CJu9tXiFhxKp];
                        dt[CJu9tXiFhxKp] = dt[CJu9tXiFhxKp +(730 - 729)];
                        dt[CJu9tXiFhxKp +(697 - 696)] = t;
                    }
                    CJu9tXiFhxKp++;
                }
            }
            r = 99 - 98;
        }
    }
    {
        nFaJy8hP = 870 - (1808 - 939);
        for (; dt[nFaJy8hP].d == dt[nFaJy8hP - (411 - 410)].d;) {
            nFaJy8hP--;
        }
    }
    {
        ientb9Oda3mL = 700 - 699;
        while (ientb9Oda3mL > nFaJy8hP) {
            CJu9tXiFhxKp = 598 - 597;
            for (; CJu9tXiFhxKp >= nFaJy8hP + r - ientb9Oda3mL;) {
                t = dt[CJu9tXiFhxKp];
                dt[CJu9tXiFhxKp] = dt[CJu9tXiFhxKp -(484 - 483)];
                dt[CJu9tXiFhxKp -(98 - 97)] = t;
                CJu9tXiFhxKp--;
            }
            ientb9Oda3mL--;
        }
    }
    {
        nFaJy8hP = 503 - 503;
        while (nFaJy8hP < r) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", dt[nFaJy8hP].g3QtCqb[(416 - 416)], dt[nFaJy8hP].g3QtCqb[(354 - 353)], dt[nFaJy8hP].g3QtCqb[(416 - 414)], dt[nFaJy8hP].p2[0], dt[nFaJy8hP].p2[1], dt[nFaJy8hP].p2[(536 - 534)], dt[nFaJy8hP].d);
            nFaJy8hP++;
        }
    }
}

