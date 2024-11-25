int main () {
    int ZI5Zm01, i, lwfUkeZ6DKY, pxigujZnXzK, z24taVg3pX, qfRgjZNA2OU7, VJd8j4yXN [(451 - 351)] [100], result;
    scanf ("%d", &ZI5Zm01);
    lwfUkeZ6DKY = ZI5Zm01;
    {
        i = 530 - 530;
        while (ZI5Zm01 > i) {
            i = i + 1;
            result = (819 - 819);
            {
                pxigujZnXzK = 102 - 102;
                while (ZI5Zm01 > pxigujZnXzK) {
                    for (z24taVg3pX = (318 - 318); ZI5Zm01 > z24taVg3pX; z24taVg3pX = z24taVg3pX + 1)
                        scanf ("%d", &VJd8j4yXN[pxigujZnXzK][z24taVg3pX]);
                    pxigujZnXzK = pxigujZnXzK + 1;
                };
            }
            while (1 < ZI5Zm01) {
                {
                    pxigujZnXzK = 977 - 977;
                    while (ZI5Zm01 > pxigujZnXzK) {
                        qfRgjZNA2OU7 = VJd8j4yXN[pxigujZnXzK][0];
                        {
                            z24taVg3pX = 0;
                            while (ZI5Zm01 > z24taVg3pX) {
                                if (VJd8j4yXN[pxigujZnXzK][z24taVg3pX] < qfRgjZNA2OU7)
                                    qfRgjZNA2OU7 = VJd8j4yXN[pxigujZnXzK][z24taVg3pX];
                                z24taVg3pX = z24taVg3pX + 1;
                            };
                        }
                        {
                            z24taVg3pX = 0;
                            while (ZI5Zm01 > z24taVg3pX) {
                                VJd8j4yXN[pxigujZnXzK][z24taVg3pX] = VJd8j4yXN[pxigujZnXzK][z24taVg3pX] - qfRgjZNA2OU7;
                                z24taVg3pX = z24taVg3pX + 1;
                            };
                        }
                        pxigujZnXzK = pxigujZnXzK + 1;
                    };
                }
                {
                    z24taVg3pX = 0;
                    while (ZI5Zm01 > z24taVg3pX) {
                        qfRgjZNA2OU7 = VJd8j4yXN[0][z24taVg3pX];
                        {
                            pxigujZnXzK = 0;
                            while (ZI5Zm01 > pxigujZnXzK) {
                                if (qfRgjZNA2OU7 > VJd8j4yXN[pxigujZnXzK][z24taVg3pX])
                                    qfRgjZNA2OU7 = VJd8j4yXN[pxigujZnXzK][z24taVg3pX];
                                pxigujZnXzK = pxigujZnXzK + 1;
                            };
                        }
                        {
                            pxigujZnXzK = 0;
                            while (pxigujZnXzK < ZI5Zm01) {
                                VJd8j4yXN[pxigujZnXzK][z24taVg3pX] -= qfRgjZNA2OU7;
                                pxigujZnXzK = pxigujZnXzK + 1;
                            };
                        }
                        z24taVg3pX = z24taVg3pX + 1;
                    };
                }
                ZI5Zm01--;
                result = result + VJd8j4yXN[1][1];
                {
                    pxigujZnXzK = 0;
                    while (ZI5Zm01 -1 > pxigujZnXzK) {
                        {
                            z24taVg3pX = 0;
                            while (z24taVg3pX < ZI5Zm01 -1) {
                                if (pxigujZnXzK == 0 && z24taVg3pX > 0)
                                    VJd8j4yXN[pxigujZnXzK][z24taVg3pX] = VJd8j4yXN[pxigujZnXzK][z24taVg3pX + 1];
                                else if (z24taVg3pX == 0 && pxigujZnXzK > 0)
                                    VJd8j4yXN[pxigujZnXzK][z24taVg3pX] = VJd8j4yXN[pxigujZnXzK + 1][z24taVg3pX];
                                else if (pxigujZnXzK > 0 && z24taVg3pX > 0)
                                    VJd8j4yXN[pxigujZnXzK][z24taVg3pX] = VJd8j4yXN[pxigujZnXzK + 1][z24taVg3pX + 1];
                                z24taVg3pX = z24taVg3pX + 1;
                            };
                        }
                        pxigujZnXzK = pxigujZnXzK + 1;
                    };
                };
            }
            printf ("%d\n", result);
            ZI5Zm01 = lwfUkeZ6DKY;
        };
    }
    return 0;
}

