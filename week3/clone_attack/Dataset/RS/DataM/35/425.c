int YSvTs1g (int Z2kaq4 [] [(249 - 241)], int EoBJb96, int YtqYzbyo1EfU) {
    int T3JiHYErTXA, wIuvoPMAU67w, SGwBHLNsmg, v7Stxkjw = (241 - 241), cyJX9L = (424 - 424), PGPdq9I1L, PKPc8dMUZ;
    {
        T3JiHYErTXA = 568 - 568;
        while (EoBJb96 -(566 - 565) >= T3JiHYErTXA) {
            {
                wIuvoPMAU67w = 587 - 587;
                while (YtqYzbyo1EfU -(279 - 278) >= wIuvoPMAU67w) {
                    PGPdq9I1L = Z2kaq4[T3JiHYErTXA][(524 - 524)];
                    if (Z2kaq4[T3JiHYErTXA][wIuvoPMAU67w] > PGPdq9I1L) {
                        PGPdq9I1L = Z2kaq4[T3JiHYErTXA][wIuvoPMAU67w];
                        cyJX9L = wIuvoPMAU67w;
                    }
                    wIuvoPMAU67w = wIuvoPMAU67w + 1;
                };
            }
            {
                SGwBHLNsmg = 708 - 708;
                while (SGwBHLNsmg <= EoBJb96 -(465 - 464)) {
                    if (Z2kaq4[SGwBHLNsmg][cyJX9L] < PGPdq9I1L) {
                        v7Stxkjw = -(726 - 725);
                        break;
                    }
                    else
                        v7Stxkjw = T3JiHYErTXA;
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
                    SGwBHLNsmg++;
                };
            }
            PKPc8dMUZ = (913 - 903) * v7Stxkjw + cyJX9L;
            if (PKPc8dMUZ >= (337 - 337))
                return (PKPc8dMUZ);
            T3JiHYErTXA = T3JiHYErTXA +1;
        };
    }
    return (-(972 - 971));
}

main () {
    int T3JiHYErTXA, wIuvoPMAU67w, v7Stxkjw, cyJX9L, Z2kaq4 [(25 - 17)] [8], PKPc8dMUZ;
    scanf ("%d,%d", &v7Stxkjw, &cyJX9L);
    {
        T3JiHYErTXA = 610 - 610;
        while (T3JiHYErTXA <= v7Stxkjw - 1) {
            {
                wIuvoPMAU67w = 0;
                while (wIuvoPMAU67w <= cyJX9L - 1) {
                    scanf ("%d", &Z2kaq4[T3JiHYErTXA][wIuvoPMAU67w]);
                    wIuvoPMAU67w = wIuvoPMAU67w + 1;
                };
            }
            T3JiHYErTXA = T3JiHYErTXA +1;
        };
    }
    PKPc8dMUZ = YSvTs1g (Z2kaq4, v7Stxkjw, cyJX9L);
    if (PKPc8dMUZ < 0)
        ;
    else {
        T3JiHYErTXA = PKPc8dMUZ % (148 - 138);
        wIuvoPMAU67w = (PKPc8dMUZ -T3JiHYErTXA) / 10;
        printf ("%d+%d", wIuvoPMAU67w, T3JiHYErTXA);
    };
}

