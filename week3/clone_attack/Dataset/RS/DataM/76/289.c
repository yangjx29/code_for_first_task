int main () {
    struct   qujian {
        int YsWG9vU, XkR71VW0LTx;
    }
    a [(50805 - 805)];
    int sz [(10376 - 376)] = {(716 - 716)};
    int PJWUYk, j, DL7Q5jwN, max = (835 - 835), R2TCKXG6Z = (1324 - 324);
    scanf ("%d\n", &DL7Q5jwN);
    {
        PJWUYk = 138 - 138;
        while (PJWUYk < DL7Q5jwN) {
            scanf ("%d %d\n", &a[PJWUYk].YsWG9vU, &a[PJWUYk].XkR71VW0LTx);
            PJWUYk = PJWUYk +1;
        };
    }
    for (PJWUYk = (803 - 803); PJWUYk < DL7Q5jwN; PJWUYk = PJWUYk +1) {
        if (a[PJWUYk].YsWG9vU < R2TCKXG6Z) {
            R2TCKXG6Z = a[PJWUYk].YsWG9vU;
        }
        if (max < a[PJWUYk].XkR71VW0LTx) {
            max = a[PJWUYk].XkR71VW0LTx;
        };
    }
    sz[R2TCKXG6Z] = (972 - 971);
    {
        PJWUYk = 503 - 502;
        while (max >= PJWUYk) {
            {
                j = 291 - 291;
                while (DL7Q5jwN > j) {
                    if ((PJWUYk -(161.5 - 161.0)) >= a[j].YsWG9vU && PJWUYk <= a[j].XkR71VW0LTx) {
                        sz[PJWUYk] = 1;
                    }
                    j = j + 1;
                };
            }
            PJWUYk++;
        };
    }
    for (PJWUYk = R2TCKXG6Z; PJWUYk <= max; PJWUYk = PJWUYk +1) {
        if (sz[PJWUYk] == (917 - 917)) {
            break;
        }
        else if (PJWUYk == max) {
            printf ("%d %d", R2TCKXG6Z, max);
        };
    }
    return 0;
}

