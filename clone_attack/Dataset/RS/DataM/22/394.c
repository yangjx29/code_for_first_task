void  main () {
    int CXNqySDZpY [300] = {0}, ulYXaDH, b4rtuaX, nUcZv9J, n, m, Rhd64qLX, b, jEdALlw, l [300];
    char CCBAUrVs9kxE [1505];
    gets (CCBAUrVs9kxE);
    b = 0;
    nUcZv9J = strlen (CCBAUrVs9kxE);
    for (n = 1, ulYXaDH = 0; nUcZv9J > ulYXaDH; ulYXaDH++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (CCBAUrVs9kxE[ulYXaDH] == ',') {
            n++;
        };
    }
    for (ulYXaDH = 0; ulYXaDH < n; ulYXaDH++) {
        l[ulYXaDH] = 0;
        {
            b4rtuaX = 0;
            while (b4rtuaX < 4) {
                if (CCBAUrVs9kxE[b + b4rtuaX] != ',' && CCBAUrVs9kxE[b + b4rtuaX] != 0) {
                    l[ulYXaDH]++;
                }
                else
                    break;
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
                b4rtuaX++;
            };
        }
        for (m = 1, Rhd64qLX = l[ulYXaDH] + b - 1; b <= Rhd64qLX; Rhd64qLX--) {
            CXNqySDZpY[ulYXaDH] += (CCBAUrVs9kxE[Rhd64qLX] - 48) * m;
            m = m * 10;
        }
        b += l[ulYXaDH] + 1;
    }
    for (jEdALlw = 0, ulYXaDH = 0; ulYXaDH < n; ulYXaDH++) {
        if (jEdALlw < CXNqySDZpY[ulYXaDH]) {
            jEdALlw = CXNqySDZpY[ulYXaDH];
        };
    }
    {
        ulYXaDH = 0;
        while (ulYXaDH < n) {
            if (CXNqySDZpY[ulYXaDH] == jEdALlw) {
                CXNqySDZpY[ulYXaDH] = -2;
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
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            ulYXaDH++;
        };
    }
    {
        jEdALlw = -1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        ulYXaDH = 0;
        while (ulYXaDH < n) {
            if (CXNqySDZpY[ulYXaDH] > jEdALlw) {
                jEdALlw = CXNqySDZpY[ulYXaDH];
            }
            ulYXaDH++;
        };
    }
    if (jEdALlw != -1) {
        printf ("%d", jEdALlw);
    }
    else
        printf ("No");
}

