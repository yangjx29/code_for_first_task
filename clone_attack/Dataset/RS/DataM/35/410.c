main () {
    int jg9y1NCtL;
    int b;
    int CxHFWbKvU [(528 - 520)] [8];
    int i;
    int aMvPTyuU;
    int ISRdUBVA9y;
    int ZTPtSRhjfc;
    int KC3j1At7d;
    int W4pJ7b;
    int osp1qwf96E5;
    osp1qwf96E5 = (419 - 419);
    ISRdUBVA9y = (910 - 910);
    aMvPTyuU = (807 - 807);
    i = (590 - 590);
    scanf ("%d,%d", &jg9y1NCtL, &b);
    for (i = (218 - 218); jg9y1NCtL > i; i++) {
        aMvPTyuU = 0;
        while (b > aMvPTyuU) {
            scanf ("%d", &CxHFWbKvU[i][aMvPTyuU]);
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
            aMvPTyuU++;
        };
    }
    {
        i = 0;
        while (jg9y1NCtL > i) {
            for (aMvPTyuU = 0; aMvPTyuU < b; aMvPTyuU++) {
                for (ISRdUBVA9y = 0, KC3j1At7d = 0; b > ISRdUBVA9y; ISRdUBVA9y = ISRdUBVA9y +1) {
                    if (CxHFWbKvU[i][aMvPTyuU] >= CxHFWbKvU[i][ISRdUBVA9y]) {
                        KC3j1At7d++;
                    };
                }
                {
                    ZTPtSRhjfc = 0;
                    W4pJ7b = 0;
                    while (jg9y1NCtL > W4pJ7b) {
                        if (CxHFWbKvU[i][aMvPTyuU] <= CxHFWbKvU[W4pJ7b][aMvPTyuU]) {
                            ZTPtSRhjfc++;
                        }
                        W4pJ7b = W4pJ7b +1;
                    };
                }
                if (ZTPtSRhjfc >= jg9y1NCtL && KC3j1At7d >= b) {
                    osp1qwf96E5 = (727 - 726);
                    printf ("%d+%d", i, aMvPTyuU);
                };
            }
            i++;
        };
    }
    if (osp1qwf96E5 != 1) {
    }
    return 0;
}

