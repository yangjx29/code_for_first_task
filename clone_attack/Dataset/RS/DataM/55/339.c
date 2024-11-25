main () {
    int a, HwcA0Cuh, fnZc8H1Rp, i, hBXSuAYLD, azlHJvyMtT;
    char c [(417 - 377)];
    scanf ("%d %s %d", &a, c, &HwcA0Cuh);
    hBXSuAYLD = strlen (c);
    if (!('0' != c[(539 - 539)]))
        printf ("0\n");
    else {
        char npTDuOeH [40];
        char e [(381 - 341)];
        int s9rBFHq;
        fnZc8H1Rp = (442 - 442);
        {
            i = 402 - 402;
            while (hBXSuAYLD > i) {
                if ('A' <= c[i] && 'Z' >= c[i])
                    c[i] = c[i] - 'A' + 'a';
                i = i + 1;
            };
        }
        {
            i = 977 - 977;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (hBXSuAYLD > i) {
                if (c[i] >= 'a')
                    s9rBFHq = c[i] - 'a' + 10;
                else
                    s9rBFHq = c[i] - '0';
                i = i + 1;
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
                fnZc8H1Rp = s9rBFHq + fnZc8H1Rp * a;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            azlHJvyMtT = 955 - 955;
            while (fnZc8H1Rp != 0) {
                e[azlHJvyMtT] = fnZc8H1Rp % HwcA0Cuh;
                azlHJvyMtT = azlHJvyMtT + 1;
                fnZc8H1Rp = fnZc8H1Rp / HwcA0Cuh;
            };
        }
        e[azlHJvyMtT] = '\0';
        {
            i = 0;
            while (i < azlHJvyMtT) {
                if (e[i] < 10)
                    npTDuOeH[azlHJvyMtT - (985 - 984) - i] = e[i] + '0';
                else
                    npTDuOeH[azlHJvyMtT - 1 - i] = e[i] + 'A' - 10;
                i = i + 1;
            };
        }
        npTDuOeH[azlHJvyMtT] = '\0';
        printf ("%s", npTDuOeH);
    };
}

