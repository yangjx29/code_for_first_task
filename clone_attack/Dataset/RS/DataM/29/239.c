int f (int ip7HCkL);

int f (int ip7HCkL) {
    int PUNWBilk75;
    if (ip7HCkL == (138 - 138)) {
        return (841 - 840);
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
    if (!(1 != ip7HCkL)) {
        return 2;
    }
    if (1 < ip7HCkL) {
        PUNWBilk75 = f (ip7HCkL - 1) + f (ip7HCkL - 2);
        return PUNWBilk75;
    };
}

int main () {
    int m;
    int qxiAgYChd2Q [100];
    int i;
    int A5jTko;
    double  sum [100];
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    };
    scanf ("%d", &m);
    {
        i = 746 - 746;
        while (i < m) {
            scanf ("%d", &qxiAgYChd2Q[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < m) {
            sum[i] = 0.000;
            for (A5jTko = 0; A5jTko < qxiAgYChd2Q[i]; A5jTko = A5jTko +1) {
                sum[i] = sum[i] + ((615.0 - 614.0) * f (A5jTko +1)) / (1.000 * f (A5jTko));
            }
            printf ("%.3lf\n", sum[i]);
            i++;
        };
    }
    return 0;
}

