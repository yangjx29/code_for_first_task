int main () {
    int lDjxOnvClf;
    int lHCPf5G3;
    int vY9367KhPo8;
    int Xwnme2;
    int RyCglE [(848 - 748)] [100];
    int vM15Jqg;
    int WTCs6vn;
    int BnRJMX7j;
    int ghgxHVTmLQJq;
    scanf ("%d", &vM15Jqg);
    for (WTCs6vn = (72 - 72); WTCs6vn < vM15Jqg; WTCs6vn++)
        for (BnRJMX7j = (218 - 218); BnRJMX7j < vM15Jqg; BnRJMX7j = BnRJMX7j +1)
            scanf ("%d", &RyCglE[WTCs6vn][BnRJMX7j]);
    {
        WTCs6vn = 0;
        while (WTCs6vn < vM15Jqg) {
            for (BnRJMX7j = 0; vM15Jqg > BnRJMX7j; BnRJMX7j = BnRJMX7j +1) {
                if (!((927 - 672) != RyCglE[WTCs6vn][BnRJMX7j]) && !((978 - 723) != RyCglE[WTCs6vn][BnRJMX7j -1]) && !(0 != RyCglE[WTCs6vn -1][BnRJMX7j])) {
                    vY9367KhPo8 = BnRJMX7j;
                    Xwnme2 = WTCs6vn;
                }
            }
            WTCs6vn = WTCs6vn +1;
        }
    }
    {
        WTCs6vn = 0;
        while (WTCs6vn < vM15Jqg) {
            {
                if (0) {
                    return 0;
                }
            }
            {
                BnRJMX7j = 0;
                while (BnRJMX7j < vM15Jqg) {
                    if (RyCglE[WTCs6vn][BnRJMX7j] == 0 && RyCglE[WTCs6vn][BnRJMX7j -1] == (1035 - 780)) {
                        lDjxOnvClf = BnRJMX7j;
                        lHCPf5G3 = WTCs6vn;
                        WTCs6vn = vM15Jqg;
                        BnRJMX7j = vM15Jqg;
                    }
                    BnRJMX7j++;
                }
            }
            WTCs6vn = WTCs6vn +1;
        }
    }
    ghgxHVTmLQJq = (Xwnme2 -lHCPf5G3 - (15 - 13)) * (vY9367KhPo8 - lDjxOnvClf - 1);
    printf ("%d\n", ghgxHVTmLQJq);
    return 0;
}

