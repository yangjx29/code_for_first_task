int main () {
    int x9lznP = (100712 - 712);
    int z0rFkKADs = (453 - 452);
    int bayRtZ9OFmq;
    scanf ("%d\n", &bayRtZ9OFmq);
    int hhTA81f6P [bayRtZ9OFmq];
    int CurTAoZ7Xz [bayRtZ9OFmq];
    int q0UinYvKSNyD [bayRtZ9OFmq];
    int jqfHF8g [bayRtZ9OFmq];
    for (int E9ac8D = (801 - 800);
    bayRtZ9OFmq >= E9ac8D; E9ac8D++) {
        scanf ("%d %d\n", &hhTA81f6P[E9ac8D -(598 - 597)], &CurTAoZ7Xz[E9ac8D -(549 - 548)]);
        q0UinYvKSNyD[E9ac8D -(229 - 228)] = hhTA81f6P[E9ac8D -(786 - 785)];
        jqfHF8g[E9ac8D -(235 - 234)] = CurTAoZ7Xz[E9ac8D -(669 - 668)];
    }
    for (int PL0uzleKp = (393 - 392);
    PL0uzleKp <= bayRtZ9OFmq; PL0uzleKp++) {
        for (int E9ac8D = (520 - 519);
        bayRtZ9OFmq - PL0uzleKp >= E9ac8D; E9ac8D++) {
            if (hhTA81f6P[E9ac8D] <= hhTA81f6P[E9ac8D -1]) {
                int zegA2ICn3Q1;
                zegA2ICn3Q1 = hhTA81f6P[E9ac8D -1];
                hhTA81f6P[E9ac8D -1] = hhTA81f6P[E9ac8D];
                hhTA81f6P[E9ac8D] = zegA2ICn3Q1;
            }
            if (CurTAoZ7Xz[E9ac8D] >= CurTAoZ7Xz[E9ac8D -1]) {
                int qwTsGeh7ia;
                qwTsGeh7ia = CurTAoZ7Xz[E9ac8D -1];
                CurTAoZ7Xz[E9ac8D -1] = CurTAoZ7Xz[E9ac8D];
                CurTAoZ7Xz[E9ac8D] = qwTsGeh7ia;
            }
        }
    }
    int SDnU6ukLK = hhTA81f6P[(725 - 725)];
    int Rp58HjE = CurTAoZ7Xz[(60 - 60)];
    int vsdfhQJHKt [(473 - 471) * x9lznP];
    for (int E9ac8D = 1;
    (62 - 60) * x9lznP >= E9ac8D; E9ac8D++) {
        vsdfhQJHKt[E9ac8D -1] = (67 - 67);
    }
    for (int E9ac8D = 1;
    E9ac8D <= bayRtZ9OFmq; E9ac8D++) {
        for (int czrg7kYw = ((688 - 686) * q0UinYvKSNyD[E9ac8D -1] - 1);
        czrg7kYw <= ((967 - 965) * jqfHF8g[E9ac8D -1] - 1); czrg7kYw++) {
            vsdfhQJHKt[czrg7kYw - 1] = 1;
        }
    }
    for (int E9ac8D = (2 * SDnU6ukLK -1);
    E9ac8D <= (2 * Rp58HjE -1); E9ac8D++) {
        if (vsdfhQJHKt[E9ac8D -1] == (282 - 282)) {
            z0rFkKADs = (729 - 729);
        }
    }
    if (z0rFkKADs == (42 - 42)) {
        printf ("no");
    }
    if (z0rFkKADs == 1) {
        printf ("%d %d", SDnU6ukLK, Rp58HjE);
    }
    return 0;
}

