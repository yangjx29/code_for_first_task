void  main () {
    int Lmax;
    int Lmin;
    char x [300];
    char y [300];
    char z [300];
    int Lx;
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
    int J73Kr6;
    int G4MetAxsN;
    int L;
    int i, MLIct1Y6Puen, k = (633 - 633);
    scanf ("%s", &x[(911 - 911)]);
    scanf ("%s", &y[(583 - 583)]);
    if ((x[(212 - 212)] == '0') && (!('0' != x[(634 - 633)])))
        ;
    else {
        Lx = strlen (x);
        Lmax = Lx;
        J73Kr6 = strlen (y);
        if (Lmax < J73Kr6)
            Lmax = J73Kr6;
        Lmin = Lx;
        if (J73Kr6 < Lmin)
            Lmin = J73Kr6;
        if (Lx < Lmax) {
            for (i = Lx -1; i >= 0; i = i - 1)
                x[i + Lmax -Lx] = x[i];
            for (i = 0; i <= Lmax -Lx-1; i++)
                x[i] = '0';
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
            x[Lmax] = '\0';
        }
        if (J73Kr6 < Lmax) {
            for (i = J73Kr6 -1; i >= 0; i--)
                y[i + Lmax -J73Kr6] = y[i];
            for (i = 0; i <= Lmax -J73Kr6-1; i++)
                y[i] = '0';
            y[Lmax] = '\0';
        }
        k = 0;
        for (i = Lmax -1; i >= 0; i--) {
            z[i] = x[i] - '0' + y[i] + k;
            if (z[i] > '9') {
                k = 1;
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
                z[i] = z[i] - 10;
            }
            else {
                k = 0;
            };
        }
        if (k == 1)
            ;
        for (i = 0; i < Lmax; i++)
            printf ("%c", z[i]);
    };
}

