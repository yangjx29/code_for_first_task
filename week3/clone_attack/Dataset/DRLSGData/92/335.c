int l9bi05 [(1548 - 548)], Xm3SOQ8EG [1000];
int zzySG8 [1001] [1001];

int qr9XoPAJt3W (const  void  *nBFn9rhicR81, const  void  *N6QDql4) {
    return *(int*) N6QDql4 -*(int*) nBFn9rhicR81;
}

int X1fy3QOwT (int CUBSOWVhCln, int Ldo7EC) {
    if (CUBSOWVhCln == Ldo7EC)
        return (310 - 310);
    else {
        if (CUBSOWVhCln > Ldo7EC)
            return -200;
        else
            return 200;
    }
}

int main () {
    int O2NUaW;
    int am04fNv;
    int FfhSMtxvXCz;
    int Fv7nkZab;
    int OiAO9QuIhJSE;
    int qT1R93G;
    for (; cin >> qT1R93G;) {
        if (qT1R93G == (993 - 993))
            break;
        {
            OiAO9QuIhJSE = (461 - 461);
            for (; OiAO9QuIhJSE < qT1R93G;) {
                scanf ("%d", &Xm3SOQ8EG[OiAO9QuIhJSE]);
                OiAO9QuIhJSE = OiAO9QuIhJSE +(333 - 332);
            }
        }
        {
            OiAO9QuIhJSE = (438 - 438);
            for (; OiAO9QuIhJSE < qT1R93G;) {
                scanf ("%d", &l9bi05[OiAO9QuIhJSE]);
                OiAO9QuIhJSE = OiAO9QuIhJSE +(578 - 577);
            }
        }
        qsort (Xm3SOQ8EG, qT1R93G, sizeof (int), qr9XoPAJt3W);
        qsort (l9bi05, qT1R93G, sizeof (int), qr9XoPAJt3W);
        {
            OiAO9QuIhJSE = 0;
            while (OiAO9QuIhJSE <= qT1R93G) {
                zzySG8[0][OiAO9QuIhJSE] = 0;
                OiAO9QuIhJSE = OiAO9QuIhJSE +1;
            }
        }
        {
            OiAO9QuIhJSE = 1;
            for (; OiAO9QuIhJSE <= qT1R93G;) {
                {
                    Fv7nkZab = 0;
                    for (; Fv7nkZab <= OiAO9QuIhJSE;) {
                        if (Fv7nkZab == 0)
                            zzySG8[OiAO9QuIhJSE][Fv7nkZab] = zzySG8[OiAO9QuIhJSE -1][Fv7nkZab] + X1fy3QOwT (l9bi05[OiAO9QuIhJSE -1], Xm3SOQ8EG[qT1R93G - OiAO9QuIhJSE +Fv7nkZab]);
                        else {
                            if (OiAO9QuIhJSE == Fv7nkZab) {
                                zzySG8[OiAO9QuIhJSE][Fv7nkZab] = zzySG8[OiAO9QuIhJSE -1][Fv7nkZab -1] + X1fy3QOwT (l9bi05[OiAO9QuIhJSE -1], Xm3SOQ8EG[Fv7nkZab -1]);
                            }
                            else {
                                FfhSMtxvXCz = zzySG8[OiAO9QuIhJSE -1][Fv7nkZab -1] + X1fy3QOwT (l9bi05[OiAO9QuIhJSE -1], Xm3SOQ8EG[Fv7nkZab -1]);
                                am04fNv = zzySG8[OiAO9QuIhJSE -1][Fv7nkZab] + X1fy3QOwT (l9bi05[OiAO9QuIhJSE -1], Xm3SOQ8EG[qT1R93G - OiAO9QuIhJSE +Fv7nkZab]);
                                if (FfhSMtxvXCz > am04fNv)
                                    zzySG8[OiAO9QuIhJSE][Fv7nkZab] = FfhSMtxvXCz;
                                else
                                    zzySG8[OiAO9QuIhJSE][Fv7nkZab] = am04fNv;
                            }
                        }
                        Fv7nkZab++;
                    }
                }
                OiAO9QuIhJSE = OiAO9QuIhJSE +1;
            }
        }
        O2NUaW = zzySG8[qT1R93G][0];
        {
            OiAO9QuIhJSE = 1;
            for (; OiAO9QuIhJSE <= qT1R93G;) {
                if (zzySG8[qT1R93G][OiAO9QuIhJSE] > O2NUaW)
                    O2NUaW = zzySG8[qT1R93G][OiAO9QuIhJSE];
                OiAO9QuIhJSE++;
            }
        }
        printf ("%d\n", O2NUaW);
    }
    return 0;
}

