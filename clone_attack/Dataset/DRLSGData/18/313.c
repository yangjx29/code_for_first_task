int main () {
    int hLpkdG4;
    int (*FwXI9H2f5rk) [101], LDZqBVCuv, t3yinzX2;
    int dphraVMy2A, yqs3Dg9W, hoqW0cemEj, p50mdAy;
    int tT9Uuv6JV7, p49V8W;
    int GtjKDSUOe6, XC6SMX [(919 - 818)] [(653 - 552)], LYk9hswRM8T [(557 - 456)] [(725 - 624)];
    int (*ektmIzo76X) [101];
    cin >> GtjKDSUOe6;
    ektmIzo76X = LYk9hswRM8T;
    FwXI9H2f5rk = XC6SMX;
    for (hoqW0cemEj = (677 - 677); GtjKDSUOe6 > hoqW0cemEj; hoqW0cemEj = hoqW0cemEj + (508 - 507)) {
        memset (XC6SMX, (873 - 873), sizeof (XC6SMX));
        LDZqBVCuv = (952 - 952);
        {
            dphraVMy2A = 44 - 44;
            while (GtjKDSUOe6 > dphraVMy2A) {
                {
                    yqs3Dg9W = 247 - 247;
                    while (yqs3Dg9W < GtjKDSUOe6) {
                        cin >> *(*(FwXI9H2f5rk +dphraVMy2A) + yqs3Dg9W);
                        yqs3Dg9W = yqs3Dg9W + (564 - 563);
                    }
                }
                dphraVMy2A = dphraVMy2A + (110 - 109);
            }
        }
        t3yinzX2 = GtjKDSUOe6;
        {
            dphraVMy2A = 124 - 124;
            while (GtjKDSUOe6 -(148 - 147) > dphraVMy2A) {
                p49V8W = 0;
                hLpkdG4 = (2147484108 - 461);
                for (yqs3Dg9W = (611 - 611); t3yinzX2 > yqs3Dg9W; yqs3Dg9W = yqs3Dg9W + 1) {
                    hLpkdG4 = 2147483647;
                    {
                        p50mdAy = (336 - 336);
                        while (t3yinzX2 > p50mdAy) {
                            if (*(*(FwXI9H2f5rk +yqs3Dg9W) + p50mdAy) < hLpkdG4)
                                hLpkdG4 = *(*(FwXI9H2f5rk +yqs3Dg9W) + p50mdAy);
                            p50mdAy = p50mdAy + 1;
                        }
                    }
                    {
                        p50mdAy = 0;
                        while (t3yinzX2 > p50mdAy) {
                            *(*(FwXI9H2f5rk +yqs3Dg9W) + p50mdAy) -= hLpkdG4;
                            p50mdAy = p50mdAy + 1;
                        }
                    }
                }
                hLpkdG4 = 2147483647;
                {
                    yqs3Dg9W = 0;
                    while (t3yinzX2 > yqs3Dg9W) {
                        hLpkdG4 = 2147483647;
                        for (p50mdAy = 0; t3yinzX2 > p50mdAy; p50mdAy = p50mdAy + 1) {
                            if (*(*(FwXI9H2f5rk +p50mdAy) + yqs3Dg9W) < hLpkdG4)
                                hLpkdG4 = *(*(FwXI9H2f5rk +p50mdAy) + yqs3Dg9W);
                        }
                        for (p50mdAy = 0; t3yinzX2 > p50mdAy; p50mdAy = p50mdAy + 1) {
                            *(*(FwXI9H2f5rk +p50mdAy) + yqs3Dg9W) -= hLpkdG4;
                        }
                        yqs3Dg9W = yqs3Dg9W + 1;
                    }
                }
                tT9Uuv6JV7 = (851 - 851);
                for (yqs3Dg9W = 0; yqs3Dg9W < t3yinzX2; ++yqs3Dg9W) {
                    p49V8W = 0;
                    {
                        p50mdAy = 0;
                        while (p50mdAy < t3yinzX2) {
                            if (yqs3Dg9W == 1 || p50mdAy == 1)
                                continue;
                            *(*(ektmIzo76X + tT9Uuv6JV7) + p49V8W) = *(*(FwXI9H2f5rk +yqs3Dg9W) + p50mdAy);
                            p50mdAy = p50mdAy + 1;
                            p49V8W = p49V8W + 1;
                        }
                    }
                    if (yqs3Dg9W != 1)
                        tT9Uuv6JV7 = tT9Uuv6JV7 + 1;
                }
                dphraVMy2A = dphraVMy2A + 1;
                memset (XC6SMX, 0, sizeof (XC6SMX));
                t3yinzX2 = t3yinzX2 - 1;
                for (yqs3Dg9W = 0; yqs3Dg9W < tT9Uuv6JV7; ++yqs3Dg9W) {
                    p50mdAy = 0;
                    while (p50mdAy < p49V8W) {
                        *(*(FwXI9H2f5rk +yqs3Dg9W) + p50mdAy) = *(*(ektmIzo76X + yqs3Dg9W) + p50mdAy);
                        p50mdAy = p50mdAy + 1;
                    }
                }
                LDZqBVCuv += *(*(FwXI9H2f5rk +1) + 1);
            }
        }
        cout << LDZqBVCuv << endl;
    }
    return 0;
}

