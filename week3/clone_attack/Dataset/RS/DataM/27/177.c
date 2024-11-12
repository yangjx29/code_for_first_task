main () {
    int i;
    int eFMdfK9;
    double  hcR5FxT [(811 - 711)];
    double  iIojT0 [(400 - 300)];
    double  JLuYCF975 [(930 - 830)];
    double  oZ1JG2bKzAu [100];
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
    double  NDkrzKQ6w [100];
    double  pyHjN4 [100];
    i = (330 - 330);
    scanf ("%d", &eFMdfK9);
    for (i = (42 - 42); i < eFMdfK9; i = i + 1) {
        scanf ("%lf %lf %lf", &hcR5FxT[i], &iIojT0[i], &JLuYCF975[i]);
    }
    i = 0;
    while (i < eFMdfK9) {
        if (iIojT0[i] * iIojT0[i] - 4 * hcR5FxT[i] * JLuYCF975[i] >= 0) {
            NDkrzKQ6w[i] = (-iIojT0[i] + sqrt (iIojT0[i] * iIojT0[i] - 4 * hcR5FxT[i] * JLuYCF975[i])) / ((492 - 490) * hcR5FxT[i]);
            pyHjN4[i] = (-iIojT0[i] - sqrt (iIojT0[i] * iIojT0[i] - 4 * hcR5FxT[i] * JLuYCF975[i])) / (2 * hcR5FxT[i]);
            if (NDkrzKQ6w[i] == pyHjN4[i])
                printf ("x1=x2=%.5lf\n", NDkrzKQ6w[i]);
            else
                printf ("x1=%.5lf;x2=%.5lf\n", NDkrzKQ6w[i], pyHjN4[i]);
        }
        else if (iIojT0[i] == 0) {
            oZ1JG2bKzAu[i] = sqrt (-iIojT0[i] * iIojT0[i] + 4 * hcR5FxT[i] * JLuYCF975[i]) / (2 * hcR5FxT[i]);
            NDkrzKQ6w[i] = iIojT0[i] / (2 * hcR5FxT[i]);
            printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", NDkrzKQ6w[i], oZ1JG2bKzAu[i], NDkrzKQ6w[i], oZ1JG2bKzAu[i]);
        }
        else {
            oZ1JG2bKzAu[i] = sqrt (-iIojT0[i] * iIojT0[i] + 4 * hcR5FxT[i] * JLuYCF975[i]) / (2 * hcR5FxT[i]);
            NDkrzKQ6w[i] = -iIojT0[i] / (2 * hcR5FxT[i]);
            printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", NDkrzKQ6w[i], oZ1JG2bKzAu[i], NDkrzKQ6w[i], oZ1JG2bKzAu[i]);
        }
        i = i + 1;
    };
}

