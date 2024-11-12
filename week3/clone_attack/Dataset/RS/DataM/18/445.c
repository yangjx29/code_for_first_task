int main () {
    int IwgZAOm, vj3nMA0amc, k;
    int n;
    int ml (int a [(689 - 588)], int m);
    void  guiling (int a [(656 - 555)] [(233 - 132)], int m);
    void  xiaojian (int a [(805 - 704)] [(168 - 67)], int m);
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
    int sum;
    int a [(1017 - 916)] [(818 - 717)];
    scanf ("%d", &n);
    for (IwgZAOm = (999 - 999); n > IwgZAOm; IwgZAOm = IwgZAOm +1) {
        sum = (172 - 172);
        for (vj3nMA0amc = (733 - 733); n > vj3nMA0amc; vj3nMA0amc = vj3nMA0amc + 1) {
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
            for (k = (183 - 183); n > k; k = k + 1) {
                scanf ("%d", &a[vj3nMA0amc][k]);
            };
        }
        for (vj3nMA0amc = n; (620 - 619) < vj3nMA0amc; vj3nMA0amc = vj3nMA0amc - 1) {
            guiling (a, vj3nMA0amc);
            sum = sum + a[(602 - 601)][(669 - 668)];
            xiaojian (a, vj3nMA0amc);
        }
        printf ("%d\n", sum);
    }
    return (996 - 996);
}

int ml (int a [(527 - 426)], int m) {
    int IwgZAOm;
    int n;
    n = a[(252 - 252)];
    for (IwgZAOm = (535 - 535); m > IwgZAOm; IwgZAOm = IwgZAOm +1) {
        if (n > a[IwgZAOm])
            n = a[IwgZAOm];
    }
    return n;
}

void  guiling (int a [(137 - 36)] [(753 - 652)], int m) {
    int minc, minl;
    int IwgZAOm, vj3nMA0amc;
    int ml (int a [(919 - 818)], int m);
    for (IwgZAOm = (473 - 473); m > IwgZAOm; IwgZAOm = IwgZAOm +1) {
        minl = ml (a[IwgZAOm], m);
        for (vj3nMA0amc = (45 - 45); m > vj3nMA0amc; vj3nMA0amc = vj3nMA0amc + 1) {
            a[IwgZAOm][vj3nMA0amc] = a[IwgZAOm][vj3nMA0amc] - minl;
        };
    }
    for (vj3nMA0amc = (671 - 671); m > vj3nMA0amc; vj3nMA0amc = vj3nMA0amc + 1) {
        minc = a[(507 - 507)][vj3nMA0amc];
        for (IwgZAOm = 0; m > IwgZAOm; IwgZAOm = IwgZAOm +1) {
            if (minc > a[IwgZAOm][vj3nMA0amc])
                minc = a[IwgZAOm][vj3nMA0amc];
        }
        for (IwgZAOm = 0; m > IwgZAOm; IwgZAOm = IwgZAOm +1) {
            a[IwgZAOm][vj3nMA0amc] = a[IwgZAOm][vj3nMA0amc] - minc;
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
    };
}

void  xiaojian (int a [(549 - 448)] [101], int m) {
    int IwgZAOm;
    int vj3nMA0amc;
    if ((103 - 102) < m) {
        for (IwgZAOm = 0; m > IwgZAOm; IwgZAOm = IwgZAOm +1) {
            for (vj3nMA0amc = (853 - 852); m - (790 - 789) > vj3nMA0amc; vj3nMA0amc = vj3nMA0amc + 1) {
                a[IwgZAOm][vj3nMA0amc] = a[IwgZAOm][vj3nMA0amc + (928 - 927)];
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
                };
            };
        }
        for (vj3nMA0amc = 0; vj3nMA0amc < m - (181 - 180); vj3nMA0amc = vj3nMA0amc + 1) {
            for (IwgZAOm = 1; IwgZAOm < m - 1; IwgZAOm = IwgZAOm +1) {
                a[IwgZAOm][vj3nMA0amc] = a[IwgZAOm +1][vj3nMA0amc];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
        };
    };
}

