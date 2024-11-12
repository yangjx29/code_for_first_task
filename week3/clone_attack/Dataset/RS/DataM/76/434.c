int main () {
    double  x;
    int GoqwF9 [50005];
    int b [50005];
    int c [50005];
    int HtdklKiYO [50005];
    int n;
    int i;
    int Ax4eF3SqH;
    int m;
    int pJvWRSg;
    int LcebWM3Za;
    int chWI2V1;
    LcebWM3Za = 0;
    scanf ("%d", &n);
    {
        i = 49 - 48;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= n) {
            scanf ("%d%d", &GoqwF9[i], &b[i]);
            c[i] = GoqwF9[i];
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
            HtdklKiYO[i] = b[i];
            i++;
        };
    }
    {
        i = 1;
        while (i < n) {
            for (Ax4eF3SqH = 1; Ax4eF3SqH <= n - i; Ax4eF3SqH++) {
                if (c[Ax4eF3SqH +1] < c[Ax4eF3SqH]) {
                    m = c[Ax4eF3SqH];
                    c[Ax4eF3SqH] = c[Ax4eF3SqH +1];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    c[Ax4eF3SqH +1] = m;
                }
                if (HtdklKiYO[Ax4eF3SqH +1] < HtdklKiYO[Ax4eF3SqH]) {
                    pJvWRSg = HtdklKiYO[Ax4eF3SqH];
                    HtdklKiYO[Ax4eF3SqH] = HtdklKiYO[Ax4eF3SqH +1];
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
                    HtdklKiYO[Ax4eF3SqH +1] = pJvWRSg;
                };
            }
            i++;
        };
    }
    {
        x = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (x <= HtdklKiYO[n]) {
            chWI2V1 = 0;
            {
                i = 1;
                while (i <= n) {
                    if (x >= GoqwF9[i] && x <= b[i]) {
                        chWI2V1++;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    i++;
                };
            }
            x += 0.5;
            if (chWI2V1 != 0) {
                LcebWM3Za++;
            };
        };
    }
    if (LcebWM3Za == (HtdklKiYO[n] - c[1]) * 2 + 1) {
        printf ("%d %d", c[1], HtdklKiYO[n]);
    }
    else {
        printf ("no");
    }
    return 0;
}

