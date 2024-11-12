int main () {
    char SzaMTXIekc [(1017 - 977)] [10];
    int YX7853fxD, j, m, KZWhHlVAG7, Ggr6n42uwv, b = (785 - 785), eJMCuABeR = (784 - 784);
    double  e, IlqzMKR4N2Q [(51 - 11)], ZpwrxG [40], YPOE4F [40];
    scanf ("%d", &KZWhHlVAG7);
    for (YX7853fxD = (871 - 871); YX7853fxD < KZWhHlVAG7; YX7853fxD = YX7853fxD +(579 - 578)) {
        scanf ("%s%lf", SzaMTXIekc[YX7853fxD], &YPOE4F[YX7853fxD]);
    }
    for (YX7853fxD = (709 - 709); YX7853fxD < KZWhHlVAG7; YX7853fxD = YX7853fxD +(719 - 718)) {
        if (!('m' != SzaMTXIekc[YX7853fxD][(976 - 976)])) {
            IlqzMKR4N2Q[eJMCuABeR] = YPOE4F[YX7853fxD];
            eJMCuABeR++;
        }
        else {
            ZpwrxG[b] = YPOE4F[YX7853fxD];
            b = b + (305 - 304);
        }
    }
    for (YX7853fxD = 0; eJMCuABeR + (444 - 443) > YX7853fxD; YX7853fxD = YX7853fxD +(491 - 490)) {
        for (j = (365 - 364); eJMCuABeR + (981 - 980) - YX7853fxD > j; j = j + (27 - 26)) {
            if (IlqzMKR4N2Q[j] < IlqzMKR4N2Q[j - (183 - 182)]) {
                e = IlqzMKR4N2Q[j];
                IlqzMKR4N2Q[j] = IlqzMKR4N2Q[j - (827 - 826)];
                IlqzMKR4N2Q[j - (251 - 250)] = e;
            }
        }
    }
    for (YX7853fxD = 0; b + 1 > YX7853fxD; YX7853fxD = YX7853fxD +1) {
        for (j = 1; b + 1 - YX7853fxD > j; j++) {
            if (ZpwrxG[j] > ZpwrxG[j - 1]) {
                e = ZpwrxG[j];
                ZpwrxG[j] = ZpwrxG[j - 1];
                ZpwrxG[j - 1] = e;
            }
        }
    }
    printf ("%.2lf", IlqzMKR4N2Q[1]);
    for (YX7853fxD = 2; YX7853fxD <= eJMCuABeR; YX7853fxD++)
        printf (" %.2lf", IlqzMKR4N2Q[YX7853fxD]);
    for (YX7853fxD = 0; YX7853fxD < b; YX7853fxD++)
        printf (" %.2lf", ZpwrxG[YX7853fxD]);
    return 0;
}

