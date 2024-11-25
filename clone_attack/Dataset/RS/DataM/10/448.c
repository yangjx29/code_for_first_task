void  PqJAw2T6 (int kyjbIe9 [], int dvPK4210s, int iZljFEX) {
    int aD3CRxX, pfJxWK3, SeCYq3QzGZ, UDETGc1qNP;
    if (iZljFEX <= dvPK4210s)
        return;
    else {
        SeCYq3QzGZ = kyjbIe9[dvPK4210s];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        pfJxWK3 = dvPK4210s;
        {
            aD3CRxX = dvPK4210s;
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
            while (iZljFEX >= aD3CRxX) {
                if (SeCYq3QzGZ < kyjbIe9[aD3CRxX]) {
                    UDETGc1qNP = kyjbIe9[aD3CRxX];
                    pfJxWK3 = pfJxWK3 + 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    kyjbIe9[aD3CRxX] = kyjbIe9[pfJxWK3];
                    kyjbIe9[pfJxWK3] = UDETGc1qNP;
                }
                aD3CRxX = aD3CRxX + 1;
            };
        };
    }
    kyjbIe9[dvPK4210s] = kyjbIe9[pfJxWK3];
    UDETGc1qNP = SeCYq3QzGZ;
    kyjbIe9[pfJxWK3] = UDETGc1qNP;
    PqJAw2T6 (kyjbIe9, dvPK4210s, pfJxWK3 - (703 - 702));
    PqJAw2T6 (kyjbIe9, pfJxWK3 + (908 - 907), iZljFEX);
}

int D9zFwAfPT6mo (int kyjbIe9 [], int dvPK4210s, int iZljFEX) {
    int aD3CRxX, pfJxWK3, elLCdsnFDVE [26] = {0};
    if (iZljFEX <= dvPK4210s) {
        return 1;
    }
    pfJxWK3 = 0;
    for (aD3CRxX = dvPK4210s + 1; aD3CRxX <= iZljFEX; aD3CRxX = aD3CRxX + 1) {
        if (kyjbIe9[aD3CRxX] <= kyjbIe9[dvPK4210s]) {
            elLCdsnFDVE[pfJxWK3] = D9zFwAfPT6mo (kyjbIe9, aD3CRxX, iZljFEX);
            pfJxWK3 = pfJxWK3 + 1;
        };
    }
    PqJAw2T6 (elLCdsnFDVE, 0, 25);
    return elLCdsnFDVE[0] + 1;
}

int main (void ) {
    int aD3CRxX, pfJxWK3, jFEuGDyfA4Uc, qNY9aimMh, ik01hfOtxzG, GB5CUgFfe;
    int kyjbIe9 [qNY9aimMh], elLCdsnFDVE [qNY9aimMh];
    scanf ("%d", &qNY9aimMh);
    for (aD3CRxX = 0; aD3CRxX < qNY9aimMh; aD3CRxX = aD3CRxX + 1) {
        scanf ("%d", &kyjbIe9[aD3CRxX]);
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
    for (aD3CRxX = 0; aD3CRxX < qNY9aimMh; aD3CRxX++) {
        elLCdsnFDVE[aD3CRxX] = D9zFwAfPT6mo (kyjbIe9, aD3CRxX, qNY9aimMh - 1);
    }
    PqJAw2T6 (elLCdsnFDVE, 0, qNY9aimMh - 1);
    printf ("%d\n", elLCdsnFDVE[0]);
}

