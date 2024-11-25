int main () {
    int x = (817 - 817), y = (833 - 833);
    int m, Drxsbv0X, i = (89 - 89), t = (767 - 767);
    int uNivbcZ1Yx [25] [25];
    scanf ("%d %d", &m, &Drxsbv0X);
    {
        i = 659 - 659;
        while (i < (Drxsbv0X +(686 - 684))) {
            uNivbcZ1Yx[0][i] = uNivbcZ1Yx[m + (414 - 413)][i] = 0;
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
            i++;
        };
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
    {
        i = 0;
        while ((m + 2) > i) {
            uNivbcZ1Yx[i][0] = uNivbcZ1Yx[i][Drxsbv0X +(770 - 769)] = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    {
        i = 474 - 473;
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
        while (i <= m) {
            {
                t = 1;
                while (t <= Drxsbv0X) {
                    scanf ("%d", &uNivbcZ1Yx[i][t]);
                    t++;
                };
            }
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
    for (i = 1; i <= m; i++) {
        t = 1;
        while (t <= Drxsbv0X) {
            if (uNivbcZ1Yx[i][t] >= uNivbcZ1Yx[i - 1][t] && uNivbcZ1Yx[i][t] >= uNivbcZ1Yx[i + 1][t] && uNivbcZ1Yx[i][t] >= uNivbcZ1Yx[i][t - 1] && uNivbcZ1Yx[i][t] >= uNivbcZ1Yx[i][t + 1]) {
                y = t - 1;
                x = i - 1;
                printf ("%d %d\n", x, y);
            }
            t++;
        };
    }
    return 0;
}

