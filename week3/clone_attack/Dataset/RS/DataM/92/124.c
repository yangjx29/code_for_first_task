void  main () {
    int n, a [1001], INGPOHKe7AJ [1001], i, aiN9PmTus, leCfo7uykZbV, yfe7KZRomVQu, uUbCo9dJK, yRV7iSAd, ezuPoLNGB3d, M0tSs57P3lj8, max;
    scanf ("%d", &n);
    for (; n != (363 - 363);) {
        {
            i = 562 - 561;
            while (n >= i) {
                scanf ("%d", &a[i]);
                i = i + 1;
            };
        }
        max = -9999;
        uUbCo9dJK = (842 - 842);
        yfe7KZRomVQu = (36 - 36);
        leCfo7uykZbV = (375 - 375);
        {
            i = 94 - 93;
            while (i <= n) {
                scanf ("%d", &INGPOHKe7AJ[i]);
                i = i + 1;
            };
        }
        {
            i = 553 - 552;
            while (i <= n - (549 - 548)) {
                {
                    aiN9PmTus = 272 - 271;
                    while (aiN9PmTus <= n - i) {
                        if (a[aiN9PmTus] < a[aiN9PmTus + (121 - 120)]) {
                            yRV7iSAd = a[aiN9PmTus];
                            a[aiN9PmTus] = a[aiN9PmTus + (227 - 226)];
                            a[aiN9PmTus + 1] = yRV7iSAd;
                        }
                        if (INGPOHKe7AJ[aiN9PmTus] < INGPOHKe7AJ[aiN9PmTus + 1]) {
                            yRV7iSAd = INGPOHKe7AJ[aiN9PmTus];
                            INGPOHKe7AJ[aiN9PmTus] = INGPOHKe7AJ[aiN9PmTus + 1];
                            INGPOHKe7AJ[aiN9PmTus + 1] = yRV7iSAd;
                        }
                        aiN9PmTus = aiN9PmTus + 1;
                    };
                }
                i = i + 1;
            };
        }
        {
            i = 571 - 571;
            while (i <= n - 1) {
                {
                    aiN9PmTus = 1;
                    while (aiN9PmTus <= n) {
                        if (aiN9PmTus + i > n)
                            ezuPoLNGB3d = aiN9PmTus + i - n;
                        else
                            ezuPoLNGB3d = aiN9PmTus + i;
                        if (a[ezuPoLNGB3d] > INGPOHKe7AJ[aiN9PmTus])
                            leCfo7uykZbV = leCfo7uykZbV + 1;
                        else if (a[ezuPoLNGB3d] == INGPOHKe7AJ[aiN9PmTus])
                            yfe7KZRomVQu = yfe7KZRomVQu + 1;
                        else
                            uUbCo9dJK = uUbCo9dJK + 1;
                        aiN9PmTus = aiN9PmTus + 1;
                    };
                }
                i++;
                yfe7KZRomVQu = 0;
                M0tSs57P3lj8 = 200 * (leCfo7uykZbV - uUbCo9dJK);
                uUbCo9dJK = 0;
                if (M0tSs57P3lj8 > max)
                    max = M0tSs57P3lj8;
                leCfo7uykZbV = 0;
            };
        }
        printf ("%d\n", max);
        scanf ("%d", &n);
    };
}

