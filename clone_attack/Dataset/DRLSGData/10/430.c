int FILAJSjP0z (int PC4hoGSkR [], int LYceSxvy4H);
int iDd5bjGUO8P [30];

void  main () {
    int PC4hoGSkR [100], k, YVkdPm7t4, Zr3hYXD;
    scanf ("%d", &k);
    for (YVkdPm7t4 = 0; YVkdPm7t4 < 30; YVkdPm7t4 = YVkdPm7t4 +1)
        iDd5bjGUO8P[YVkdPm7t4] = 1;
    for (YVkdPm7t4 = k; YVkdPm7t4 > 0; YVkdPm7t4 = YVkdPm7t4 -1)
        scanf ("%d", &PC4hoGSkR[YVkdPm7t4]);
    PC4hoGSkR[k + 1] = 100000;
    Zr3hYXD = FILAJSjP0z (PC4hoGSkR, k + 1);
    printf ("%d\n", Zr3hYXD -1);
}

int FILAJSjP0z (int PC4hoGSkR [], int LYceSxvy4H) {
    int Ej57hVCK, YVkdPm7t4, rS4e8NPHc = 0;
    Ej57hVCK = PC4hoGSkR[LYceSxvy4H];
    if (!(1 != LYceSxvy4H))
        return (1);
    else {
        for (YVkdPm7t4 = LYceSxvy4H -1; YVkdPm7t4 > 0; YVkdPm7t4 = YVkdPm7t4 -1) {
            if (Ej57hVCK >= PC4hoGSkR[YVkdPm7t4] && rS4e8NPHc < FILAJSjP0z (PC4hoGSkR, YVkdPm7t4))
                rS4e8NPHc = FILAJSjP0z (PC4hoGSkR, YVkdPm7t4);
        }
        return (rS4e8NPHc + 1);
    }
}

