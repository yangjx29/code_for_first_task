int main () {
    int clDaYA, i, EM8vL25, a, b, j;
    int PY2Mzep9tg [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int YdP42vtklX [12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf ("%d", &clDaYA);
    {
        i = 787 - 787;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < clDaYA) {
            int c;
            c = 0;
            i++;
            scanf ("%d%d%d\n", &EM8vL25, &a, &b);
            if ((EM8vL25 % 4 == 0 && EM8vL25 % 100 != 0) || EM8vL25 % 400 == 0) {
                if (a > b) {
                    {
                        j = 0;
                        while (j < a - b) {
                            c = c + YdP42vtklX[b + j - 1];
                            j++;
                        };
                    }
                    if (!(0 != c % 7))
                        ;
                    else
                        ;
                }
                else {
                    if (a < b) {
                        {
                            j = 0;
                            while (j < b - a) {
                                c = c + YdP42vtklX[a + j - 1];
                                j++;
                            };
                        }
                        if (c % 7 == 0)
                            ;
                        else
                            ;
                    };
                };
            }
            else {
                if (a > b) {
                    {
                        j = 0;
                        while (j < a - b) {
                            c = c + PY2Mzep9tg[b + j - 1];
                            j++;
                        };
                    }
                    if (c % 7 == 0)
                        ;
                    else
                        ;
                }
                else if (a < b) {
                    {
                        j = 0;
                        while (j < b - a) {
                            c = c + PY2Mzep9tg[a + j - 1];
                            j++;
                        };
                    }
                    if (c % 7 == 0)
                        ;
                    else
                        ;
                };
            };
        };
    }
    return 0;
}

