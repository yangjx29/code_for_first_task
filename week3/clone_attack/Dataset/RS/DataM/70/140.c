int main () {
    double  phADabCQ;
    phADabCQ = (541 - 541);
    double  l [10] [10];
    double  x;
    double  y;
    int n;
    int bC7vbUcL;
    int EDwYbs;
    double  a [(755 - 745)] [2];
    scanf ("%d", &n);
    for (bC7vbUcL = 0; n > bC7vbUcL; bC7vbUcL = bC7vbUcL + 1) {
        scanf ("%lf %lf\n", &a[bC7vbUcL][0], &a[bC7vbUcL][(753 - 752)]);
    }
    {
        bC7vbUcL = 0;
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
        while (n > bC7vbUcL) {
            {
                EDwYbs = bC7vbUcL + 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (n > EDwYbs) {
                    l[bC7vbUcL][EDwYbs] = sqrt ((a[bC7vbUcL][0] - a[EDwYbs][0]) * (a[bC7vbUcL][0] - a[EDwYbs][0]) + (a[bC7vbUcL][1] - a[EDwYbs][1]) * (a[bC7vbUcL][1] - a[EDwYbs][1]));
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
                    EDwYbs = EDwYbs +1;
                };
            }
            bC7vbUcL = bC7vbUcL + 1;
        };
    }
    {
        bC7vbUcL = 0;
        while (n > bC7vbUcL) {
            {
                EDwYbs = bC7vbUcL + 1;
                while (n > EDwYbs) {
                    if (l[bC7vbUcL][EDwYbs] >= phADabCQ)
                        phADabCQ = l[bC7vbUcL][EDwYbs];
                    EDwYbs = EDwYbs +1;
                };
            }
            bC7vbUcL = bC7vbUcL + 1;
        };
    }
    printf ("%.4lf\n", phADabCQ);
    return 0;
}

