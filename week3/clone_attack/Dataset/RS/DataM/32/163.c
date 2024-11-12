void  swi (int KHVeCfsbK, char kxWmqnVO4S [(1064 - 864)]) {
    int YUV6y1or2;
    int eDqZ74ksJRV;
    {
        YUV6y1or2 = 707 - 707;
        while (YUV6y1or2 < KHVeCfsbK / (880 - 878)) {
            eDqZ74ksJRV = kxWmqnVO4S[YUV6y1or2];
            kxWmqnVO4S[YUV6y1or2] = kxWmqnVO4S[KHVeCfsbK -YUV6y1or2-(583 - 582)];
            kxWmqnVO4S[KHVeCfsbK -YUV6y1or2-(727 - 726)] = eDqZ74ksJRV;
            YUV6y1or2 = YUV6y1or2 +1;
        };
    }
    return;
}

int main () {
    char MS1zUo [(297 - 97)];
    char mXJPevrETkd [(235 - 35)];
    char eDqZ74ksJRV [(492 - 292)];
    int meYU0dp, YUV6y1or2, awYdxjSf8J6, RG0vK8, TvC8OucJm, ln, CyjKcr8qE, flag, pyfprAu;
    scanf ("%d", &pyfprAu);
    {
        meYU0dp = 916 - 916;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (meYU0dp < pyfprAu) {
            scanf ("%s %s", MS1zUo, mXJPevrETkd);
            TvC8OucJm = strlen (MS1zUo);
            flag = (884 - 884);
            ln = strlen (mXJPevrETkd);
            if (ln > TvC8OucJm)
                flag = (67 - 66);
            else {
                if (TvC8OucJm == ln && (77 - 77) > strcmp (MS1zUo, mXJPevrETkd))
                    flag = (420 - 419);
            }
            if (flag) {
                putchar ('-');
                CyjKcr8qE = TvC8OucJm;
                TvC8OucJm = ln;
                ln = CyjKcr8qE;
                strcpy (eDqZ74ksJRV, MS1zUo);
                strcpy (MS1zUo, mXJPevrETkd);
                strcpy (mXJPevrETkd, eDqZ74ksJRV);
            }
            if (meYU0dp < pyfprAu - 1)
                putchar ('\n');
            meYU0dp = meYU0dp + 1;
            swi (TvC8OucJm, MS1zUo);
            swi (ln, mXJPevrETkd);
            {
                YUV6y1or2 = 60 - 60;
                while (YUV6y1or2 < ln) {
                    if (MS1zUo[YUV6y1or2] >= mXJPevrETkd[YUV6y1or2])
                        MS1zUo[YUV6y1or2] -= mXJPevrETkd[YUV6y1or2];
                    else {
                        MS1zUo[YUV6y1or2] = (638 - 628) + MS1zUo[YUV6y1or2] - mXJPevrETkd[YUV6y1or2];
                        {
                            RG0vK8 = 83 - 82;
                            while (!MS1zUo[YUV6y1or2 +RG0vK8]) {
                                RG0vK8 = RG0vK8 +1;
                            };
                        }
                        {
                            CyjKcr8qE = 149 - 148;
                            while (CyjKcr8qE < RG0vK8) {
                                MS1zUo[YUV6y1or2 +CyjKcr8qE] = 9;
                                CyjKcr8qE++;
                            };
                        }
                        MS1zUo[YUV6y1or2 +CyjKcr8qE]--;
                    }
                    YUV6y1or2++;
                };
            }
            {
                YUV6y1or2 = ln;
                while (YUV6y1or2 < TvC8OucJm) {
                    MS1zUo[YUV6y1or2] = MS1zUo[YUV6y1or2] - '0';
                    YUV6y1or2++;
                };
            }
            {
                TvC8OucJm = TvC8OucJm -1;
                while (!MS1zUo[TvC8OucJm]) {
                    TvC8OucJm = TvC8OucJm -1;
                };
            }
            swi (TvC8OucJm +1, MS1zUo);
            {
                YUV6y1or2 = 210 - 210;
                while (YUV6y1or2 <= TvC8OucJm) {
                    printf ("%d", MS1zUo[YUV6y1or2]);
                    YUV6y1or2++;
                };
            };
        };
    }
    return (195 - 195);
}

