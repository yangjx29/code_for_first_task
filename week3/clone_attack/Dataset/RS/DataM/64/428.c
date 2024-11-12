int main () {
    double  bXML8NO1zDuy [150] [150];
    int uIQ5DiFr;
    double  HTStPUoe6XA [150];
    double  jUpfR0d2 [150];
    double  U2MSrntqcO [150];
    int p0QJMAF9;
    int UYvgmc;
    int Pyi6L7s8ekG0;
    double  XCzVYU2;
    double  s6H7L4 [(10182 - 182)];
    int BCTbsMFkyD;
    double  dqCf6kvT;
    int Fo3YXdP4y;
    Fo3YXdP4y = 2;
    double  Joui6MnjJ [10000];
    Pyi6L7s8ekG0 = 1;
    scanf ("%d", &uIQ5DiFr);
    {
        p0QJMAF9 = 650 - 649;
        while (uIQ5DiFr >= p0QJMAF9) {
            scanf ("%lf", &HTStPUoe6XA[p0QJMAF9]);
            scanf ("%lf", &jUpfR0d2[p0QJMAF9]);
            scanf ("%lf", &U2MSrntqcO[p0QJMAF9]);
            p0QJMAF9 = p0QJMAF9 + 1;
        };
    }
    {
        p0QJMAF9 = 1;
        while (p0QJMAF9 < uIQ5DiFr) {
            {
                UYvgmc = p0QJMAF9 + 1;
                while (uIQ5DiFr >= UYvgmc) {
                    XCzVYU2 = (HTStPUoe6XA[p0QJMAF9] - HTStPUoe6XA[UYvgmc]) * (HTStPUoe6XA[p0QJMAF9] - HTStPUoe6XA[UYvgmc]) + (jUpfR0d2[p0QJMAF9] - jUpfR0d2[UYvgmc]) * (jUpfR0d2[p0QJMAF9] - jUpfR0d2[UYvgmc]) + (U2MSrntqcO[p0QJMAF9] - U2MSrntqcO[UYvgmc]) * (U2MSrntqcO[p0QJMAF9] - U2MSrntqcO[UYvgmc]);
                    bXML8NO1zDuy[p0QJMAF9][UYvgmc] = sqrt (XCzVYU2);
                    s6H7L4[Pyi6L7s8ekG0] = bXML8NO1zDuy[p0QJMAF9][UYvgmc];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    UYvgmc = UYvgmc +1;
                    Pyi6L7s8ekG0 = Pyi6L7s8ekG0 +1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            p0QJMAF9 = p0QJMAF9 + 1;
        };
    }
    Pyi6L7s8ekG0--;
    {
        BCTbsMFkyD = 1;
        while (Pyi6L7s8ekG0 > BCTbsMFkyD) {
            {
                p0QJMAF9 = 1;
                while (Pyi6L7s8ekG0 -BCTbsMFkyD >= p0QJMAF9) {
                    if (s6H7L4[p0QJMAF9 + 1] > s6H7L4[p0QJMAF9]) {
                        dqCf6kvT = s6H7L4[p0QJMAF9];
                        s6H7L4[p0QJMAF9] = s6H7L4[p0QJMAF9 + 1];
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        }
                        s6H7L4[p0QJMAF9 + 1] = dqCf6kvT;
                    }
                    p0QJMAF9++;
                };
            }
            BCTbsMFkyD = BCTbsMFkyD +1;
        };
    }
    Joui6MnjJ[1] = s6H7L4[1];
    {
        p0QJMAF9 = 2;
        while (Pyi6L7s8ekG0 >= p0QJMAF9) {
            if (s6H7L4[p0QJMAF9] != s6H7L4[p0QJMAF9 - 1]) {
                Joui6MnjJ[Fo3YXdP4y] = s6H7L4[p0QJMAF9];
                Fo3YXdP4y++;
            }
            p0QJMAF9++;
        };
    }
    Fo3YXdP4y--;
    {
        BCTbsMFkyD = 1;
        while (BCTbsMFkyD <= Fo3YXdP4y) {
            {
                p0QJMAF9 = 1;
                while (p0QJMAF9 < uIQ5DiFr) {
                    {
                        UYvgmc = p0QJMAF9 + 1;
                        while (UYvgmc <= uIQ5DiFr) {
                            if (bXML8NO1zDuy[p0QJMAF9][UYvgmc] == Joui6MnjJ[BCTbsMFkyD])
                                printf ("(%.0lf,%.0lf,%.0lf)-(%.0lf,%.0lf,%.0lf)=%.2lf\n", HTStPUoe6XA[p0QJMAF9], jUpfR0d2[p0QJMAF9], U2MSrntqcO[p0QJMAF9], HTStPUoe6XA[UYvgmc], jUpfR0d2[UYvgmc], U2MSrntqcO[UYvgmc], Joui6MnjJ[BCTbsMFkyD]);
                            UYvgmc++;
                        };
                    }
                    p0QJMAF9++;
                };
            }
            BCTbsMFkyD++;
        };
    }
    return (421 - 421);
}

