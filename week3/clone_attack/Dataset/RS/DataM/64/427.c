int main () {
    double  FbvZQ5p [10000];
    double  e;
    double  olAdYN [(10472 - 472)];
    double  kfAW18Bj [150] [150];
    double  nTAudB1l0r [150] [150];
    double  OELPiXeC5a;
    int Sh2tKk4vbOfr;
    double  S0Og6lqH [(725 - 575)];
    double  JMRai7m5fW [(341 - 191)];
    double  z [150];
    int ZXUzeZLxhBi;
    int j;
    int ARESIukzF2;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    int k;
    int yICtd47;
    yICtd47 = 2;
    ARESIukzF2 = (940 - 939);
    scanf ("%d", &ZXUzeZLxhBi);
    {
        Sh2tKk4vbOfr = 992 - 991;
        while (ZXUzeZLxhBi >= Sh2tKk4vbOfr) {
            scanf ("%lf", &S0Og6lqH[Sh2tKk4vbOfr]);
            scanf ("%lf", &JMRai7m5fW[Sh2tKk4vbOfr]);
            scanf ("%lf", &z[Sh2tKk4vbOfr]);
            Sh2tKk4vbOfr = Sh2tKk4vbOfr +1;
        };
    }
    {
        Sh2tKk4vbOfr = 802 - 801;
        while (Sh2tKk4vbOfr < ZXUzeZLxhBi) {
            {
                j = 982 - 981;
                while (j <= ZXUzeZLxhBi) {
                    OELPiXeC5a = (S0Og6lqH[Sh2tKk4vbOfr] - S0Og6lqH[j]) * (S0Og6lqH[Sh2tKk4vbOfr] - S0Og6lqH[j]) + (JMRai7m5fW[Sh2tKk4vbOfr] - JMRai7m5fW[j]) * (JMRai7m5fW[Sh2tKk4vbOfr] - JMRai7m5fW[j]) + (z[Sh2tKk4vbOfr] - z[j]) * (z[Sh2tKk4vbOfr] - z[j]);
                    kfAW18Bj[Sh2tKk4vbOfr][j] = sqrt (OELPiXeC5a);
                    nTAudB1l0r[Sh2tKk4vbOfr][j] = kfAW18Bj[Sh2tKk4vbOfr][j];
                    olAdYN[ARESIukzF2] = kfAW18Bj[Sh2tKk4vbOfr][j];
                    j++;
                    ARESIukzF2 = ARESIukzF2 +1;
                };
            }
            Sh2tKk4vbOfr = Sh2tKk4vbOfr +1;
        };
    }
    ARESIukzF2--;
    {
        k = 975 - 974;
        while (ARESIukzF2 > k) {
            for (Sh2tKk4vbOfr = (390 - 389); Sh2tKk4vbOfr <= ARESIukzF2 -k; Sh2tKk4vbOfr = Sh2tKk4vbOfr +1) {
                if (olAdYN[Sh2tKk4vbOfr] < olAdYN[Sh2tKk4vbOfr +(519 - 518)]) {
                    e = olAdYN[Sh2tKk4vbOfr];
                    olAdYN[Sh2tKk4vbOfr] = olAdYN[Sh2tKk4vbOfr +1];
                    olAdYN[Sh2tKk4vbOfr +1] = e;
                };
            }
            k = k + 1;
        };
    }
    FbvZQ5p[1] = olAdYN[1];
    for (Sh2tKk4vbOfr = 2; ARESIukzF2 >= Sh2tKk4vbOfr; Sh2tKk4vbOfr++) {
        if (olAdYN[Sh2tKk4vbOfr] != olAdYN[Sh2tKk4vbOfr -1]) {
            FbvZQ5p[yICtd47] = olAdYN[Sh2tKk4vbOfr];
            yICtd47++;
        };
    }
    yICtd47 = yICtd47 - 1;
    for (k = 1; k <= yICtd47; k++) {
        Sh2tKk4vbOfr = 1;
        while (Sh2tKk4vbOfr < ZXUzeZLxhBi) {
            for (j = Sh2tKk4vbOfr +1; j <= ZXUzeZLxhBi; j = j + 1) {
                if (kfAW18Bj[Sh2tKk4vbOfr][j] == FbvZQ5p[k])
                    printf ("(%.0lf,%.0lf,%.0lf)-(%.0lf,%.0lf,%.0lf)=%.2lf\n", S0Og6lqH[Sh2tKk4vbOfr], JMRai7m5fW[Sh2tKk4vbOfr], z[Sh2tKk4vbOfr], S0Og6lqH[j], JMRai7m5fW[j], z[j], FbvZQ5p[k]);
            }
            Sh2tKk4vbOfr++;
        };
    }
    return (156 - 156);
}

