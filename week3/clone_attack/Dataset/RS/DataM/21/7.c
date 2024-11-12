void  main () {
    float b [400];
    float eDwSk0ag3zl;
    float a [400];
    float mgvPdGALOFsc;
    float iKvLI9 [40];
    float d;
    float hA6jJVxOG [40];
    int JunqjQXx3;
    int max;
    int TUNifxAFV;
    int Y5QbUrYg;
    int n;
    int judge;
    int m;
    int fin;
    int final;
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
    eDwSk0ag3zl = 0;
    scanf ("%d", &n);
    {
        JunqjQXx3 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > JunqjQXx3) {
            scanf ("%f", &a[JunqjQXx3]);
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
            JunqjQXx3 = JunqjQXx3 +1;
        };
    }
    {
        JunqjQXx3 = 0;
        while (JunqjQXx3 < n) {
            eDwSk0ag3zl = eDwSk0ag3zl + a[JunqjQXx3];
            JunqjQXx3 = JunqjQXx3 +1;
        };
    }
    d = eDwSk0ag3zl / n;
    {
        JunqjQXx3 = 0;
        while (JunqjQXx3 < n) {
            if (d <= a[JunqjQXx3])
                b[JunqjQXx3] = a[JunqjQXx3] - d;
            else
                b[JunqjQXx3] = d - a[JunqjQXx3];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            JunqjQXx3 = JunqjQXx3 +1;
        };
    }
    max = 0;
    {
        JunqjQXx3 = 0;
        while (JunqjQXx3 < n) {
            if (b[max] < b[JunqjQXx3])
                max = JunqjQXx3;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            JunqjQXx3 = JunqjQXx3 +1;
        };
    }
    {
        Y5QbUrYg = 0;
        JunqjQXx3 = 0;
        while (JunqjQXx3 < n) {
            if (!(b[max] != b[JunqjQXx3])) {
                iKvLI9[Y5QbUrYg] = a[JunqjQXx3];
                Y5QbUrYg = Y5QbUrYg +1;
            }
            JunqjQXx3 = JunqjQXx3 +1;
        };
    }
    m = 0;
    {
        JunqjQXx3 = 0;
        while (JunqjQXx3 <= Y5QbUrYg -1) {
            if (iKvLI9[JunqjQXx3] <= d) {
                m = 1;
                break;
            }
            JunqjQXx3 = JunqjQXx3 +1;
        };
    }
    judge = 1;
    if (m == 1) {
        TUNifxAFV = 0;
        {
            JunqjQXx3 = 0;
            while (JunqjQXx3 <= Y5QbUrYg -1) {
                if (iKvLI9[JunqjQXx3] <= d) {
                    hA6jJVxOG[TUNifxAFV] = iKvLI9[JunqjQXx3];
                    TUNifxAFV = TUNifxAFV +1;
                }
                JunqjQXx3++;
            };
        }
        fin = TUNifxAFV;
        {
            TUNifxAFV = fin;
            JunqjQXx3 = 0;
            while (JunqjQXx3 <= Y5QbUrYg -1) {
                if (iKvLI9[JunqjQXx3] > d) {
                    hA6jJVxOG[TUNifxAFV] = iKvLI9[JunqjQXx3];
                    TUNifxAFV = TUNifxAFV +1;
                }
                JunqjQXx3++;
            };
        }
        final = TUNifxAFV;
    }
    else if (m == 0) {
        JunqjQXx3 = 0;
        while (JunqjQXx3 < Y5QbUrYg) {
            hA6jJVxOG[JunqjQXx3] = iKvLI9[JunqjQXx3];
            JunqjQXx3++;
        };
    }
    final = Y5QbUrYg;
    if (final - 1 == 0)
        judge = 0;
    if (judge == 1) {
        for (JunqjQXx3 = 0; JunqjQXx3 < final - 1; JunqjQXx3 = JunqjQXx3 +1)
            printf ("%.0f,", hA6jJVxOG[JunqjQXx3]);
        printf ("%.0f", hA6jJVxOG[JunqjQXx3]);
    }
    else
        printf ("%.0f", hA6jJVxOG[final - 1]);
}

