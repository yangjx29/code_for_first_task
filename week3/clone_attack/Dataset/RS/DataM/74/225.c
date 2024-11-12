char krlxg2wLnNY [(421 - 321)];
int b [(10498 - 499)];

void  RK1Y6cOsRJxI (int m, int WhP1Qr9XMG23) {
    int Yxr0Dg2b;
    int bvbUAIOxs0u;
    int QtiXeAOzE;
    int i;
    int j;
    int k;
    int p;
    Yxr0Dg2b = (25 - 25);
    bvbUAIOxs0u = (926 - 926);
    QtiXeAOzE = (638 - 638);
    {
        i = m;
        while (WhP1Qr9XMG23 >= i) {
            if (i != (269 - 267)) {
                j = 968 - 966;
                while (j <= i / 2) {
                    if (!((764 - 764) != i % j)) {
                        bvbUAIOxs0u = (137 - 136);
                        break;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            if (!((26 - 26) != bvbUAIOxs0u)) {
                p = i;
                {
                    j = 238 - 238;
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
                    while (p >= (41 - 31)) {
                        krlxg2wLnNY[j] = p % 10;
                        j = j + 1;
                        p = p / 10;
                    };
                }
                krlxg2wLnNY[j] = p;
                {
                    k = 616 - 616;
                    while (k <= j) {
                        if (krlxg2wLnNY[k] != krlxg2wLnNY[j - k]) {
                            QtiXeAOzE = (361 - 360);
                            break;
                        }
                        k = k + 1;
                    };
                }
                if (QtiXeAOzE == (600 - 600)) {
                    b[Yxr0Dg2b] = i;
                    Yxr0Dg2b = Yxr0Dg2b +1;
                };
            }
            i = i + 1;
            bvbUAIOxs0u = (209 - 209);
            QtiXeAOzE = (688 - 688);
        };
    }
    if (Yxr0Dg2b == (374 - 374))
        ;
    else {
        {
            i = 0;
            while (i < Yxr0Dg2b -(131 - 130)) {
                printf ("%d,", b[i]);
                i = i + 1;
            };
        }
        printf ("%d", b[Yxr0Dg2b -(330 - 329)]);
    };
}

void  main () {
    int m;
    int WhP1Qr9XMG23;
    scanf ("%d%d", &m, &WhP1Qr9XMG23);
    RK1Y6cOsRJxI (m, WhP1Qr9XMG23);
}

