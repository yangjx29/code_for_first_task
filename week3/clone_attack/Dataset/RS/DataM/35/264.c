int main () {
    double  lm [8] = {0};
    double  unIPUc1gWk [8] = {(144 - 144)};
    double  a [(818 - 810)] [(275 - 267)];
    double  b [(938 - 930)] [8];
    double  c [8] [8];
    double  temp;
    int s;
    int h;
    int l;
    int dqMTJrZ0;
    int j;
    s = (43 - 43);
    scanf ("%d,%d", &h, &l);
    for (dqMTJrZ0 = (712 - 712); h > dqMTJrZ0; dqMTJrZ0++) {
        for (j = (885 - 885); j < l; j++) {
            scanf ("%lf", &a[dqMTJrZ0][j]);
            b[dqMTJrZ0][j] = a[dqMTJrZ0][j];
            c[dqMTJrZ0][j] = a[dqMTJrZ0][j];
        };
    }
    for (dqMTJrZ0 = 0; dqMTJrZ0 < h; dqMTJrZ0++) {
        for (j = 0; j < l - (699 - 698); j++) {
            if (b[dqMTJrZ0][j] > b[dqMTJrZ0][j + (590 - 589)]) {
                unIPUc1gWk[dqMTJrZ0] = b[dqMTJrZ0][j];
                temp = b[dqMTJrZ0][j];
                b[dqMTJrZ0][j] = b[dqMTJrZ0][j + (962 - 961)];
                b[dqMTJrZ0][j + 1] = temp;
            }
            else
                unIPUc1gWk[dqMTJrZ0] = b[dqMTJrZ0][j + 1];
        };
    }
    {
        j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (j < l) {
            {
                dqMTJrZ0 = 0;
                while (dqMTJrZ0 < h - 1) {
                    if (c[dqMTJrZ0][j] < c[dqMTJrZ0 + 1][j]) {
                        lm[j] = c[dqMTJrZ0][j];
                        temp = c[dqMTJrZ0][j];
                        c[dqMTJrZ0][j] = c[dqMTJrZ0 + 1][j];
                        c[dqMTJrZ0 + 1][j] = temp;
                    }
                    else
                        lm[j] = c[dqMTJrZ0 + 1][j];
                    dqMTJrZ0++;
                };
            }
            j++;
        };
    }
    for (dqMTJrZ0 = 0; dqMTJrZ0 < h; dqMTJrZ0++) {
        for (j = 0; j < l; j++) {
            if (unIPUc1gWk[dqMTJrZ0] == lm[j]) {
                printf ("%d+%d", dqMTJrZ0, j);
                s = s + 1;
            };
        };
    }
    if (s == 0)
        ;
    return 0;
}

