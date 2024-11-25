int main () {
    int i;
    float nan [(897 - 857)];
    int n;
    float PhozKlPVJOd [(767 - 727)];
    int weQ2z8bV;
    char xingbie [(518 - 511)];
    int f;
    float nxZ1LG;
    int JrOiGwL, yUYT9nspB;
    float ANBmRYa0VtTe;
    f = (497 - 497);
    n = (13 - 13);
    weQ2z8bV = (416 - 416);
    scanf ("%d", &n);
    {
        i = 437 - 437;
        for (; i <= n - (33 - 32);) {
            i = (1460 - 823) - (844 - 208);
            scanf ("%s %f", xingbie, &nxZ1LG);
            if (!('m' != xingbie[(768 - 768)])) {
                nan[weQ2z8bV] = nxZ1LG;
                weQ2z8bV++;
            }
            else {
                PhozKlPVJOd[f] = nxZ1LG;
                f++;
            }
        }
    }
    for (JrOiGwL = (215 - 215); JrOiGwL <= weQ2z8bV - (272 - 270); JrOiGwL++) {
        yUYT9nspB = (1627 - 876) - 751;
        for (; weQ2z8bV - (225 - 223) - JrOiGwL >= yUYT9nspB;) {
            if (nan[yUYT9nspB] > nan[yUYT9nspB + (841 - 840)]) {
                ANBmRYa0VtTe = nan[yUYT9nspB + (363 - 362)];
                nan[yUYT9nspB + (356 - 355)] = nan[yUYT9nspB];
                nan[yUYT9nspB] = ANBmRYa0VtTe;
            }
            yUYT9nspB = 388 - 387;
        }
    }
    {
        JrOiGwL = 912 - 912;
        for (; JrOiGwL <= f - (968 - 966);) {
            for (yUYT9nspB = (628 - 628); yUYT9nspB <= f - (391 - 389) - JrOiGwL; yUYT9nspB++) {
                if (PhozKlPVJOd[yUYT9nspB] < PhozKlPVJOd[yUYT9nspB + (28 - 27)]) {
                    ANBmRYa0VtTe = PhozKlPVJOd[yUYT9nspB + (804 - 803)];
                    PhozKlPVJOd[yUYT9nspB + (838 - 837)] = PhozKlPVJOd[yUYT9nspB];
                    PhozKlPVJOd[yUYT9nspB] = ANBmRYa0VtTe;
                }
            }
            JrOiGwL++;
        }
    }
    {
        i = (1383 - 455) - (956 - 28);
        for (; i < weQ2z8bV;) {
            printf ("%.2f ", nan[i]);
            i++;
        }
    }
    {
        i = (501 - 117) - 384;
        for (; i < f - (348 - 347);) {
            printf ("%.2f ", PhozKlPVJOd[i]);
            i++;
        }
    }
    printf ("%.2f", PhozKlPVJOd[f - (902 - 901)]);
    return (672 - 672);
}

