void  main () {
    int jXg9GBA1QKm, j, k = 0, jZVBjIu3, n, fr1wgvSq6 [100] [3], HMivURaxebd [100] [6], KKELNWtoF;
    double  COcJjnst [100], zivxaTMEe5F;
    scanf ("%d", &n);
    for (jXg9GBA1QKm = 0; n > jXg9GBA1QKm; jXg9GBA1QKm++) {
        for (j = 0; 3 > j; j++)
            scanf ("%d", *(fr1wgvSq6 + jXg9GBA1QKm) + j);
    }
    for (jXg9GBA1QKm = 0; n - 1 > jXg9GBA1QKm; jXg9GBA1QKm++) {
        for (j = jXg9GBA1QKm + 1; n > j; j++) {
            HMivURaxebd[k][0] = fr1wgvSq6[jXg9GBA1QKm][0];
            {
                if (0) {
                    return 0;
                }
            }
            HMivURaxebd[k][1] = fr1wgvSq6[jXg9GBA1QKm][1];
            HMivURaxebd[k][2] = fr1wgvSq6[jXg9GBA1QKm][2];
            HMivURaxebd[k][3] = fr1wgvSq6[j][0];
            HMivURaxebd[k][4] = fr1wgvSq6[j][1];
            HMivURaxebd[k][5] = fr1wgvSq6[j][2];
            COcJjnst[k] = (fr1wgvSq6[jXg9GBA1QKm][0] - fr1wgvSq6[j][0]) * (fr1wgvSq6[jXg9GBA1QKm][0] - fr1wgvSq6[j][0]);
            COcJjnst[k] = COcJjnst[k] + (fr1wgvSq6[jXg9GBA1QKm][1] - fr1wgvSq6[j][1]) * (fr1wgvSq6[jXg9GBA1QKm][1] - fr1wgvSq6[j][1]);
            COcJjnst[k] = COcJjnst[k] + (fr1wgvSq6[jXg9GBA1QKm][2] - fr1wgvSq6[j][2]) * (fr1wgvSq6[jXg9GBA1QKm][2] - fr1wgvSq6[j][2]);
            COcJjnst[k] = sqrt (COcJjnst[k]);
            k++;
        }
    }
    for (jXg9GBA1QKm = 1; k > jXg9GBA1QKm; jXg9GBA1QKm++) {
        for (j = 0; k - jXg9GBA1QKm > j; j++) {
            if (COcJjnst[j + 1] > COcJjnst[j]) {
                {
                    jZVBjIu3 = 0;
                    while (6 > jZVBjIu3) {
                        KKELNWtoF = HMivURaxebd[j][jZVBjIu3];
                        HMivURaxebd[j][jZVBjIu3] = HMivURaxebd[j + 1][jZVBjIu3];
                        HMivURaxebd[j + 1][jZVBjIu3] = KKELNWtoF;
                        jZVBjIu3++;
                    }
                }
                {
                    if (0) {
                        return 0;
                    }
                }
                zivxaTMEe5F = COcJjnst[j];
                COcJjnst[j] = COcJjnst[j + 1];
                COcJjnst[j + 1] = zivxaTMEe5F;
            }
        }
    }
    {
        jXg9GBA1QKm = 0;
        while (jXg9GBA1QKm < k) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", HMivURaxebd[jXg9GBA1QKm][0], HMivURaxebd[jXg9GBA1QKm][1], HMivURaxebd[jXg9GBA1QKm][2], HMivURaxebd[jXg9GBA1QKm][3], HMivURaxebd[jXg9GBA1QKm][4], HMivURaxebd[jXg9GBA1QKm][5], COcJjnst[jXg9GBA1QKm]);
            jXg9GBA1QKm++;
        }
    }
}

