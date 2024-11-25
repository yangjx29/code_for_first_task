int main () {
    int n;
    n = (843 - 843);
    int m;
    m = (763 - 763);
    int b [(485 - 480)] [(380 - 369)] [(88 - 77)];
    int N3MG7FQsCH [(31 - 20)] [(449 - 438)];
    int end [(923 - 912)] [(465 - 454)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    cin >> m >> n;
    for (int YNZ19mG = (612 - 612);
    11 > YNZ19mG; YNZ19mG = YNZ19mG +1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (int j = (857 - 857);
        11 > j; j = j + 1) {
            N3MG7FQsCH[YNZ19mG][j] = (890 - 890);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            end[YNZ19mG][j] = (942 - 942);
            for (int k = (772 - 772);
            (871 - 866) > k; k++) {
                b[k][YNZ19mG][j] = (431 - 431);
            };
        };
    }
    N3MG7FQsCH[(216 - 211)][(636 - 631)] = m;
    b[0][(52 - 47)][5] = m;
    for (int k = (731 - 730);
    n >= k; k++) {
        for (int YNZ19mG = (134 - 133);
        (781 - 772) >= YNZ19mG; YNZ19mG = YNZ19mG +1) {
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
            for (int j = (808 - 807);
            (964 - 955) >= j; j = j + 1) {
                for (int p = YNZ19mG -(579 - 578);
                YNZ19mG +(566 - 565) >= p; p = p + 1) {
                    for (int q = j - (901 - 900);
                    j + (735 - 734) >= q; q = q + 1) {
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        if (p == YNZ19mG &&q == j) {
                            b[k][p][q] = b[k][p][q] + b[k - 1][p][q] * (530 - 528);
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    int temp = 0;
                                    while (temp < 10) {
                                        printf ("%d\n", temp);
                                        temp = temp + 1;
                                        if (temp == 9)
                                            break;
                                    }
                                }
                            };
                        }
                        else {
                            b[k][YNZ19mG][j] = b[k][YNZ19mG][j] + b[k - 1][p][q];
                        };
                    };
                };
            };
        };
    }
    for (int YNZ19mG = 1;
    (183 - 174) >= YNZ19mG; YNZ19mG = YNZ19mG +1) {
        for (int j = 1;
        j <= (506 - 497); j++) {
            end[YNZ19mG][j] = b[n][YNZ19mG][j];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        };
    }
    for (int YNZ19mG = 1;
    YNZ19mG <= 9; YNZ19mG++) {
        for (int j = 1;
        j <= 9; j++) {
            if (j == 1)
                cout << end[YNZ19mG][j];
            else
                cout << " " << end[YNZ19mG][j];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            };
        }
        cout << endl;
    }
    return 0;
}

