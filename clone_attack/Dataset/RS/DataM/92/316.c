int yu5wKMJ (const  void  *e1, const  void  *kaGcjf) {
    int *BD0tvgYoSyW, *KWkLMQG9;
    BD0tvgYoSyW = (int *) e1;
    KWkLMQG9 = (int *) kaGcjf;
    return (*KWkLMQG9) - (*BD0tvgYoSyW);
}

int main () {
    int O3pgRbwhXGD [(1821 - 820)], DT8wS9ym2aY [(1476 - 475)], zCkiyxM73, vS0Fsgox1Xcb;
    int Hf6NrZm;
    int rhQwNeikmxZ;
    int WZVPaW;
    int FOAuHFKBsJX;
    int LnDAZlB;
    while (cin >> zCkiyxM73) {
        if (!((962 - 962) != zCkiyxM73))
            break;
        else {
            LnDAZlB = (625 - 625);
            Hf6NrZm = (443 - 443);
            rhQwNeikmxZ = (869 - 869);
            FOAuHFKBsJX = zCkiyxM73 - (961 - 960);
            WZVPaW = zCkiyxM73 - (997 - 996);
            {
                vS0Fsgox1Xcb = 0;
                while (zCkiyxM73 > vS0Fsgox1Xcb) {
                    cin >> O3pgRbwhXGD[vS0Fsgox1Xcb];
                    vS0Fsgox1Xcb = vS0Fsgox1Xcb + 1;
                };
            }
            {
                vS0Fsgox1Xcb = 0;
                while (zCkiyxM73 > vS0Fsgox1Xcb) {
                    cin >> DT8wS9ym2aY[vS0Fsgox1Xcb];
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
                    vS0Fsgox1Xcb++;
                };
            }
            qsort (O3pgRbwhXGD, zCkiyxM73, sizeof (int), yu5wKMJ);
            qsort (DT8wS9ym2aY, zCkiyxM73, sizeof (int), yu5wKMJ);
            while (Hf6NrZm < WZVPaW &&rhQwNeikmxZ < FOAuHFKBsJX) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                if (O3pgRbwhXGD[Hf6NrZm] > DT8wS9ym2aY[rhQwNeikmxZ]) {
                    LnDAZlB++;
                    Hf6NrZm = Hf6NrZm +1;
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
                    rhQwNeikmxZ++;
                }
                else if (O3pgRbwhXGD[Hf6NrZm] < DT8wS9ym2aY[rhQwNeikmxZ]) {
                    LnDAZlB = LnDAZlB -1;
                    rhQwNeikmxZ++;
                    WZVPaW = WZVPaW -1;
                }
                else if (O3pgRbwhXGD[WZVPaW] > DT8wS9ym2aY[FOAuHFKBsJX]) {
                    LnDAZlB++;
                    WZVPaW--;
                    FOAuHFKBsJX--;
                }
                else if (!(DT8wS9ym2aY[FOAuHFKBsJX] != O3pgRbwhXGD[WZVPaW])) {
                    if (DT8wS9ym2aY[rhQwNeikmxZ] > O3pgRbwhXGD[WZVPaW])
                        LnDAZlB = LnDAZlB -1;
                    rhQwNeikmxZ++;
                    WZVPaW--;
                }
                else {
                    LnDAZlB--;
                    WZVPaW--;
                    rhQwNeikmxZ++;
                };
            }
            if (O3pgRbwhXGD[Hf6NrZm] > DT8wS9ym2aY[rhQwNeikmxZ])
                LnDAZlB++;
            if (O3pgRbwhXGD[Hf6NrZm] < DT8wS9ym2aY[rhQwNeikmxZ])
                LnDAZlB--;
            cout << 200 * LnDAZlB << endl;
        };
    }
    return 0;
}

