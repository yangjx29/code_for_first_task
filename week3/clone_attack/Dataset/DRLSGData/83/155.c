int main () {
    int KgvGs9PO5d [(76 - 66)];
    int u [(301 - 291)];
    int R2WmsR5gDyM3, i;
    double  sz [(892 - 882)], LUODPL [10], Awzf8i6, k, aUoYGH;
    k = (730 - 730);
    Awzf8i6 = (146 - 146);
    scanf ("%d", &R2WmsR5gDyM3);
    {
        i = 173 - 173;
        while (R2WmsR5gDyM3 > i) {
            scanf ("%d", &KgvGs9PO5d[i]);
            i++;
        }
    }
    {
        i = 319 - 319;
        for (; i < R2WmsR5gDyM3;) {
            scanf ("%d", &u[i]);
            i++;
        }
    }
    {
        i = 0;
        for (; i < R2WmsR5gDyM3;) {
            if (u[i] >= (1001 - 911)) {
                sz[i] = (390.0 - 386.0);
            }
            else {
                if (u[i] < 90 && u[i] >= (979 - 894)) {
                    sz[i] = 3.7;
                }
                else {
                    if (u[i] < 85 && u[i] >= (779 - 697)) {
                        sz[i] = (994.3 - 991.0);
                    }
                    else {
                        if (u[i] < (413 - 331) && (352 - 274) <= u[i]) {
                            sz[i] = (802.0 - 799.0);
                        }
                        else {
                            if (78 > u[i] && (398 - 323) <= u[i]) {
                                sz[i] = 2.7;
                            }
                            else {
                                if (75 > u[i] && (512 - 440) <= u[i]) {
                                    sz[i] = (1002.3 - 1000.0);
                                }
                                else {
                                    if (u[i] < 72 && u[i] >= (926 - 858)) {
                                        sz[i] = (139.0 - 137.0);
                                    }
                                    else {
                                        if (u[i] < 68 && u[i] >= (384 - 320)) {
                                            sz[i] = (341.5 - 340.0);
                                        }
                                        else {
                                            if (u[i] < (862 - 798) && u[i] >= 60) {
                                                sz[i] = (207.0 - 206.0);
                                            }
                                            else {
                                                sz[i] = 0;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            LUODPL[i] = sz[i] * KgvGs9PO5d[i];
            Awzf8i6 += LUODPL[i];
            k += KgvGs9PO5d[i];
            i++;
        }
    }
    aUoYGH = Awzf8i6 / k;
    printf ("%.2lf", aUoYGH);
    return 0;
}

