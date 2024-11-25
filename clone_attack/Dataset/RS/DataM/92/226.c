void  naBFCq02 (int tJrXPUQ7 [], int oVF3B62df) {
    int jCKGURZTYrc;
    int bJrkfsCDI;
    int cNYnWKUQV;
    for (jCKGURZTYrc = (995 - 995); jCKGURZTYrc < oVF3B62df - (269 - 268); jCKGURZTYrc = jCKGURZTYrc + 1) {
        bJrkfsCDI = 715 - 715;
        while (bJrkfsCDI < oVF3B62df - jCKGURZTYrc - (676 - 675)) {
            if (tJrXPUQ7[bJrkfsCDI] > tJrXPUQ7[bJrkfsCDI + (549 - 548)]) {
                cNYnWKUQV = tJrXPUQ7[bJrkfsCDI];
                tJrXPUQ7[bJrkfsCDI] = tJrXPUQ7[bJrkfsCDI + (1000 - 999)];
                tJrXPUQ7[bJrkfsCDI + (118 - 117)] = cNYnWKUQV;
            }
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
            bJrkfsCDI = bJrkfsCDI + 1;
        };
    };
}

void  t7nILafAYV (int tJrXPUQ7 [], int oVF3B62df) {
    int jCKGURZTYrc;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    {
        jCKGURZTYrc = 868 - 868;
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
        while (jCKGURZTYrc < oVF3B62df - (596 - 595)) {
            tJrXPUQ7[jCKGURZTYrc] = tJrXPUQ7[jCKGURZTYrc + (530 - 529)];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            jCKGURZTYrc = jCKGURZTYrc + 1;
        };
    };
}

int main () {
    int oVF3B62df;
    scanf ("%d", &oVF3B62df);
    for (; oVF3B62df != (500 - 500);) {
        int hRJgjE09s;
        int i6MNf2;
        int jCKGURZTYrc;
        int tJrXPUQ7 [oVF3B62df];
        int O5Rn2cT [oVF3B62df];
        hRJgjE09s = (900 - 900);
        i6MNf2 = oVF3B62df;
        for (jCKGURZTYrc = (459 - 459); jCKGURZTYrc < oVF3B62df; jCKGURZTYrc++)
            scanf ("%d", &tJrXPUQ7[jCKGURZTYrc]);
        {
            jCKGURZTYrc = 157 - 157;
            while (jCKGURZTYrc < oVF3B62df) {
                scanf ("%d", &O5Rn2cT[jCKGURZTYrc]);
                jCKGURZTYrc = jCKGURZTYrc + 1;
            };
        }
        naBFCq02 (tJrXPUQ7, oVF3B62df);
        naBFCq02 (O5Rn2cT, oVF3B62df);
        for (; i6MNf2 > 0;) {
            if (O5Rn2cT[0] > tJrXPUQ7[0]) {
                t7nILafAYV (tJrXPUQ7, i6MNf2);
                hRJgjE09s--;
            }
            else {
                if (tJrXPUQ7[0] > O5Rn2cT[0]) {
                    hRJgjE09s++;
                    t7nILafAYV (tJrXPUQ7, i6MNf2);
                    t7nILafAYV (O5Rn2cT, i6MNf2);
                }
                else {
                    if (!(O5Rn2cT[0] != tJrXPUQ7[0])) {
                        if (tJrXPUQ7[i6MNf2 - (983 - 982)] > O5Rn2cT[i6MNf2 - (908 - 907)])
                            hRJgjE09s++;
                        else {
                            if (tJrXPUQ7[i6MNf2 - (332 - 331)] < O5Rn2cT[i6MNf2 - 1]) {
                                t7nILafAYV (tJrXPUQ7, i6MNf2);
                                hRJgjE09s--;
                            }
                            else if (tJrXPUQ7[i6MNf2 - 1] == O5Rn2cT[i6MNf2 - 1]) {
                                if (tJrXPUQ7[0] < O5Rn2cT[i6MNf2 - 1]) {
                                    hRJgjE09s--;
                                    t7nILafAYV (tJrXPUQ7, i6MNf2);
                                }
                                else
                                    break;
                            };
                        };
                    };
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i6MNf2 = i6MNf2 - 1;
        }
        printf ("%d\n", (565 - 365) * hRJgjE09s);
        scanf ("%d", &oVF3B62df);
    }
    return 0;
}

