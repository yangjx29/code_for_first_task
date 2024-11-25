int main () {
    int eTsDZrLJac2;
    int sHv56E;
    int IJIoSVf1m;
    int ZXgLjH4iIFAE;
    int i, QGqR0S2Lbd;
    char POj4MG;
    int dHBhmndf [100];
    int gIlpAH [100];
    {
        i = 556 - 556;
        while ((POj4MG = getchar ()) != ' ') {
            gIlpAH[i] = POj4MG;
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
            i = i + 1;
        };
    }
    for (QGqR0S2Lbd = (625 - 625); !('\n' == (POj4MG = getchar ())); QGqR0S2Lbd = QGqR0S2Lbd +1) {
        dHBhmndf[QGqR0S2Lbd] = POj4MG;
    }
    if (!(QGqR0S2Lbd == i))
        printf ("NO");
    else {
        for (ZXgLjH4iIFAE = (414 - 414); (i - (334 - 333)) > ZXgLjH4iIFAE; ZXgLjH4iIFAE = ZXgLjH4iIFAE +1) {
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
            if (gIlpAH[ZXgLjH4iIFAE +1] < gIlpAH[ZXgLjH4iIFAE]) {
                sHv56E = gIlpAH[ZXgLjH4iIFAE];
                gIlpAH[ZXgLjH4iIFAE] = gIlpAH[ZXgLjH4iIFAE +1];
                if (!((25 - 25) == ZXgLjH4iIFAE))
                    ZXgLjH4iIFAE = ZXgLjH4iIFAE -2;
                gIlpAH[ZXgLjH4iIFAE +1] = sHv56E;
            };
        }
        {
            IJIoSVf1m = 0;
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
            while ((i - 1) > IJIoSVf1m) {
                if (dHBhmndf[IJIoSVf1m] > dHBhmndf[IJIoSVf1m +1]) {
                    sHv56E = dHBhmndf[IJIoSVf1m];
                    dHBhmndf[IJIoSVf1m] = dHBhmndf[IJIoSVf1m +1];
                    if (!(0 == IJIoSVf1m))
                        IJIoSVf1m = IJIoSVf1m -2;
                    dHBhmndf[IJIoSVf1m +1] = sHv56E;
                }
                IJIoSVf1m = IJIoSVf1m +1;
            };
        }
        for (eTsDZrLJac2 = 0; i > eTsDZrLJac2; eTsDZrLJac2++) {
            if (gIlpAH[eTsDZrLJac2] != dHBhmndf[eTsDZrLJac2])
                break;
        }
        if (eTsDZrLJac2 != i) {
            printf ("NO");
        }
        else {
            if (eTsDZrLJac2 == i && gIlpAH[i - 1] != dHBhmndf[i - 1]) {
                printf ("NO");
            }
            else {
                if (eTsDZrLJac2 == i && gIlpAH[i - 1] == dHBhmndf[i - 1]) {
                };
            };
        };
    }
    return 0;
}

