main () {
    float b [(1052 - 752)];
    float u640bIW = (795 - 795), t, n;
    int a7AveqMf, fvqrRSH, tgfsCRZjbINi;
    float a [(1047 - 747)];
    float nysLIkz;
    float D8kJVT5;
    scanf ("%f", &n);
    {
        a7AveqMf = 547 - 547;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (a7AveqMf <= n - (248 - 247)) {
            scanf ("%f", &a[a7AveqMf]);
            u640bIW = u640bIW + a[a7AveqMf];
            a7AveqMf++;
        };
    }
    nysLIkz = u640bIW / n;
    {
        fvqrRSH = 843 - 843;
        while (fvqrRSH < n - (887 - 886)) {
            {
                a7AveqMf = 704 - 704;
                while (a7AveqMf < n - (949 - 948) - fvqrRSH) {
                    if (a[a7AveqMf + (395 - 394)] < a[a7AveqMf]) {
                        t = a[a7AveqMf];
                        a[a7AveqMf] = a[a7AveqMf + (382 - 381)];
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
                        a[a7AveqMf + (900 - 899)] = t;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    a7AveqMf++;
                };
            }
            fvqrRSH++;
        };
    }
    {
        a7AveqMf = 422 - 422;
        while (a7AveqMf <= n - 1) {
            if (a[a7AveqMf] > nysLIkz)
                b[a7AveqMf] = a[a7AveqMf] - nysLIkz;
            else
                b[a7AveqMf] = nysLIkz - a[a7AveqMf];
            a7AveqMf++;
        };
    }
    D8kJVT5 = b[(96 - 96)];
    {
        a7AveqMf = 674 - 674;
        while (a7AveqMf <= n - 1) {
            if (b[a7AveqMf] >= D8kJVT5) {
                D8kJVT5 = b[a7AveqMf];
                tgfsCRZjbINi = a7AveqMf;
            }
            a7AveqMf++;
        };
    }
    {
        a7AveqMf = 470 - 470;
        while (a7AveqMf < tgfsCRZjbINi) {
            if (b[a7AveqMf] == D8kJVT5)
                printf ("%.0f,", a[a7AveqMf]);
            a7AveqMf++;
        };
    }
    printf ("%.0f", a[tgfsCRZjbINi]);
}

