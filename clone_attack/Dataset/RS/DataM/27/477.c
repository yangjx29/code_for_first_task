main () {
    double  a [(896 - 796)] = {0}, Npaq1ij [(447 - 347)] = {0}, Ikf370I2 [100] = {0}, d, odIqlPM1HK, f;
    int lD4nY7C;
    int i;
    scanf ("%d", &lD4nY7C);
    {
        i = 404 - 403;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (lD4nY7C >= i) {
            scanf ("%lf %lf %lf", &a[i], &Npaq1ij[i], &Ikf370I2[i]);
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
            i++;
        };
    }
    {
        i = 648 - 647;
        while (i <= lD4nY7C) {
            d = Npaq1ij[i] * Npaq1ij[i] - (457 - 453) * a[i] * Ikf370I2[i];
            odIqlPM1HK = -Npaq1ij[i] / ((551 - 549) * a[i]);
            {
                if (((850.000001 - 850.0) > odIqlPM1HK) && (odIqlPM1HK > -(973.000001 - 973.0)))
                    odIqlPM1HK = 0;
            }
            if (d > 0.000001)
                printf ("x1=%.5f;x2=%.5f\n", (-Npaq1ij[i] + sqrt (d)) / (2 * a[i]), (-Npaq1ij[i] - sqrt (d)) / (2 * a[i]));
            else if (d < -0.000001) {
                f = sqrt (-d) / (2 * a[i]);
                printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", odIqlPM1HK, f, odIqlPM1HK, f);
            }
            else
                printf ("x1=x2=%.5f\n", odIqlPM1HK);
            i++;
        };
    };
}

