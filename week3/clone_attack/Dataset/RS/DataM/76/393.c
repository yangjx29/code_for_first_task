int main () {
    int BCMecE0;
    int UTZiub;
    int i2dRGraeVBP;
    int WEKilh8;
    int ekwPOZBtp6;
    int sz [50000] [2];
    int T8MF4fR2 [100000];
    int yPFz3QZ;
    int DWHR2U7a;
    int rlwoCkbrsPh;
    int EBGYf0EM;
    int CGqcQmO;
    BCMecE0 = (676 - 676);
    UTZiub = 0;
    i2dRGraeVBP = (130 - 129);
    double  MqIG2u;
    scanf ("%d", &WEKilh8);
    for (ekwPOZBtp6 = 0; WEKilh8 > ekwPOZBtp6; ekwPOZBtp6++) {
        for (EBGYf0EM = 0; 2 > EBGYf0EM; EBGYf0EM++) {
            scanf ("%d", &sz[ekwPOZBtp6][EBGYf0EM]);
            T8MF4fR2[BCMecE0] = sz[ekwPOZBtp6][EBGYf0EM];
            BCMecE0++;
        };
    }
    for (rlwoCkbrsPh = 1; (WEKilh8 +WEKilh8) >= rlwoCkbrsPh; rlwoCkbrsPh++) {
        for (yPFz3QZ = 0; (WEKilh8 +WEKilh8-rlwoCkbrsPh) > yPFz3QZ; yPFz3QZ++) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (T8MF4fR2[yPFz3QZ + 1] < T8MF4fR2[yPFz3QZ]) {
                DWHR2U7a = T8MF4fR2[yPFz3QZ + 1];
                T8MF4fR2[yPFz3QZ + 1] = T8MF4fR2[yPFz3QZ];
                T8MF4fR2[yPFz3QZ] = DWHR2U7a;
            };
        };
    }
    for (ekwPOZBtp6 = T8MF4fR2[0]; (T8MF4fR2[BCMecE0 -1] - 1) >= ekwPOZBtp6; ekwPOZBtp6++) {
        MqIG2u = ekwPOZBtp6 + 0.5;
        UTZiub = 0;
        for (CGqcQmO = 0; WEKilh8 > CGqcQmO; CGqcQmO++) {
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
            if (sz[CGqcQmO][0] > MqIG2u || MqIG2u > sz[CGqcQmO][1]) {
                UTZiub++;
            };
        }
        if (UTZiub == WEKilh8) {
            i2dRGraeVBP = 0;
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
            break;
        };
    }
    if (i2dRGraeVBP == 1) {
        printf ("%d %d", T8MF4fR2[0], T8MF4fR2[BCMecE0 -1]);
    }
    return 0;
}

