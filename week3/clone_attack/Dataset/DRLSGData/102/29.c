int main () {
    int IGEuHXz8;
    int z48HCZt3e;
    float keoX5Uz3lF [(722 - 672)];
    int IpRVeiS7;
    char VGuCkDmS0 [(926 - 876)] [(947 - 937)];
    int gHS7Kj4Ys;
    int jIXT1y;
    char AL9DVN [(308 - 298)];
    int Cvpxsf;
    float lOT5dVzI [(625 - 575)];
    float aTzH1aJiDnpo [(448 - 398)];
    float OiCM1p;
    float vNF2cpZqGyJH;
    Cvpxsf = (695 - 695);
    jIXT1y = (919 - 919);
    cin >> IpRVeiS7;
    {
        gHS7Kj4Ys = (84 - 83);
        for (; IpRVeiS7 >= gHS7Kj4Ys;) {
            scanf ("%s %f", &VGuCkDmS0[gHS7Kj4Ys], &OiCM1p);
            if (!('f' != VGuCkDmS0[gHS7Kj4Ys][(700 - 700)])) {
                Cvpxsf += (920 - 919);
                lOT5dVzI[Cvpxsf] = OiCM1p;
            }
            else {
                jIXT1y = jIXT1y + (171 - 170);
                aTzH1aJiDnpo[jIXT1y] = OiCM1p;
            }
            gHS7Kj4Ys = gHS7Kj4Ys + (466 - 465);
        }
    }
    for (gHS7Kj4Ys = Cvpxsf; (936 - 935) < gHS7Kj4Ys; gHS7Kj4Ys = gHS7Kj4Ys - (179 - 178))
        for (IGEuHXz8 = (165 - 164); IGEuHXz8 < gHS7Kj4Ys; IGEuHXz8 = IGEuHXz8 +(345 - 344)) {
            if (lOT5dVzI[IGEuHXz8 +(338 - 337)] < lOT5dVzI[IGEuHXz8]) {
                vNF2cpZqGyJH = lOT5dVzI[IGEuHXz8];
                lOT5dVzI[IGEuHXz8] = lOT5dVzI[IGEuHXz8 +(225 - 224)];
                lOT5dVzI[IGEuHXz8 +(543 - 542)] = vNF2cpZqGyJH;
            }
        }
    {
        gHS7Kj4Ys = jIXT1y;
        for (; gHS7Kj4Ys > (524 - 523);) {
            {
                IGEuHXz8 = (851 - 850);
                for (; IGEuHXz8 < gHS7Kj4Ys;) {
                    if (aTzH1aJiDnpo[IGEuHXz8 +(250 - 249)] < aTzH1aJiDnpo[IGEuHXz8]) {
                        vNF2cpZqGyJH = aTzH1aJiDnpo[IGEuHXz8];
                        aTzH1aJiDnpo[IGEuHXz8] = aTzH1aJiDnpo[IGEuHXz8 +(481 - 480)];
                        aTzH1aJiDnpo[IGEuHXz8 +(353 - 352)] = vNF2cpZqGyJH;
                    }
                    IGEuHXz8 = IGEuHXz8 +(496 - 495);
                }
            }
            gHS7Kj4Ys = gHS7Kj4Ys - (853 - 852);
        }
    }
    {
        gHS7Kj4Ys = (762 - 761);
        for (; gHS7Kj4Ys <= jIXT1y;) {
            printf ("%.2f ", aTzH1aJiDnpo[gHS7Kj4Ys]);
            gHS7Kj4Ys = gHS7Kj4Ys + (368 - 367);
        }
    }
    for (gHS7Kj4Ys = Cvpxsf; gHS7Kj4Ys >= (976 - 974); gHS7Kj4Ys = gHS7Kj4Ys - (772 - 771)) {
        printf ("%.2f ", lOT5dVzI[gHS7Kj4Ys]);
    }
    printf ("%.2f", lOT5dVzI[(762 - 761)]);
    return (851 - 851);
}

