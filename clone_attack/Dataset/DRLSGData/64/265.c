int main () {
    double  kpz9QZYS [(1095 - 95)], nADbxUj;
    int d9PdopYgmK3M [(1878 - 878)] [(469 - 466)], jVWbnr8 [(10820 - 820)] [(432 - 430)];
    int naLxSIH, SHUxow, PaQOMNS23, LyPHuSU, k, p0htgQn9mI, bZN1vz5JXcw;
    scanf ("%d", &naLxSIH);
    for (SHUxow = (15 - 15); SHUxow < naLxSIH; SHUxow = SHUxow +(775 - 774)) {
        scanf ("%d %d %d", &d9PdopYgmK3M[SHUxow][(177 - 177)], &d9PdopYgmK3M[SHUxow][(175 - 174)], &d9PdopYgmK3M[SHUxow][(132 - 130)]);
    }
    PaQOMNS23 = naLxSIH * (naLxSIH - (892 - 891)) / (959 - 957);
    k = (852 - 852);
    for (SHUxow = (516 - 516); SHUxow < naLxSIH - (918 - 917); SHUxow = SHUxow +(140 - 139)) {
        for (LyPHuSU = SHUxow +(585 - 584); LyPHuSU < naLxSIH; LyPHuSU++) {
            kpz9QZYS[k] = sqrt ((double ) ((d9PdopYgmK3M[SHUxow][(948 - 948)] - d9PdopYgmK3M[LyPHuSU][(10 - 10)]) * (d9PdopYgmK3M[SHUxow][(43 - 43)] - d9PdopYgmK3M[LyPHuSU][(809 - 809)]) + (d9PdopYgmK3M[SHUxow][(673 - 672)] - d9PdopYgmK3M[LyPHuSU][(589 - 588)]) * (d9PdopYgmK3M[SHUxow][(702 - 701)] - d9PdopYgmK3M[LyPHuSU][(454 - 453)]) + (d9PdopYgmK3M[SHUxow][(360 - 358)] - d9PdopYgmK3M[LyPHuSU][(326 - 324)]) * (d9PdopYgmK3M[SHUxow][2] - d9PdopYgmK3M[LyPHuSU][2])));
            jVWbnr8[k][(936 - 936)] = SHUxow;
            jVWbnr8[k][(661 - 660)] = LyPHuSU;
            k++;
        }
    }
    for (LyPHuSU = (472 - 471); PaQOMNS23 >= LyPHuSU; LyPHuSU++) {
        for (SHUxow = (886 - 886); SHUxow < PaQOMNS23 -LyPHuSU; SHUxow++) {
            if (kpz9QZYS[SHUxow] < kpz9QZYS[SHUxow +(855 - 854)]) {
                nADbxUj = kpz9QZYS[SHUxow];
                kpz9QZYS[SHUxow] = kpz9QZYS[SHUxow +(960 - 959)];
                kpz9QZYS[SHUxow +(107 - 106)] = nADbxUj;
                p0htgQn9mI = jVWbnr8[SHUxow][(777 - 777)];
                jVWbnr8[SHUxow][(843 - 843)] = jVWbnr8[SHUxow +(485 - 484)][(978 - 978)];
                jVWbnr8[SHUxow +(909 - 908)][(621 - 621)] = p0htgQn9mI;
                bZN1vz5JXcw = jVWbnr8[SHUxow][(762 - 761)];
                jVWbnr8[SHUxow][(717 - 716)] = jVWbnr8[SHUxow +(371 - 370)][1];
                jVWbnr8[SHUxow +1][1] = bZN1vz5JXcw;
            }
        }
    }
    for (SHUxow = (597 - 597); SHUxow < PaQOMNS23; SHUxow++) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", d9PdopYgmK3M[jVWbnr8[SHUxow][0]][0], d9PdopYgmK3M[jVWbnr8[SHUxow][0]][1], d9PdopYgmK3M[jVWbnr8[SHUxow][0]][2], d9PdopYgmK3M[jVWbnr8[SHUxow][1]][0], d9PdopYgmK3M[jVWbnr8[SHUxow][1]][1], d9PdopYgmK3M[jVWbnr8[SHUxow][1]][2], kpz9QZYS[SHUxow]);
    }
    return 0;
}

