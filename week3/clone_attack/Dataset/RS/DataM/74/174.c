void  main () {
    int fSElfm;
    int mZOaEKvwl9;
    int uuFqojMR;
    int z0eGH3xO;
    int huyo1hj;
    int n;
    int RyV1XsvU;
    int qt2bs9LS;
    int eriLo5Hnz;
    int L7yu4c9AYi;
    fSElfm = (722 - 722);
    mZOaEKvwl9 = (539 - 539);
    uuFqojMR = (414 - 414);
    z0eGH3xO = (360 - 360);
    int I2JynVgMpaD [10] = {(463 - 463)};
    scanf ("%d %d", &qt2bs9LS, &eriLo5Hnz);
    for (n = qt2bs9LS; eriLo5Hnz >= n; n = n + 1) {
        {
            huyo1hj = 2;
            while (huyo1hj < n) {
                if (n % huyo1hj == 0)
                    fSElfm = fSElfm + 1;
                else
                    continue;
                huyo1hj = huyo1hj + 1;
            };
        }
        if (!(0 != fSElfm)) {
            L7yu4c9AYi = n;
            {
                huyo1hj = 0;
                while (9 >= huyo1hj) {
                    I2JynVgMpaD[huyo1hj] = L7yu4c9AYi % 10;
                    L7yu4c9AYi = L7yu4c9AYi / 10;
                    huyo1hj++;
                };
            }
            {
                huyo1hj = 9;
                while (huyo1hj >= 0) {
                    if (!(0 == I2JynVgMpaD[huyo1hj])) {
                        RyV1XsvU = huyo1hj;
                        break;
                    }
                    huyo1hj--;
                };
            }
            {
                huyo1hj = 0;
                while (huyo1hj <= RyV1XsvU) {
                    if (I2JynVgMpaD[huyo1hj] != I2JynVgMpaD[RyV1XsvU -huyo1hj])
                        mZOaEKvwl9++;
                    huyo1hj++;
                };
            }
            if (mZOaEKvwl9 == 0) {
                if (uuFqojMR == 0) {
                    uuFqojMR++;
                    printf ("%d", n);
                }
                else
                    printf (",%d", n);
                z0eGH3xO++;
            };
        }
        {
            huyo1hj = 0;
            while (huyo1hj <= 9) {
                I2JynVgMpaD[huyo1hj] = 0;
                huyo1hj++;
            };
        }
        RyV1XsvU = 0;
        fSElfm = 0;
        mZOaEKvwl9 = 0;
    }
    if (z0eGH3xO == 0)
        ;
}

