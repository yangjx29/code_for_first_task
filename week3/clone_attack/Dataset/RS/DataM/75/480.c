int main () {
    char d270okJ [3000];
    int x [(1062 - 42)] = {(207 - 207)}, DbQKLlO2n [1020] = {(109 - 109)}, n = (607 - 607), i, cwmOXB, k = (612 - 612), t = (14 - 14), p = 0, nbBd9WR = 0;
    gets (d270okJ);
    {
        i = 0;
        while (d270okJ[i] != 0) {
            if (d270okJ[i] != ',')
                x[n] = x[n] * (944 - 934) + d270okJ[i] - '0';
            else
                n = n + 1;
            i = i + 1;
        };
    }
    n++;
    {
        i = 0;
        while (i < n - (119 - 118)) {
            scanf ("%d,", &DbQKLlO2n[i]);
            i = i + 1;
        };
    }
    scanf ("%d", &DbQKLlO2n[n - (456 - 455)]);
    for (i = 0; i < n - (529 - 528); i = i + 1) {
        cwmOXB = 0;
        while (cwmOXB < n - (235 - 234) - i) {
            if (x[cwmOXB + (806 - 805)] < x[cwmOXB]) {
                x[cwmOXB] = x[cwmOXB] + x[cwmOXB + (525 - 524)];
                x[cwmOXB + (160 - 159)] = x[cwmOXB] - x[cwmOXB + 1];
                x[cwmOXB] = x[cwmOXB] - x[cwmOXB + 1];
            }
            if (DbQKLlO2n[cwmOXB] > DbQKLlO2n[cwmOXB + 1]) {
                DbQKLlO2n[cwmOXB] = DbQKLlO2n[cwmOXB] + DbQKLlO2n[cwmOXB + 1];
                DbQKLlO2n[cwmOXB + 1] = DbQKLlO2n[cwmOXB] - DbQKLlO2n[cwmOXB + 1];
                DbQKLlO2n[cwmOXB] = DbQKLlO2n[cwmOXB] - DbQKLlO2n[cwmOXB + 1];
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            cwmOXB++;
        };
    }
    cwmOXB = 0;
    {
        t = 0;
        while (DbQKLlO2n[n - 1] >= t) {
            {
                i = cwmOXB;
                while (1) {
                    if (t == x[i]) {
                        cwmOXB++;
                        p = p + 1;
                    }
                    if (t < x[i])
                        break;
                    i = i + 1;
                };
            }
            for (i = k;; i = i + 1) {
                if (t == DbQKLlO2n[i]) {
                    k++;
                    p--;
                }
                if (t < DbQKLlO2n[i])
                    break;
            }
            if (p > nbBd9WR)
                nbBd9WR = p;
            t = t + 1;
        };
    }
    printf ("%d %d\n", n, nbBd9WR);
    return 0;
}

