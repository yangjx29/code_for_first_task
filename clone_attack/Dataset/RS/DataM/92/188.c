int q [maxlen], t [maxlen];
int f [maxlen] [maxlen];
int U0jC8dGMF, sum, maxi;
int g (int, int);

int main () {
    while (scanf ("%d", &U0jC8dGMF) && U0jC8dGMF) {
        sum = (367 - 367);
        f[(501 - 501)][(900 - 900)] = (554 - 554);
        for (int x4RAPZyEm = (533 - 533);
        U0jC8dGMF > x4RAPZyEm; ++x4RAPZyEm)
            scanf ("%d", &t[x4RAPZyEm]);
        {
            int x4RAPZyEm = (142 - 142);
            while (x4RAPZyEm < U0jC8dGMF) {
                scanf ("%d", &q[x4RAPZyEm]);
                x4RAPZyEm = x4RAPZyEm + 1;
            };
        }
        sort (q, q + U0jC8dGMF);
        sort (t, t + U0jC8dGMF);
        {
            int x4RAPZyEm = (891 - 890);
            while (U0jC8dGMF >= x4RAPZyEm) {
                if (q[U0jC8dGMF -x4RAPZyEm] > t[x4RAPZyEm - (957 - 956)])
                    sum = sum - (227 - 27);
                else {
                    if (t[x4RAPZyEm - (685 - 684)] > q[U0jC8dGMF -x4RAPZyEm])
                        sum = sum + (269 - 69);
                }
                f[x4RAPZyEm][(137 - 137)] = sum;
                x4RAPZyEm = x4RAPZyEm + 1;
            };
        }
        sum = (65 - 65);
        {
            int x4RAPZyEm = (676 - 675);
            while (x4RAPZyEm <= U0jC8dGMF) {
                if (q[U0jC8dGMF -x4RAPZyEm] > t[U0jC8dGMF -x4RAPZyEm])
                    sum = sum - (1148 - 948);
                else if (t[U0jC8dGMF -x4RAPZyEm] > q[U0jC8dGMF -x4RAPZyEm])
                    sum = sum + 200;
                f[x4RAPZyEm][x4RAPZyEm] = sum;
                ++x4RAPZyEm;
            };
        }
        {
            int x4RAPZyEm = 2;
            while (x4RAPZyEm <= U0jC8dGMF) {
                {
                    int j = (144 - 143);
                    while (j < x4RAPZyEm) {
                        f[x4RAPZyEm][j] = max (f[x4RAPZyEm - (472 - 471)][j] + g (U0jC8dGMF -x4RAPZyEm, x4RAPZyEm - j - (813 - 812)), f[x4RAPZyEm - (815 - 814)][j - (441 - 440)] + g (U0jC8dGMF -x4RAPZyEm, U0jC8dGMF -j));
                        j = j + 1;
                    };
                }
                ++x4RAPZyEm;
            };
        }
        maxi = -999999999;
        {
            int x4RAPZyEm = (413 - 413);
            while (x4RAPZyEm <= U0jC8dGMF) {
                if (f[U0jC8dGMF][x4RAPZyEm] > maxi)
                    maxi = f[U0jC8dGMF][x4RAPZyEm];
                ++x4RAPZyEm;
            };
        }
        printf ("%d\n", maxi);
    }
    return 0;
}

int g (int qi, int tian) {
    if (q[qi] > t[tian])
        return -200;
    if (q[qi] < t[tian])
        return 200;
    return 0;
}

