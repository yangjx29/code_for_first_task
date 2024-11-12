int main () {
    long  vXLQMEo5Pr;
    long  e8NHSi;
    long  sRPdIZT0m [(100501 - 501)];
    long  wTVIOKwWBGb [100000];
    long  hcSVI63aE;
    long  keyUal1bGcx3;
    long  GTvKbxVpAFrG;
    long  oDPdbIY7Q;
    long  dSwNYi06M;
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
    long  fhBEU7KNH [(10898 - 898)];
    vXLQMEo5Pr = 0;
    e8NHSi = 0;
    scanf ("%ld %ld", &GTvKbxVpAFrG, &oDPdbIY7Q);
    {
        hcSVI63aE = GTvKbxVpAFrG;
        while (oDPdbIY7Q >= hcSVI63aE) {
            dSwNYi06M = 1;
            for (keyUal1bGcx3 = 2; hcSVI63aE > keyUal1bGcx3; keyUal1bGcx3++)
                if (!(0 != hcSVI63aE % keyUal1bGcx3)) {
                    dSwNYi06M = 0;
                    break;
                }
            if (dSwNYi06M) {
                wTVIOKwWBGb[vXLQMEo5Pr] = hcSVI63aE;
                vXLQMEo5Pr++;
            }
            hcSVI63aE++;
        };
    }
    for (hcSVI63aE = 0; vXLQMEo5Pr > hcSVI63aE; hcSVI63aE++) {
        if (!(0 != wTVIOKwWBGb[hcSVI63aE] / (53 - 43)))
            sRPdIZT0m[hcSVI63aE] = 1;
        else {
            if (!(0 != wTVIOKwWBGb[hcSVI63aE] / 100))
                sRPdIZT0m[hcSVI63aE] = 2;
            else {
                if (!(0 != wTVIOKwWBGb[hcSVI63aE] / (1684 - 684)))
                    sRPdIZT0m[hcSVI63aE] = (215 - 212);
                else {
                    if (!(0 != wTVIOKwWBGb[hcSVI63aE] / (10962 - 962)))
                        sRPdIZT0m[hcSVI63aE] = (980 - 976);
                    else {
                        if (!(0 != wTVIOKwWBGb[hcSVI63aE] / 100000))
                            sRPdIZT0m[hcSVI63aE] = (995 - 990);
                        else
                            sRPdIZT0m[hcSVI63aE] = 0;
                    };
                };
            };
        }
        if (!(2 != sRPdIZT0m[hcSVI63aE]) && (!(wTVIOKwWBGb[hcSVI63aE] % 10 != wTVIOKwWBGb[hcSVI63aE] / 10))) {
            fhBEU7KNH[e8NHSi] = wTVIOKwWBGb[hcSVI63aE];
            e8NHSi++;
        }
        else {
            if (!(3 != sRPdIZT0m[hcSVI63aE]) && (wTVIOKwWBGb[hcSVI63aE] / 100 == wTVIOKwWBGb[hcSVI63aE] % 10)) {
                fhBEU7KNH[e8NHSi] = wTVIOKwWBGb[hcSVI63aE];
                e8NHSi++;
            }
            else {
                if (sRPdIZT0m[hcSVI63aE] == 4 && (wTVIOKwWBGb[hcSVI63aE] / 1000 == wTVIOKwWBGb[hcSVI63aE] % 10) && (wTVIOKwWBGb[hcSVI63aE] % 1000 / 100 == wTVIOKwWBGb[hcSVI63aE] % 100 / 10)) {
                    fhBEU7KNH[e8NHSi] = wTVIOKwWBGb[hcSVI63aE];
                    e8NHSi++;
                }
                else if (sRPdIZT0m[hcSVI63aE] == 5 && (wTVIOKwWBGb[hcSVI63aE] / 10000 == wTVIOKwWBGb[hcSVI63aE] % 10) && (wTVIOKwWBGb[hcSVI63aE] % 10000 / 1000 == wTVIOKwWBGb[hcSVI63aE] % 100 / 10)) {
                    fhBEU7KNH[e8NHSi] = wTVIOKwWBGb[hcSVI63aE];
                    e8NHSi++;
                };
            };
        };
    }
    if (e8NHSi > 0)
        for (hcSVI63aE = 0; hcSVI63aE < e8NHSi; hcSVI63aE++) {
            printf ("%ld", fhBEU7KNH[hcSVI63aE]);
            if (hcSVI63aE < e8NHSi - 1)
                printf (",");
        }
    else
        printf ("no");
    return 0;
}

