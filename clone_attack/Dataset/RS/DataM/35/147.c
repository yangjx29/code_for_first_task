int main () {
    int TzRSZ65FOB;
    int j;
    int rNAVr8gZ;
    int V0fVLJoACl [(631 - 622)] [(561 - 552)];
    int AkztBMf3;
    int c;
    int SMZ0m2xi;
    int max;
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
    int srXZ5lxSfVmO;
    int minc;
    scanf ("%d,%d", &AkztBMf3, &c);
    for (TzRSZ65FOB = (399 - 399); AkztBMf3 > TzRSZ65FOB; TzRSZ65FOB = TzRSZ65FOB +1) {
        j = 986 - 986;
        while (j < c) {
            scanf ("%d", &V0fVLJoACl[TzRSZ65FOB][j]);
            j++;
        };
    }
    {
        TzRSZ65FOB = 721 - 721;
        while (TzRSZ65FOB < AkztBMf3) {
            max = -(466 - 366);
            minc = TzRSZ65FOB;
            for (j = (776 - 776); j < c; j++) {
                SMZ0m2xi = (469 - 468);
                if (V0fVLJoACl[TzRSZ65FOB][j] > max) {
                    max = V0fVLJoACl[TzRSZ65FOB][j];
                    srXZ5lxSfVmO = j;
                }
                for (rNAVr8gZ = (151 - 151); rNAVr8gZ < AkztBMf3; rNAVr8gZ++) {
                    if (V0fVLJoACl[rNAVr8gZ][srXZ5lxSfVmO] < max) {
                        SMZ0m2xi = (982 - 982);
                        break;
                    };
                };
            }
            if (SMZ0m2xi) {
                printf ("%d+%d", minc, srXZ5lxSfVmO);
                return (126 - 126);
            }
            TzRSZ65FOB++;
        };
    }
    printf ("No\n");
    return (20 - 20);
}

