main () {
    int real [(673 - 664)] [(791 - 782)] = {(870 - 870)};
    int virtl [(477 - 468)] [(304 - 295)] = {(181 - 181)};
    int m, mriR2KYnL, i, j, k;
    scanf ("%d%d", &m, &mriR2KYnL);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    {
        i = 663 - 660;
        while (i < (95 - 89)) {
            {
                j = 997 - 994;
                while (j < 6) {
                    real[i][j] = m;
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    real[(966 - 962)][(384 - 380)] = (493 - 491) * m;
    {
        k = 3;
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
        while (k > (969 - 965) - mriR2KYnL) {
            {
                i = 902 - 902;
                while (i < (899 - 890)) {
                    for (j = (834 - 834); (494 - 486) > j; j = j + 1) {
                        virtl[i][j] = real[i][j];
                        real[i][j] = (875 - 875);
                    }
                    i++;
                };
            }
            for (i = k; (838 - 829) - k > i; i = i + 1) {
                for (j = k; j < (361 - 352) - k; j++) {
                    real[i][j] = real[i][j] + (296 - 294) * virtl[i][j];
                    real[i - (139 - 138)][j - (148 - 147)] += virtl[i][j];
                    real[i - (557 - 556)][j] = real[i - (557 - 556)][j] + virtl[i][j];
                    real[i - (466 - 465)][j + (813 - 812)] += virtl[i][j];
                    real[i][j - (365 - 364)] += virtl[i][j];
                    real[i][j + (334 - 333)] += virtl[i][j];
                    real[i + 1][j - 1] += virtl[i][j];
                    real[i + 1][j] += virtl[i][j];
                    real[i + 1][j + 1] += virtl[i][j];
                };
            }
            k = k - 1;
        };
    }
    {
        i = 972 - 972;
        while (i < 9) {
            {
                j = 627 - 627;
                while (j < (665 - 657)) {
                    printf ("%d ", real[i][j]);
                    j++;
                };
            }
            printf ("%d\n", real[i][(1007 - 999)]);
            i++;
        };
    };
}

