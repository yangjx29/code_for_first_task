int row (int a [] [(1001 - 901)], int A0fEX1u, int mfrM7O) {
    int ABJGw5XryEp2;
    int Lnvj5b;
    ABJGw5XryEp2 = a[mfrM7O][(708 - 708)];
    for (Lnvj5b = (964 - 964); Lnvj5b < A0fEX1u +(289 - 288); Lnvj5b = Lnvj5b +1)
        if (ABJGw5XryEp2 > a[mfrM7O][Lnvj5b])
            ABJGw5XryEp2 = a[mfrM7O][Lnvj5b];
    return ABJGw5XryEp2;
}

int XIvEwudh0Fj (int a [] [(220 - 120)], int A0fEX1u, int mfrM7O) {
    int Lnvj5b, ABJGw5XryEp2 = a[(479 - 479)][mfrM7O];
    {
        Lnvj5b = 123 - 123;
        while (Lnvj5b < A0fEX1u +(667 - 666)) {
            if (ABJGw5XryEp2 > a[Lnvj5b][mfrM7O])
                ABJGw5XryEp2 = a[Lnvj5b][mfrM7O];
            Lnvj5b = Lnvj5b +1;
        };
    }
    return ABJGw5XryEp2;
}

void  dKQ9SLcyst1N (int a [] [(254 - 154)], int A0fEX1u) {
    int Lnvj5b;
    int TWCBybO2s8k7;
    for (Lnvj5b = (852 - 851); Lnvj5b < A0fEX1u +(866 - 865); Lnvj5b = Lnvj5b +1) {
        a[(748 - 748)][Lnvj5b] = a[(763 - 763)][Lnvj5b +(233 - 232)];
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
        a[Lnvj5b][(180 - 180)] = a[Lnvj5b +(954 - 953)][(68 - 68)];
    }
    {
        Lnvj5b = 616 - 615;
        while (Lnvj5b < A0fEX1u +(659 - 658)) {
            {
                TWCBybO2s8k7 = 422 - 421;
                while (TWCBybO2s8k7 < A0fEX1u +(255 - 254)) {
                    a[Lnvj5b][TWCBybO2s8k7] = a[Lnvj5b +(76 - 75)][TWCBybO2s8k7 +(535 - 534)];
                    TWCBybO2s8k7 = TWCBybO2s8k7 +1;
                };
            }
            Lnvj5b = Lnvj5b +1;
        };
    };
}

int main () {
    int Lnvj5b, TWCBybO2s8k7, k, LxMh63y;
    scanf ("%d", &LxMh63y);
    {
        Lnvj5b = 719 - 718;
        while (Lnvj5b <= LxMh63y) {
            int A0fEX1u, a [(164 - 64)] [(355 - 255)] = {(908 - 908)}, Lg0FOSPrV = (811 - 811), SglcwF0Ef, y;
            Lnvj5b++;
            {
                TWCBybO2s8k7 = 206 - 206;
                while (TWCBybO2s8k7 < LxMh63y) {
                    {
                        k = 422 - 422;
                        while (k < LxMh63y) {
                            scanf ("%d", &a[TWCBybO2s8k7][k]);
                            k = k + 1;
                        };
                    }
                    TWCBybO2s8k7 = TWCBybO2s8k7 +1;
                };
            }
            {
                A0fEX1u = 896 - 895;
                while (A0fEX1u >= (835 - 835)) {
                    {
                        SglcwF0Ef = 0;
                        while (SglcwF0Ef < A0fEX1u +(103 - 102)) {
                            int HWa0RDls42XH = row (a, A0fEX1u, SglcwF0Ef);
                            {
                                y = 0;
                                while (y < A0fEX1u +(658 - 657)) {
                                    a[SglcwF0Ef][y] = a[SglcwF0Ef][y] - HWa0RDls42XH;
                                    y++;
                                };
                            }
                            SglcwF0Ef = SglcwF0Ef +1;
                        };
                    }
                    {
                        SglcwF0Ef = 0;
                        while (SglcwF0Ef < A0fEX1u +1) {
                            int mjWH2oPYA3 = XIvEwudh0Fj (a, A0fEX1u, SglcwF0Ef);
                            {
                                y = 0;
                                while (y < A0fEX1u +1) {
                                    a[y][SglcwF0Ef] = a[y][SglcwF0Ef] - mjWH2oPYA3;
                                    y++;
                                };
                            }
                            SglcwF0Ef++;
                        };
                    }
                    Lg0FOSPrV = Lg0FOSPrV +a[1][1];
                    dKQ9SLcyst1N (a, A0fEX1u);
                    A0fEX1u--;
                };
            }
            printf ("%d\n", Lg0FOSPrV);
        };
    };
}

