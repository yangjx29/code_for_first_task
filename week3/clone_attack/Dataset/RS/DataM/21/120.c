int main () {
    int Jp1CBeF4Oq, vFGEbspcS, k, wHWh5c, OZifh7G, ervTsZ, a [(1226 - 826)], b [400];
    float x;
    float y;
    x = (301 - 301);
    y = (537 - 537);
    memset (a, 0, sizeof (a));
    memset (b, 0, sizeof (b));
    scanf ("%d", &ervTsZ);
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
    {
        Jp1CBeF4Oq = 493 - 492;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (ervTsZ >= Jp1CBeF4Oq) {
            scanf ("%d", &a[Jp1CBeF4Oq]);
            x = x + a[Jp1CBeF4Oq];
            Jp1CBeF4Oq = Jp1CBeF4Oq +1;
        };
    }
    x = (float) x / ervTsZ;
    {
        Jp1CBeF4Oq = 1;
        while (Jp1CBeF4Oq < ervTsZ) {
            {
                vFGEbspcS = Jp1CBeF4Oq +1;
                while (ervTsZ >= vFGEbspcS) {
                    if (a[vFGEbspcS] < a[Jp1CBeF4Oq]) {
                        k = a[Jp1CBeF4Oq];
                        a[Jp1CBeF4Oq] = a[vFGEbspcS];
                        a[vFGEbspcS] = k;
                    }
                    vFGEbspcS = vFGEbspcS + 1;
                };
            }
            Jp1CBeF4Oq = Jp1CBeF4Oq +1;
        };
    }
    for (Jp1CBeF4Oq = 1; Jp1CBeF4Oq <= ervTsZ; Jp1CBeF4Oq = Jp1CBeF4Oq +1)
        if (fabs (a[Jp1CBeF4Oq] - x) > y)
            y = fabs (a[Jp1CBeF4Oq] - x);
    wHWh5c = 0;
    {
        Jp1CBeF4Oq = 1;
        while (Jp1CBeF4Oq <= ervTsZ) {
            if (fabs (fabs (a[Jp1CBeF4Oq] - x) - y) < 0.0001) {
                wHWh5c = wHWh5c + 1;
                b[wHWh5c] = a[Jp1CBeF4Oq];
            }
            Jp1CBeF4Oq = Jp1CBeF4Oq +1;
        };
    }
    {
        Jp1CBeF4Oq = 1;
        while (Jp1CBeF4Oq < wHWh5c) {
            printf ("%d,", b[Jp1CBeF4Oq]);
            Jp1CBeF4Oq = Jp1CBeF4Oq +1;
        };
    }
    printf ("%d", b[wHWh5c]);
}

