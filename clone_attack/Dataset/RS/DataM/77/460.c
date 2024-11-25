struct   chil {
    int NvNxuj5;
    int tiNPZQsj;
}
XI02j4Wm [100];
struct   student {
    int GMY9oZWBf2;
    int YJFM9klCfU4P;
}
HafFht8BHc [100];

void  ne4NFAu3B1 (struct   student a [], int PDMup2) {
    struct   student temp;
    int oE95Mga;
    int ect1LSoj4;
    for (ect1LSoj4 = 1; PDMup2 > ect1LSoj4; ect1LSoj4 = ect1LSoj4 + 1) {
        oE95Mga = 254 - 254;
        while (PDMup2 -ect1LSoj4 > oE95Mga) {
            if (a[oE95Mga + 1].YJFM9klCfU4P < a[oE95Mga].YJFM9klCfU4P) {
                temp = a[oE95Mga];
                a[oE95Mga] = a[oE95Mga + 1];
                a[oE95Mga + 1] = temp;
            }
            oE95Mga = oE95Mga + 1;
        };
    };
}

void  main () {
    char s [101];
    gets (s);
    int oE95Mga;
    int ect1LSoj4;
    int nWs4LPn8vEA;
    int hX2cWPoiR;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    };
    XI02j4Wm[0].NvNxuj5 = 1;
    XI02j4Wm[0].tiNPZQsj = 0;
    hX2cWPoiR = strlen (s);
    for (oE95Mga = 1; hX2cWPoiR > oE95Mga; oE95Mga = oE95Mga + 1) {
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
        if (!(s[0] != s[oE95Mga])) {
            XI02j4Wm[oE95Mga].NvNxuj5 = 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            XI02j4Wm[oE95Mga].tiNPZQsj = oE95Mga;
        }
        else {
            XI02j4Wm[oE95Mga].NvNxuj5 = 0;
            XI02j4Wm[oE95Mga].tiNPZQsj = oE95Mga;
        };
    }
    for (oE95Mga = 0, ect1LSoj4 = 0; hX2cWPoiR > oE95Mga; oE95Mga = oE95Mga + 1) {
        if (!(1 != XI02j4Wm[oE95Mga].NvNxuj5) && XI02j4Wm[oE95Mga + 1].NvNxuj5 == 0) {
            HafFht8BHc[ect1LSoj4].GMY9oZWBf2 = XI02j4Wm[oE95Mga].tiNPZQsj;
            HafFht8BHc[ect1LSoj4].YJFM9klCfU4P = XI02j4Wm[oE95Mga + 1].tiNPZQsj;
            for (nWs4LPn8vEA = oE95Mga; (nWs4LPn8vEA + 2) < hX2cWPoiR; nWs4LPn8vEA = nWs4LPn8vEA + 1)
                XI02j4Wm[nWs4LPn8vEA] = XI02j4Wm[nWs4LPn8vEA + 2];
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
            oE95Mga = -1;
            hX2cWPoiR = hX2cWPoiR - 2;
            ect1LSoj4 = ect1LSoj4 + 1;
        };
    }
    ne4NFAu3B1 (HafFht8BHc, ect1LSoj4);
    {
        oE95Mga = 0;
        while (oE95Mga < ect1LSoj4) {
            printf ("%d %d\n", HafFht8BHc[oE95Mga].GMY9oZWBf2, HafFht8BHc[oE95Mga].YJFM9klCfU4P);
            oE95Mga++;
        };
    };
}

