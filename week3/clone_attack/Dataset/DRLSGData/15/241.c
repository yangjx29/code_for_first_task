int main () {
    int nO1Nk6hbR;
    int EE4frJ;
    int fT7Wh4u6nGeB;
    int jZEWuhJk [(503 - 403)] [100];
    int T2DsWSTvQ = (130 - 129);
    int zHW1PR7k;
    int WpMfhFr3q;
    int a3DlXFQMgK;
    int AE5o0PkIWe;
    int HWaS3u8d;
    int iO0bElXK;
    scanf ("%d", &WpMfhFr3q);
    for (a3DlXFQMgK = (336 - 335); WpMfhFr3q >= a3DlXFQMgK; a3DlXFQMgK = a3DlXFQMgK + (69 - 68)) {
        for (fT7Wh4u6nGeB = (297 - 296); WpMfhFr3q >= fT7Wh4u6nGeB; fT7Wh4u6nGeB = fT7Wh4u6nGeB + 1) {
            scanf ("%d", &jZEWuhJk[fT7Wh4u6nGeB][a3DlXFQMgK]);
        }
    }
    for (a3DlXFQMgK = 1; a3DlXFQMgK <= WpMfhFr3q; a3DlXFQMgK = a3DlXFQMgK + 1) {
        for (fT7Wh4u6nGeB = 1; WpMfhFr3q >= fT7Wh4u6nGeB; fT7Wh4u6nGeB = fT7Wh4u6nGeB + 1) {
            if (!((296 - 296) != jZEWuhJk[fT7Wh4u6nGeB][a3DlXFQMgK])) {
                AE5o0PkIWe = a3DlXFQMgK;
                zHW1PR7k = fT7Wh4u6nGeB;
                T2DsWSTvQ = 0;
                break;
            }
        }
        if (!(0 != T2DsWSTvQ))
            break;
    }
    {
        a3DlXFQMgK = 1;
        for (; a3DlXFQMgK <= WpMfhFr3q;) {
            for (fT7Wh4u6nGeB = 1; fT7Wh4u6nGeB <= WpMfhFr3q; fT7Wh4u6nGeB = fT7Wh4u6nGeB + 1) {
                if (jZEWuhJk[fT7Wh4u6nGeB][a3DlXFQMgK] == 0 && jZEWuhJk[fT7Wh4u6nGeB - 1][a3DlXFQMgK] == 0 && jZEWuhJk[fT7Wh4u6nGeB][a3DlXFQMgK - 1] == 0) {
                    HWaS3u8d = fT7Wh4u6nGeB;
                    iO0bElXK = a3DlXFQMgK;
                }
            }
            a3DlXFQMgK++;
        }
    }
    EE4frJ = (HWaS3u8d -zHW1PR7k - 1) * (iO0bElXK - AE5o0PkIWe -1);
    printf ("%d\n", EE4frJ);
    return 0;
}

