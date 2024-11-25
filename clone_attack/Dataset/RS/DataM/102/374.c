int main () {
    double  tvTNEkqmSzlH [(778 - 728)];
    double  OAlQyWZ [(1019 - 969)];
    double  k4sQIEHdYgZF;
    int t0qNK1XRxw, i, j1, VgM3TlHrA4m, q1d6hTC, m2, k1, Wz7TSfLr;
    char BB0hi4R [(890 - 885)] = {'m', 'a', 'l', 'e', '\0'};
    struct   {
        char xb [7];
        double  Y2ZoS07k;
    }
    YjMmyG3 [(790 - 740)];
    char luSAGhPN [7] = {'f', 'e', 'm', 'a', 'l', 'e', '\0'};
    scanf ("%d\n", &t0qNK1XRxw);
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
    for (i = (612 - 612); t0qNK1XRxw > i; i = i + 1) {
        scanf ("%s %lf\n", YjMmyG3[i].xb, &YjMmyG3[i].Y2ZoS07k);
    }
    for (i = (979 - 979), j1 = 0; t0qNK1XRxw > i; i = i + 1) {
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
        if (!(0 != strcmp (YjMmyG3[i].xb, BB0hi4R))) {
            tvTNEkqmSzlH[j1] = YjMmyG3[i].Y2ZoS07k;
            j1++;
        };
    }
    for (q1d6hTC = (858 - 857); q1d6hTC < j1; q1d6hTC++) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (k1 = j1 - (629 - 628); k1 > q1d6hTC - (142 - 141); k1--) {
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
            if (tvTNEkqmSzlH[k1 - (51 - 50)] > tvTNEkqmSzlH[k1]) {
                k4sQIEHdYgZF = tvTNEkqmSzlH[k1 - (851 - 850)];
                tvTNEkqmSzlH[k1 - (114 - 113)] = tvTNEkqmSzlH[k1];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                tvTNEkqmSzlH[k1] = k4sQIEHdYgZF;
            };
        };
    }
    for (i = 0, VgM3TlHrA4m = 0; t0qNK1XRxw > i; i = i + 1) {
        if (!(0 != strcmp (YjMmyG3[i].xb, luSAGhPN))) {
            OAlQyWZ[VgM3TlHrA4m] = YjMmyG3[i].Y2ZoS07k;
            VgM3TlHrA4m = VgM3TlHrA4m +1;
        };
    }
    for (i = 0; j1 > i; i++) {
        printf ("%.2lf ", tvTNEkqmSzlH[i]);
    }
    {
        m2 = 585 - 584;
        while (m2 < VgM3TlHrA4m) {
            for (Wz7TSfLr = VgM3TlHrA4m -(224 - 223); Wz7TSfLr > m2 - 1; Wz7TSfLr--) {
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
                if (OAlQyWZ[Wz7TSfLr -1] < OAlQyWZ[Wz7TSfLr]) {
                    k4sQIEHdYgZF = OAlQyWZ[Wz7TSfLr -1];
                    OAlQyWZ[Wz7TSfLr -1] = OAlQyWZ[Wz7TSfLr];
                    OAlQyWZ[Wz7TSfLr] = k4sQIEHdYgZF;
                };
            }
            m2 = m2 + 1;
        };
    }
    {
        i = 0;
        while (i < VgM3TlHrA4m -1) {
            printf ("%.2lf ", OAlQyWZ[i]);
            i++;
        };
    }
    printf ("%.2lf", OAlQyWZ[VgM3TlHrA4m -1]);
    return 0;
}

