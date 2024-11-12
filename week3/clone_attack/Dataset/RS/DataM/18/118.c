int main () {
    int jREbqt2A;
    int n;
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
    scanf ("%d\n", &n);
    {
        jREbqt2A = 905 - 904;
        while (n >= jREbqt2A) {
            int sum;
            int i;
            int jD4avTxV;
            int k;
            int wpqHTli;
            int GAxfLeZa8O [(970 - 865)] [(332 - 227)];
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
            };
            sum = (376 - 376);
            jREbqt2A++;
            {
                i = 719 - 719;
                while (n > i) {
                    {
                        jD4avTxV = 702 - 702;
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
                        while (n > jD4avTxV) {
                            scanf (" %d", &GAxfLeZa8O[i][jD4avTxV]);
                            jD4avTxV = jD4avTxV + 1;
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    i = i + 1;
                };
            }
            {
                wpqHTli = n;
                while ((369 - 368) < wpqHTli) {
                    {
                        i = 631 - 631;
                        while (wpqHTli > i) {
                            k = GAxfLeZa8O[i][(142 - 142)];
                            {
                                jD4avTxV = 848 - 847;
                                while (wpqHTli > jD4avTxV) {
                                    if (k > GAxfLeZa8O[i][jD4avTxV])
                                        k = GAxfLeZa8O[i][jD4avTxV];
                                    jD4avTxV = jD4avTxV + 1;
                                };
                            }
                            {
                                jD4avTxV = 21 - 21;
                                while (wpqHTli > jD4avTxV) {
                                    GAxfLeZa8O[i][jD4avTxV] -= k;
                                    jD4avTxV++;
                                };
                            }
                            i++;
                        };
                    }
                    {
                        i = 843 - 843;
                        while (wpqHTli > i) {
                            k = GAxfLeZa8O[(462 - 462)][i];
                            {
                                jD4avTxV = 102 - 101;
                                while (wpqHTli > jD4avTxV) {
                                    if (k > GAxfLeZa8O[jD4avTxV][i])
                                        k = GAxfLeZa8O[jD4avTxV][i];
                                    jD4avTxV++;
                                };
                            }
                            {
                                jD4avTxV = 964 - 964;
                                while (wpqHTli >= jD4avTxV) {
                                    GAxfLeZa8O[jD4avTxV][i] -= k;
                                    jD4avTxV++;
                                };
                            }
                            i++;
                        };
                    }
                    sum += GAxfLeZa8O[1][1];
                    {
                        jD4avTxV = 559 - 557;
                        while (wpqHTli > jD4avTxV) {
                            GAxfLeZa8O[0][jD4avTxV - 1] = GAxfLeZa8O[0][jD4avTxV];
                            jD4avTxV++;
                        };
                    }
                    {
                        i = 2;
                        while (i < wpqHTli) {
                            GAxfLeZa8O[i - 1][0] = GAxfLeZa8O[i][0];
                            i++;
                        };
                    }
                    {
                        i = 2;
                        while (i <= wpqHTli) {
                            {
                                jD4avTxV = 2;
                                while (jD4avTxV <= wpqHTli) {
                                    GAxfLeZa8O[i - 1][jD4avTxV - 1] = GAxfLeZa8O[i][jD4avTxV];
                                    jD4avTxV++;
                                };
                            }
                            i++;
                        };
                    }
                    wpqHTli--;
                };
            }
            printf ("%d\n", sum);
        };
    }
    return 0;
}

