int main () {
    double  cOVpXYwkN5g, *GD8BJZv9gzq;
    int kDnzNdMCAjR, Execl8bAK2, ys4o7A2i, ntxKOJqYGV = (766 - 766);
    double  *x;
    double  *y;
    double  *z;
    int max = 0;
    scanf ("%d", &kDnzNdMCAjR);
    x = (double  *) malloc (sizeof (double ) * kDnzNdMCAjR);
    y = (double  *) malloc (sizeof (double ) * kDnzNdMCAjR);
    z = (double  *) malloc (sizeof (double ) * kDnzNdMCAjR);
    GD8BJZv9gzq = (double  *) malloc (sizeof (double ) * kDnzNdMCAjR);
    {
        Execl8bAK2 = 652 - 652;
        while (kDnzNdMCAjR > Execl8bAK2) {
            scanf ("%lf %lf", &x[Execl8bAK2], &y[Execl8bAK2]);
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
            Execl8bAK2 = Execl8bAK2 +1;
        };
    }
    {
        Execl8bAK2 = 175 - 175;
        while (Execl8bAK2 < kDnzNdMCAjR) {
            {
                ys4o7A2i = 763 - 762;
                while (kDnzNdMCAjR > ys4o7A2i) {
                    if (!(0 != ntxKOJqYGV)) {
                        ntxKOJqYGV = 1;
                        cOVpXYwkN5g = pow (x[ys4o7A2i] - x[Execl8bAK2], (870 - 868)) + pow (y[ys4o7A2i] - y[Execl8bAK2], (778 - 776));
                    }
                    GD8BJZv9gzq[ys4o7A2i] = pow (x[ys4o7A2i] - x[Execl8bAK2], 2) + pow (y[ys4o7A2i] - y[Execl8bAK2], 2);
                    if (GD8BJZv9gzq[ys4o7A2i] > cOVpXYwkN5g) {
                        cOVpXYwkN5g = GD8BJZv9gzq[ys4o7A2i];
                    }
                    ys4o7A2i = ys4o7A2i + 1;
                    z[Execl8bAK2] = cOVpXYwkN5g;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            Execl8bAK2 = Execl8bAK2 +1;
        };
    }
    {
        Execl8bAK2 = 0;
        while (Execl8bAK2 < kDnzNdMCAjR) {
            if (z[Execl8bAK2] > z[max])
                max = Execl8bAK2;
            Execl8bAK2 = Execl8bAK2 +1;
        };
    }
    printf ("%.4lf\n", sqrt (z[max]));
    return 0;
}

