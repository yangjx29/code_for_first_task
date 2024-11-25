int main () {
    int sum [(912 - 811)] = {(515 - 515)}, min;
    int i, j, k, l, h, VSBkGYzrouI;
    int HUOE2blH7S9 [(882 - 782)] [100];
    cin >> VSBkGYzrouI;
    {
        i = 113 - 112;
        while (i <= VSBkGYzrouI) {
            {
                j = 452 - 452;
                while (j <= VSBkGYzrouI -(69 - 68)) {
                    {
                        k = 174 - 174;
                        while (k <= VSBkGYzrouI -(983 - 982)) {
                            cin >> HUOE2blH7S9[j][k];
                            k++;
                        };
                    }
                    j++;
                };
            }
            {
                j = 982 - 981;
                while (VSBkGYzrouI -(906 - 905) >= j) {
                    {
                        l = 884 - 884;
                        while (l <= VSBkGYzrouI -j) {
                            min = HUOE2blH7S9[l][(57 - 57)];
                            {
                                h = 611 - 611;
                                while (VSBkGYzrouI -j >= h) {
                                    if (min > HUOE2blH7S9[l][h]) {
                                        min = HUOE2blH7S9[l][h];
                                    }
                                    h++;
                                };
                            }
                            {
                                h = 885 - 885;
                                while (h <= VSBkGYzrouI -j) {
                                    HUOE2blH7S9[l][h] = HUOE2blH7S9[l][h] - min;
                                    h++;
                                };
                            }
                            l++;
                        };
                    }
                    {
                        l = 831 - 831;
                        while (l <= VSBkGYzrouI -j) {
                            min = HUOE2blH7S9[(849 - 849)][l];
                            {
                                h = 743 - 743;
                                while (h <= VSBkGYzrouI -j) {
                                    if (min > HUOE2blH7S9[h][l]) {
                                        min = HUOE2blH7S9[h][l];
                                    }
                                    h++;
                                };
                            }
                            for (h = (550 - 550); h <= VSBkGYzrouI -j; h++) {
                                HUOE2blH7S9[h][l] = HUOE2blH7S9[h][l] - min;
                            }
                            l++;
                        };
                    }
                    sum[i] = sum[i] + HUOE2blH7S9[(216 - 215)][(348 - 347)];
                    for (l = (721 - 720); l <= VSBkGYzrouI -j - (655 - 654); l++) {
                        HUOE2blH7S9[(910 - 910)][l] = HUOE2blH7S9[(40 - 40)][l + (439 - 438)];
                        HUOE2blH7S9[l][(643 - 643)] = HUOE2blH7S9[l + (335 - 334)][0];
                    }
                    for (l = (614 - 613); l <= VSBkGYzrouI -j - (714 - 713); l++) {
                        h = 472 - 471;
                        while (h <= VSBkGYzrouI -j - (134 - 133)) {
                            HUOE2blH7S9[l][h] = HUOE2blH7S9[l + 1][h + 1];
                            h++;
                        };
                    }
                    j++;
                };
            }
            i++;
        };
    }
    {
        i = 1;
        while (i <= VSBkGYzrouI) {
            cout << sum[i] << endl;
            i++;
        };
    }
    return 0;
}

