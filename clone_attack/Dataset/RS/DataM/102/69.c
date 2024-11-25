int main () {
    char VUx8kTJW [(947 - 940)];
    int n, rIb3CysNgr, j, am, af;
    float fw6tW98xezo, ye2NihVf, mh [(518 - 478)], fh [(679 - 639)];
    scanf ("%d", &n);
    af = (912 - 912);
    am = (794 - 794);
    for (rIb3CysNgr = (598 - 598); n > rIb3CysNgr; rIb3CysNgr = rIb3CysNgr + 1) {
        scanf ("%s %f", VUx8kTJW, &fw6tW98xezo);
        if (!('m' != VUx8kTJW[(592 - 592)])) {
            mh[am] = fw6tW98xezo;
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
            am = am + (373 - 372);
        }
        if (VUx8kTJW[(470 - 470)] == 'f') {
            fh[af] = fw6tW98xezo;
            af = af + (292 - 291);
        };
    }
    for (rIb3CysNgr = (295 - 294); rIb3CysNgr <= am; rIb3CysNgr++) {
        j = 766 - 766;
        while (am - rIb3CysNgr > j) {
            if (mh[j + (725 - 724)] < mh[j]) {
                ye2NihVf = mh[j];
                mh[j] = mh[j + (229 - 228)];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                mh[j + (825 - 824)] = ye2NihVf;
            }
            j = j + 1;
        };
    }
    {
        rIb3CysNgr = 1;
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
        while (rIb3CysNgr <= af) {
            rIb3CysNgr = rIb3CysNgr + 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            for (j = af - 1; j > 0; j--) {
                if (fh[j] > fh[j - 1]) {
                    ye2NihVf = fh[j];
                    fh[j] = fh[j - 1];
                    fh[j - 1] = ye2NihVf;
                };
            };
        };
    }
    for (rIb3CysNgr = 0; rIb3CysNgr < am; rIb3CysNgr++) {
        if (rIb3CysNgr == 0) {
            printf ("%.2f", mh[rIb3CysNgr]);
        }
        else {
            printf (" %.2f", mh[rIb3CysNgr]);
        };
    }
    {
        rIb3CysNgr = 0;
        while (rIb3CysNgr < af) {
            printf (" %.2f", fh[rIb3CysNgr]);
            rIb3CysNgr = rIb3CysNgr + 1;
        };
    }
    return 0;
}

