int main () {
    int JQzhPg;
    int vcxJlkX2q;
    int Etn2GAM;
    int p9lRGOsSm0ra;
    int j;
    double  ny5lIHeGixN [(392 - 342)];
    double  KkqOrhYvST [50];
    double  xa10th2W [50];
    double  e;
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
    char pCEhwb5YAk0T [10];
    Etn2GAM = 0;
    vcxJlkX2q = 0;
    scanf ("%d", &JQzhPg);
    {
        p9lRGOsSm0ra = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (p9lRGOsSm0ra < JQzhPg) {
            scanf ("%s%lf", pCEhwb5YAk0T, &ny5lIHeGixN[p9lRGOsSm0ra]);
            if (pCEhwb5YAk0T[0] == 'm') {
                KkqOrhYvST[vcxJlkX2q] = ny5lIHeGixN[p9lRGOsSm0ra];
                vcxJlkX2q++;
            }
            else {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (pCEhwb5YAk0T[0] == 'f') {
                    xa10th2W[Etn2GAM] = ny5lIHeGixN[p9lRGOsSm0ra];
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
                    Etn2GAM++;
                };
            }
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
            p9lRGOsSm0ra = p9lRGOsSm0ra + 1;
        };
    }
    {
        p9lRGOsSm0ra = 0;
        while (p9lRGOsSm0ra < vcxJlkX2q) {
            p9lRGOsSm0ra = p9lRGOsSm0ra + 1;
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
                j = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                while (j < vcxJlkX2q - (92 - 91)) {
                    if (KkqOrhYvST[j] > KkqOrhYvST[j + (422 - 421)]) {
                        e = KkqOrhYvST[j];
                        KkqOrhYvST[j] = KkqOrhYvST[j + 1];
                        KkqOrhYvST[j + 1] = e;
                    }
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
                    j++;
                };
            };
        };
    }
    printf ("%.2lf", KkqOrhYvST[0]);
    for (p9lRGOsSm0ra = 0; p9lRGOsSm0ra < Etn2GAM; p9lRGOsSm0ra++) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (j = 0; j < Etn2GAM -1; j++) {
            if (xa10th2W[j] < xa10th2W[j + 1]) {
                e = xa10th2W[j];
                xa10th2W[j] = xa10th2W[j + 1];
                xa10th2W[j + 1] = e;
            };
        };
    }
    {
        p9lRGOsSm0ra = 1;
        while (p9lRGOsSm0ra < vcxJlkX2q) {
            printf (" %.2lf", KkqOrhYvST[p9lRGOsSm0ra]);
            p9lRGOsSm0ra++;
        };
    }
    {
        p9lRGOsSm0ra = 0;
        while (p9lRGOsSm0ra < Etn2GAM) {
            printf (" %.2lf", xa10th2W[p9lRGOsSm0ra]);
            p9lRGOsSm0ra++;
        };
    }
    return 0;
}

