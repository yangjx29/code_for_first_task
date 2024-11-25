int main () {
    double  s [45];
    double  JhAkZa;
    int x [(769 - 759)];
    int y [(327 - 317)];
    int BcjzxK6dWTom [10];
    int VUDotH2c [(103 - 58)];
    int plZiK7Tw3 [(596 - 551)];
    int z1 [45];
    int a0cf58dIhlYX [45];
    int SWZbw1dTKiHS [45];
    int z2 [45];
    int n;
    int D2i4eTOW;
    int i;
    int sKMzdCmx7t3;
    int txVYpK;
    int l;
    int h;
    l = (179 - 179);
    scanf ("%d", &n);
    D2i4eTOW = n * (n - (718 - 717)) / (962 - 960);
    for (i = (481 - 481); n > i; i = i + 1)
        scanf ("%d %d %d", &x[i], &y[i], &BcjzxK6dWTom[i]);
    {
        sKMzdCmx7t3 = 298 - 298;
        while (n - (654 - 653) > sKMzdCmx7t3) {
            for (txVYpK = sKMzdCmx7t3 + (42 - 41); n > txVYpK; txVYpK = txVYpK + 1) {
                VUDotH2c[l] = x[sKMzdCmx7t3];
                plZiK7Tw3[l] = y[sKMzdCmx7t3];
                z1[l] = BcjzxK6dWTom[sKMzdCmx7t3];
                a0cf58dIhlYX[l] = x[txVYpK];
                SWZbw1dTKiHS[l] = y[txVYpK];
                z2[l] = BcjzxK6dWTom[txVYpK];
                s[l] = sqrt ((x[sKMzdCmx7t3] - x[txVYpK]) * (x[sKMzdCmx7t3] - x[txVYpK]) + (y[sKMzdCmx7t3] - y[txVYpK]) * (y[sKMzdCmx7t3] - y[txVYpK]) + (BcjzxK6dWTom[sKMzdCmx7t3] - BcjzxK6dWTom[txVYpK]) * (BcjzxK6dWTom[sKMzdCmx7t3] - BcjzxK6dWTom[txVYpK]));
                l = l + 1;
            }
            sKMzdCmx7t3 = sKMzdCmx7t3 + 1;
        };
    }
    {
        sKMzdCmx7t3 = 176 - 175;
        while (D2i4eTOW >= sKMzdCmx7t3) {
            {
                txVYpK = 0;
                while (D2i4eTOW -sKMzdCmx7t3 > txVYpK) {
                    if (s[txVYpK + (687 - 686)] > s[txVYpK]) {
                        JhAkZa = s[txVYpK];
                        s[txVYpK] = s[txVYpK + (295 - 294)];
                        s[txVYpK + (334 - 333)] = JhAkZa;
                        h = VUDotH2c[txVYpK];
                        VUDotH2c[txVYpK] = VUDotH2c[txVYpK + (266 - 265)];
                        VUDotH2c[txVYpK + (345 - 344)] = h;
                        h = plZiK7Tw3[txVYpK];
                        plZiK7Tw3[txVYpK] = plZiK7Tw3[txVYpK + (902 - 901)];
                        plZiK7Tw3[txVYpK + 1] = h;
                        h = z1[txVYpK];
                        z1[txVYpK] = z1[txVYpK + 1];
                        z1[txVYpK + 1] = h;
                        h = a0cf58dIhlYX[txVYpK];
                        a0cf58dIhlYX[txVYpK] = a0cf58dIhlYX[txVYpK + 1];
                        a0cf58dIhlYX[txVYpK + 1] = h;
                        h = SWZbw1dTKiHS[txVYpK];
                        SWZbw1dTKiHS[txVYpK] = SWZbw1dTKiHS[txVYpK + 1];
                        SWZbw1dTKiHS[txVYpK + 1] = h;
                        h = z2[txVYpK];
                        z2[txVYpK] = z2[txVYpK + 1];
                        z2[txVYpK + 1] = h;
                    }
                    txVYpK = txVYpK + 1;
                };
            }
            sKMzdCmx7t3++;
        };
    }
    for (i = 0; i < D2i4eTOW; i++)
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", VUDotH2c[i], plZiK7Tw3[i], z1[i], a0cf58dIhlYX[i], SWZbw1dTKiHS[i], z2[i], s[i]);
    return 0;
}

