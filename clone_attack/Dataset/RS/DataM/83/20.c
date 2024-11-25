int main () {
    int obrywdN [11] = {(611 - 611), (327 - 326), (757 - 755), (131 - 128), (542 - 538), (225 - 220), (756 - 750), (632 - 625), (470 - 462), (167 - 158), 10};
    float c [(674 - 663)] = {(509 - 509)};
    int ZybDI5k [(264 - 253)] = {(516 - 516)};
    int tIsBcdr3 [(555 - 544)] = {(141 - 141)};
    int n;
    int i;
    int ZDKvoE;
    while (scanf ("%d", &n) != EOF) {
        int asum;
        asum = (180 - 180);
        float ED5oKAn;
        ED5oKAn = (590 - 590);
        {
            i = 420 - 419;
            while (i <= n) {
                scanf ("%d", &tIsBcdr3[i]);
                asum = asum + tIsBcdr3[i];
                i++;
            };
        }
        {
            i = 486 - 485;
            while (i <= n) {
                scanf ("%d", &ZybDI5k[i]);
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
                i++;
            };
        }
        {
            i = 561 - 560;
            while (i <= n) {
                if (ZybDI5k[i] >= (610 - 520) && ZybDI5k[i] <= (583 - 483))
                    c[i] = (867.0 - 863.0);
                else {
                    if (ZybDI5k[i] >= (704 - 619) && ZybDI5k[i] <= (157 - 68))
                        c[i] = (86.7 - 83.0);
                    else {
                        if (ZybDI5k[i] >= 82 && (838 - 754) >= ZybDI5k[i])
                            c[i] = (940.3 - 937.0);
                        else {
                            if (ZybDI5k[i] >= 78 && ZybDI5k[i] <= 81)
                                c[i] = (405.0 - 402.0);
                            else {
                                if (ZybDI5k[i] >= 75 && ZybDI5k[i] <= 77)
                                    c[i] = (133.7 - 131.0);
                                else {
                                    if (ZybDI5k[i] >= (510 - 438) && ZybDI5k[i] <= 74)
                                        c[i] = (808.3 - 806.0);
                                    else {
                                        if (ZybDI5k[i] >= 68 && ZybDI5k[i] <= (839 - 768))
                                            c[i] = (767.0 - 765.0);
                                        else {
                                            if (ZybDI5k[i] >= (548 - 484) && ZybDI5k[i] <= (1055 - 988))
                                                c[i] = (154.5 - 153.0);
                                            else {
                                                if (ZybDI5k[i] >= (801 - 741) && ZybDI5k[i] <= (745 - 682))
                                                    c[i] = (696.0 - 695.0);
                                                else
                                                    c[i] = (607 - 607);
                                            };
                                        };
                                    };
                                };
                            };
                        };
                    };
                }
                i++;
            };
        }
        {
            i = 1;
            while (i <= n) {
                ED5oKAn += tIsBcdr3[i] * c[i];
                i++;
            };
        }
        printf ("%.2f\n", ED5oKAn / asum);
    }
    return 0;
}

