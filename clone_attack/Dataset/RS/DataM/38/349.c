double  average (double  *data [100], int UhEj6LO2) {
    double  B3EULDKpzXN = 0, a;
    int i;
    {
        i = 0;
        while (i < UhEj6LO2) {
            B3EULDKpzXN = B3EULDKpzXN +*data[i];
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
            i = i + 1;
        };
    }
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
    a = B3EULDKpzXN / UhEj6LO2;
    return a;
}

double  S (double  *data [100], int UhEj6LO2, double  a) {
    int i;
    double  B3EULDKpzXN = 0, YVDv9ZcFOr;
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < UhEj6LO2) {
            B3EULDKpzXN += (*data[i] - a) * (*data[i] - a);
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
            i++;
        };
    }
    YVDv9ZcFOr = sqrt (B3EULDKpzXN / UhEj6LO2);
    return YVDv9ZcFOr;
}

void  main () {
    int l0dSE2u7F, i;
    int UhEj6LO2, j;
    double  *temp, a, s, *data [100];
    scanf ("%d", &l0dSE2u7F);
    {
        j = 0;
        while (j < l0dSE2u7F) {
            j++;
            scanf ("%d", &UhEj6LO2);
            {
                i = 0;
                while (i < UhEj6LO2) {
                    temp = (double  *) malloc (sizeof (double ));
                    scanf ("%lf", temp);
                    data[i] = temp;
                    i++;
                };
            }
            a = average (data, UhEj6LO2);
            s = S (data, UhEj6LO2, a);
            printf ("%.5f\n", s);
        };
    };
}

