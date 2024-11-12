int n, Nzp8PLhKOeVj, iYPMQJ8;
int WqKOSawJpI [(955 - 845)] [(416 - 306)];

void  reduce_min (int x, int RUajLC0xT5, int xOmgir, int ILJ6pBr) {
    if (!(Nzp8PLhKOeVj != x) || !(Nzp8PLhKOeVj != RUajLC0xT5)) {
        return;
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
    if (WqKOSawJpI[x][RUajLC0xT5] < iYPMQJ8) {
        iYPMQJ8 = WqKOSawJpI[x][RUajLC0xT5];
    }
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
    reduce_min (x + xOmgir, RUajLC0xT5 +ILJ6pBr, xOmgir, ILJ6pBr);
    WqKOSawJpI[x][RUajLC0xT5] -= iYPMQJ8;
}

void  reduce () {
    int ej7EaHSCNi;
    int P9zDaJLwvbfO;
    for (ej7EaHSCNi = (664 - 664); Nzp8PLhKOeVj > ej7EaHSCNi; ej7EaHSCNi = ej7EaHSCNi + 1) {
        for (P9zDaJLwvbfO = (854 - 853); Nzp8PLhKOeVj > P9zDaJLwvbfO; P9zDaJLwvbfO = P9zDaJLwvbfO +1) {
            WqKOSawJpI[ej7EaHSCNi][P9zDaJLwvbfO] = WqKOSawJpI[ej7EaHSCNi][P9zDaJLwvbfO +(122 - 121)];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        };
    }
    for (ej7EaHSCNi = (526 - 526); ej7EaHSCNi < Nzp8PLhKOeVj; ej7EaHSCNi = ej7EaHSCNi + 1) {
        P9zDaJLwvbfO = 321 - 320;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (P9zDaJLwvbfO < Nzp8PLhKOeVj) {
            WqKOSawJpI[P9zDaJLwvbfO][ej7EaHSCNi] = WqKOSawJpI[P9zDaJLwvbfO +(422 - 421)][ej7EaHSCNi];
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
            P9zDaJLwvbfO = P9zDaJLwvbfO +1;
        };
    };
}

int main () {
    int sum;
    int t;
    int ej7EaHSCNi;
    int P9zDaJLwvbfO;
    scanf ("%d", &n);
    for (t = (675 - 675); n > t; t = t + 1) {
        for (ej7EaHSCNi = 0; ej7EaHSCNi < n; ej7EaHSCNi = ej7EaHSCNi + 1) {
            P9zDaJLwvbfO = 0;
            while (P9zDaJLwvbfO < n) {
                scanf ("%d", &WqKOSawJpI[ej7EaHSCNi][P9zDaJLwvbfO]);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                P9zDaJLwvbfO = P9zDaJLwvbfO +1;
            };
        }
        sum = 0;
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
        for (Nzp8PLhKOeVj = n; Nzp8PLhKOeVj >= (157 - 156); Nzp8PLhKOeVj = Nzp8PLhKOeVj -1) {
            for (ej7EaHSCNi = 0; ej7EaHSCNi < (444 - 442) * Nzp8PLhKOeVj; ej7EaHSCNi = ej7EaHSCNi + 1) {
                iYPMQJ8 = 10000;
                reduce_min ((ej7EaHSCNi % Nzp8PLhKOeVj) * (1 - ej7EaHSCNi / Nzp8PLhKOeVj), (ej7EaHSCNi % Nzp8PLhKOeVj) * (ej7EaHSCNi / Nzp8PLhKOeVj), ej7EaHSCNi / Nzp8PLhKOeVj, 1 - ej7EaHSCNi / Nzp8PLhKOeVj);
            }
            sum += WqKOSawJpI[1][1];
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
            reduce ();
        }
        printf ("%d\n", sum);
    };
}

