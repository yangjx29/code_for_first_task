int main (int argc, char *argv []) {
    int m, n, k, i, turn, baoshu, ing, p;
    long  vUaF6T;
    long  xskTbHtMc;
    int monkey [300];
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
    int king [2];
    while (1) {
        scanf ("%d%d", &n, &m);
        if (n != 0) {
            for (i = 0; i < n; i = i + 1) {
                monkey[i] = i + 1;
            }
            if (!(1 != m)) {
                printf ("%d\n", n);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else {
                king[0] = 0;
                for (i = 0, k = 0; i < n; i++) {
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    if (!(0 == (i + 1) % m)) {
                        monkey[k] = i + 1;
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
                        k = k + 1;
                    };
                }
                king[1] = k;
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
                {
                    ing = 0;
                    vUaF6T = n + 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    turn = 2;
                    while (ing != 1) {
                        if (turn == 2) {
                            xskTbHtMc = vUaF6T + king[1];
                        }
                        else {
                            vUaF6T = xskTbHtMc;
                            xskTbHtMc = vUaF6T + ing;
                        }
                        turn = turn + 1;
                        for (baoshu = vUaF6T, ing = 0; baoshu < xskTbHtMc; baoshu++) {
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
                            if (baoshu % m != 0) {
                                p = baoshu - vUaF6T;
                                monkey[ing] = monkey[p];
                                ing = ing + 1;
                            };
                        };
                    };
                }
                printf ("%d\n", monkey[0]);
            };
        }
        else {
            break;
        };
    }
    return 0;
}

