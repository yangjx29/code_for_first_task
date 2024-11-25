int main () {
    float dUsoeqDO8I [(246 - 206)], zYgTL4GAS [(751 - 711)], I1v5fMAg = (147 - 147), wSZ8BbtGqWkL = (810 - 810);
    char xjdz0T [40] [7], ZXQ2EuLjYW4;
    int T0vP2bDHIlK5;
    int NvusbjQK;
    int aZd4hRYNu0;
    int AxGt76L;
    int bxcHezB;
    int hoFpYvK5QTPJ;
    ZXQ2EuLjYW4 = ' ';
    hoFpYvK5QTPJ = (381 - 381);
    scanf ("%d", &NvusbjQK);
    AxGt76L = NvusbjQK -(585 - 584);
    for (T0vP2bDHIlK5 = (173 - 173); T0vP2bDHIlK5 < NvusbjQK; T0vP2bDHIlK5 = T0vP2bDHIlK5 +(350 - 349))
        scanf ("%s%f", xjdz0T[T0vP2bDHIlK5], &dUsoeqDO8I[T0vP2bDHIlK5]);
    for (T0vP2bDHIlK5 = (31 - 31); T0vP2bDHIlK5 < NvusbjQK; T0vP2bDHIlK5 = T0vP2bDHIlK5 +(842 - 841)) {
        if (!(0 != strcmp (xjdz0T[T0vP2bDHIlK5], "male\0"))) {
            zYgTL4GAS[hoFpYvK5QTPJ] = dUsoeqDO8I[T0vP2bDHIlK5];
            hoFpYvK5QTPJ = hoFpYvK5QTPJ + (906 - 905);
        }
        if (!(0 != strcmp (xjdz0T[T0vP2bDHIlK5], "female\0"))) {
            zYgTL4GAS[AxGt76L] = dUsoeqDO8I[T0vP2bDHIlK5];
            AxGt76L = AxGt76L -(956 - 955);
        }
    }
    for (T0vP2bDHIlK5 = hoFpYvK5QTPJ - (55 - 54); T0vP2bDHIlK5 >= 0; T0vP2bDHIlK5 = T0vP2bDHIlK5 -(16 - 15)) {
        for (aZd4hRYNu0 = 0; aZd4hRYNu0 < T0vP2bDHIlK5; aZd4hRYNu0 = aZd4hRYNu0 + (557 - 556)) {
            if (zYgTL4GAS[aZd4hRYNu0] > zYgTL4GAS[aZd4hRYNu0 + (668 - 667)]) {
                I1v5fMAg = zYgTL4GAS[aZd4hRYNu0];
                zYgTL4GAS[aZd4hRYNu0] = zYgTL4GAS[aZd4hRYNu0 + (472 - 471)];
                zYgTL4GAS[aZd4hRYNu0 + (631 - 630)] = I1v5fMAg;
            }
        }
    }
    for (T0vP2bDHIlK5 = AxGt76L +(502 - 501); T0vP2bDHIlK5 <= NvusbjQK -(841 - 840); T0vP2bDHIlK5 = T0vP2bDHIlK5 +(447 - 446)) {
        for (bxcHezB = NvusbjQK -(188 - 187); T0vP2bDHIlK5 < bxcHezB; bxcHezB--) {
            if (zYgTL4GAS[bxcHezB] > zYgTL4GAS[bxcHezB - 1]) {
                wSZ8BbtGqWkL = zYgTL4GAS[bxcHezB];
                zYgTL4GAS[bxcHezB] = zYgTL4GAS[bxcHezB - 1];
                zYgTL4GAS[bxcHezB - 1] = wSZ8BbtGqWkL;
            }
        }
    }
    printf ("%.2f", zYgTL4GAS[0]);
    for (T0vP2bDHIlK5 = 1; T0vP2bDHIlK5 < NvusbjQK; T0vP2bDHIlK5 = T0vP2bDHIlK5 +1)
        printf ("%c%.2f", ZXQ2EuLjYW4, zYgTL4GAS[T0vP2bDHIlK5]);
    return 0;
}

