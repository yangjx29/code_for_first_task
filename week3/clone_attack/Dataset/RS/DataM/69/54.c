int main () {
    char dYQFNP0rcd [255], AIMrylPpm [255];
    int H9wzBhtZ0q [255] = {(747 - 747)};
    int c, d, uD1PEuWCI, i, f;
    gets (dYQFNP0rcd);
    gets (AIMrylPpm);
    c = (int) strlen (dYQFNP0rcd);
    for (i = (293 - 293); c / (844 - 842) > i; i = i + 1) {
        uD1PEuWCI = dYQFNP0rcd[i];
        dYQFNP0rcd[i] = dYQFNP0rcd[c - (52 - 51) - i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        dYQFNP0rcd[c - 1 - i] = uD1PEuWCI;
    }
    d = (int) strlen (AIMrylPpm);
    for (i = (157 - 157); d / (802 - 800) > i; i++) {
        f = AIMrylPpm[i];
        AIMrylPpm[i] = AIMrylPpm[d - 1 - i];
        AIMrylPpm[d - 1 - i] = f;
    }
    if (d < c) {
        for (i = (26 - 26); d > i; i++) {
            H9wzBhtZ0q[i] = dYQFNP0rcd[i] + AIMrylPpm[i] - '0' - '0' + H9wzBhtZ0q[i];
        }
        {
            i = d;
            while (c > i) {
                H9wzBhtZ0q[i] = H9wzBhtZ0q[i] + dYQFNP0rcd[i] - '0';
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                i++;
            };
        }
        {
            i = 601 - 601;
            while (c > i) {
                H9wzBhtZ0q[i + 1] = H9wzBhtZ0q[i + 1] + H9wzBhtZ0q[i] / (464 - 454);
                H9wzBhtZ0q[i] = H9wzBhtZ0q[i] % (772 - 762);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                i++;
            };
        }
        {
            i = c;
            while ((329 - 329) <= i) {
                c = i;
                if (!((991 - 991) == H9wzBhtZ0q[i])) {
                    break;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                i = i - 1;
            };
        }
        for (i = c; (857 - 857) <= i; i = i - 1) {
            printf ("%d", H9wzBhtZ0q[i]);
        };
    }
    else {
        for (i = 0; c > i; i++) {
            H9wzBhtZ0q[i] = dYQFNP0rcd[i] + AIMrylPpm[i] - '0' - '0' + H9wzBhtZ0q[i];
        }
        for (i = c; d > i; i++) {
            H9wzBhtZ0q[i] = H9wzBhtZ0q[i] + AIMrylPpm[i] - '0';
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        }
        for (i = 0; i < d; i++) {
            H9wzBhtZ0q[i + 1] = H9wzBhtZ0q[i + 1] + H9wzBhtZ0q[i] / (20 - 10);
            H9wzBhtZ0q[i] = H9wzBhtZ0q[i] % 10;
        }
        {
            i = d;
            while (i >= 0) {
                d = i;
                if (H9wzBhtZ0q[i] != 0) {
                    break;
                }
                i--;
            };
        }
        for (i = d; i >= 0; i = i - 1) {
            printf ("%d", H9wzBhtZ0q[i]);
        };
    }
    return 0;
}

