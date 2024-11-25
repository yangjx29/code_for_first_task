int gzRFvbn (int sOQ7SYnLD, int qZ1winjq, int day);
int W6XtHWgvw (int sOQ7SYnLD);

int main () {
    int CRBvhyf73g;
    int tiOpyfXT;
    int xS34dM2riXJ;
    int wqipEbLBsrA;
    int kPzFai;
    int YriCWp;
    int Gcf0TYaHBx;
    int cwpLt9m;
    int dbLH2wNEP8ym;
    int zdI7b0;
    int ig1AWM;
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
    int hzUoXrldWCf;
    int ewNdAJBm, SLHzh1, QcHt1Ws78;
    scanf ("%d%d%d%d%d%d", &zdI7b0, &ig1AWM, &hzUoXrldWCf, &Gcf0TYaHBx, &cwpLt9m, &dbLH2wNEP8ym);
    if (zdI7b0 > Gcf0TYaHBx) {
        ewNdAJBm = zdI7b0;
        zdI7b0 = Gcf0TYaHBx;
        Gcf0TYaHBx = ewNdAJBm;
        SLHzh1 = ig1AWM;
        ig1AWM = cwpLt9m;
        cwpLt9m = SLHzh1;
        QcHt1Ws78 = hzUoXrldWCf;
        hzUoXrldWCf = dbLH2wNEP8ym;
        dbLH2wNEP8ym = QcHt1Ws78;
    }
    tiOpyfXT = gzRFvbn (zdI7b0, ig1AWM, hzUoXrldWCf);
    YriCWp = Gcf0TYaHBx -zdI7b0;
    xS34dM2riXJ = gzRFvbn (Gcf0TYaHBx, cwpLt9m, dbLH2wNEP8ym);
    kPzFai = YriCWp *365;
    {
        CRBvhyf73g = zdI7b0;
        while (CRBvhyf73g < Gcf0TYaHBx) {
            if ((CRBvhyf73g % 100 != 0 && CRBvhyf73g % 4 == 0) || CRBvhyf73g % 400 == 0) {
                kPzFai = kPzFai + 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            CRBvhyf73g++;
        };
    }
    wqipEbLBsrA = kPzFai + xS34dM2riXJ - tiOpyfXT;
    printf ("%d", wqipEbLBsrA);
    return 0;
}

int gzRFvbn (int sOQ7SYnLD, int qZ1winjq, int day) {
    int result;
    result = 0;
    {
        int v2DHkt01Bgw = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (v2DHkt01Bgw < qZ1winjq) {
            if (v2DHkt01Bgw == 1 || v2DHkt01Bgw == 3 || v2DHkt01Bgw == 5 || v2DHkt01Bgw == 7 || v2DHkt01Bgw == 8 || v2DHkt01Bgw == 10 || v2DHkt01Bgw == 12) {
                result = result + 31;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                };
            }
            else if (v2DHkt01Bgw == 4 || v2DHkt01Bgw == 6 || v2DHkt01Bgw == 9 || v2DHkt01Bgw == 11) {
                result = result + 30;
            }
            else if (v2DHkt01Bgw == 2) {
                if (W6XtHWgvw (sOQ7SYnLD)) {
                    result = result + 29;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                else {
                    result = result + 28;
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
                };
            }
            v2DHkt01Bgw = v2DHkt01Bgw + 1;
        };
    }
    result = result + day;
    return result;
}

int W6XtHWgvw (int sOQ7SYnLD) {
    int result;
    if (sOQ7SYnLD % 400 == 0 || (sOQ7SYnLD % 4 == 0 && sOQ7SYnLD % 100 != 0)) {
        result = 1;
    }
    else {
        result = 0;
    }
    return result;
}

