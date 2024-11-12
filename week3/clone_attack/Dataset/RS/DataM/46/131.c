int main () {
    int ezdisp1FcYHE;
    int col;
    int xxrow;
    int iVW5KY0swT;
    int bch9efEn8;
    int Zi54lk;
    int i;
    int JLsRMG8;
    int s24tP7en [(284 - 184)] [(208 - 108)];
    bch9efEn8 = 0;
    scanf ("%d%d", &ezdisp1FcYHE, &col);
    {
        i = 752 - 752;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < ezdisp1FcYHE) {
            {
                JLsRMG8 = 961 - 961;
                while (JLsRMG8 < col) {
                    scanf ("%d", &s24tP7en[i][JLsRMG8]);
                    JLsRMG8 = JLsRMG8 +1;
                };
            }
            i++;
        };
    }
    JLsRMG8 = (475 - 475);
    i = (890 - 890);
    xxrow = (375 - 375);
    iVW5KY0swT = ezdisp1FcYHE - (138 - 137);
    Zi54lk = col - 1;
    while (iVW5KY0swT > xxrow && Zi54lk > bch9efEn8) {
        {
            JLsRMG8 = bch9efEn8;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (JLsRMG8 < Zi54lk) {
                printf ("%d\n", s24tP7en[xxrow][JLsRMG8]);
                JLsRMG8++;
            };
        }
        for (i = xxrow; i < iVW5KY0swT; i++)
            printf ("%d\n", s24tP7en[i][Zi54lk]);
        {
            JLsRMG8 = Zi54lk;
            while (xxrow < JLsRMG8) {
                printf ("%d\n", s24tP7en[iVW5KY0swT][JLsRMG8]);
                JLsRMG8 = JLsRMG8 -1;
            };
        }
        {
            i = iVW5KY0swT;
            while (xxrow < i) {
                printf ("%d\n", s24tP7en[i][bch9efEn8]);
                i--;
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
        iVW5KY0swT = iVW5KY0swT - 1;
        xxrow++;
        bch9efEn8++;
        Zi54lk = Zi54lk -1;
    }
    if (!(iVW5KY0swT != xxrow) || !(Zi54lk != bch9efEn8)) {
        if (xxrow == iVW5KY0swT && bch9efEn8 != Zi54lk) {
            JLsRMG8 = bch9efEn8;
            while (JLsRMG8 <= Zi54lk) {
                printf ("%d\n", s24tP7en[xxrow][JLsRMG8]);
                JLsRMG8++;
            };
        }
        if (xxrow != iVW5KY0swT && bch9efEn8 == Zi54lk) {
            i = xxrow;
            while (i <= iVW5KY0swT) {
                printf ("%d\n", s24tP7en[i][bch9efEn8]);
                i++;
            };
        }
        if (xxrow == iVW5KY0swT && bch9efEn8 == Zi54lk)
            printf ("%d\n", s24tP7en[xxrow][bch9efEn8]);
    }
    return 0;
}

