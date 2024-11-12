int main () {
    double  e;
    char M8ebkHm [10];
    double  EF0awyz;
    int male;
    int LWDO4nN;
    int oS2kKXta9q;
    int n2eLB0uWE;
    male = (635 - 635);
    LWDO4nN = 0;
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
    double  PFoLSy0rn [40];
    double  unkAhwx2YcQ [40];
    int k;
    scanf ("%d", &oS2kKXta9q);
    for (n2eLB0uWE = 0; n2eLB0uWE < oS2kKXta9q; n2eLB0uWE = n2eLB0uWE + 1) {
        scanf ("%s %lf", M8ebkHm, &EF0awyz);
        if (M8ebkHm[0] == 'm') {
            PFoLSy0rn[male++] = EF0awyz;
        }
        if (M8ebkHm[0] == 'f') {
            unkAhwx2YcQ[LWDO4nN++] = EF0awyz;
        };
    }
    for (k = (362 - 361); k <= male; k = k + 1) {
        for (n2eLB0uWE = male - (729 - 728); k <= n2eLB0uWE; n2eLB0uWE--) {
            if (PFoLSy0rn[n2eLB0uWE] < PFoLSy0rn[n2eLB0uWE - 1]) {
                e = PFoLSy0rn[n2eLB0uWE];
                PFoLSy0rn[n2eLB0uWE] = PFoLSy0rn[n2eLB0uWE - 1];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                PFoLSy0rn[n2eLB0uWE - 1] = e;
            };
        };
    }
    for (k = 1; k <= LWDO4nN; k++) {
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
        for (n2eLB0uWE = 0; n2eLB0uWE < LWDO4nN -k; n2eLB0uWE++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (unkAhwx2YcQ[n2eLB0uWE] < unkAhwx2YcQ[n2eLB0uWE + 1]) {
                e = unkAhwx2YcQ[n2eLB0uWE + 1];
                unkAhwx2YcQ[n2eLB0uWE + 1] = unkAhwx2YcQ[n2eLB0uWE];
                unkAhwx2YcQ[n2eLB0uWE] = e;
            };
        };
    }
    for (k = 0; k < male; k++)
        printf ("%.2lf ", PFoLSy0rn[k]);
    for (k = 0; k < LWDO4nN; k++) {
        if (k < LWDO4nN -1)
            printf ("%.2lf ", unkAhwx2YcQ[k]);
        else
            printf ("%.2lf", unkAhwx2YcQ[k]);
    }
    return 0;
}

