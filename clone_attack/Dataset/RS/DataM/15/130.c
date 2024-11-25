int main () {
    int M9b6UchrAo;
    int tVhHeJbBsM1a;
    int WGOvqztoLh;
    int vxKFBvYNl;
    int Avbxew;
    int pDXNtvah02Z;
    int NhQH9IW2O;
    int pJOMfHl6An;
    int C7Fp3yb [1001] [1001] = {0};
    int ppRl70;
    int gZSOKlgyTR8v;
    int WBgiM39cs4PD;
    int h7V9NyZfG;
    gZSOKlgyTR8v = 0;
    scanf ("%d", &ppRl70);
    for (WBgiM39cs4PD = 0; ppRl70 > WBgiM39cs4PD; WBgiM39cs4PD = WBgiM39cs4PD +1)
        for (h7V9NyZfG = 0; ppRl70 > h7V9NyZfG; h7V9NyZfG = h7V9NyZfG + 1)
            scanf ("%d", &C7Fp3yb[WBgiM39cs4PD][h7V9NyZfG]);
    for (WBgiM39cs4PD = 0; ppRl70 > WBgiM39cs4PD; WBgiM39cs4PD = WBgiM39cs4PD +1)
        for (h7V9NyZfG = 0; ppRl70 > h7V9NyZfG; h7V9NyZfG = h7V9NyZfG + 1) {
            if (!(0 != C7Fp3yb[WBgiM39cs4PD][h7V9NyZfG]) && !(0 != C7Fp3yb[WBgiM39cs4PD][h7V9NyZfG + 1]) && !(0 != C7Fp3yb[WBgiM39cs4PD +1][h7V9NyZfG])) {
                M9b6UchrAo = WBgiM39cs4PD;
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
                tVhHeJbBsM1a = h7V9NyZfG;
            }
            if (C7Fp3yb[WBgiM39cs4PD][h7V9NyZfG] == 0 && !(0 != C7Fp3yb[WBgiM39cs4PD][h7V9NyZfG - 1]) && !(0 != C7Fp3yb[WBgiM39cs4PD +1][h7V9NyZfG])) {
                WGOvqztoLh = WBgiM39cs4PD;
                vxKFBvYNl = h7V9NyZfG;
            }
            if (C7Fp3yb[WBgiM39cs4PD][h7V9NyZfG] == 0 && C7Fp3yb[WBgiM39cs4PD -1][h7V9NyZfG] == 0 && C7Fp3yb[WBgiM39cs4PD][h7V9NyZfG + 1] == 0) {
                Avbxew = WBgiM39cs4PD;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                pDXNtvah02Z = h7V9NyZfG;
            }
            if (C7Fp3yb[WBgiM39cs4PD][h7V9NyZfG] == 0 && C7Fp3yb[WBgiM39cs4PD][h7V9NyZfG - 1] == 0 && C7Fp3yb[WBgiM39cs4PD -1][h7V9NyZfG] == 0) {
                NhQH9IW2O = WBgiM39cs4PD;
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
                pJOMfHl6An = h7V9NyZfG;
            };
        }
    gZSOKlgyTR8v = (vxKFBvYNl - tVhHeJbBsM1a - 1) * (Avbxew -M9b6UchrAo-1);
    printf ("%d", gZSOKlgyTR8v);
    return 0;
}

