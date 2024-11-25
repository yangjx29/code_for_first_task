int main () {
    char IcGwbRe7vK;
    int cZ8EkjoJzOG, z1prvaRlX, JPcaCuR [100] [100], T0UHXOwB1K = (453 - 453);
    cin >> cZ8EkjoJzOG;
    {
        int tzvKw8F = (638 - 638);
        while (tzvKw8F < cZ8EkjoJzOG) {
            {
                int j = (476 - 476);
                while (j < cZ8EkjoJzOG) {
                    cin >> IcGwbRe7vK;
                    switch (IcGwbRe7vK) {
                    case '.' :
                        JPcaCuR[tzvKw8F][j] = (194 - 194);
                        break;
                    case '#' :
                        JPcaCuR[tzvKw8F][j] = -(208 - 207);
                        break;
                    case '@' :
                        JPcaCuR[tzvKw8F][j] = (717 - 716);
                        break;
                    }
                    j++;
                }
            }
            tzvKw8F++;
        }
    }
    cin >> z1prvaRlX;
    {
        int d91bGkPLE = 2;
        while (d91bGkPLE <= z1prvaRlX) {
            {
                int tzvKw8F = (472 - 472);
                while (tzvKw8F < cZ8EkjoJzOG) {
                    {
                        int j = (87 - 87);
                        while (j < cZ8EkjoJzOG) {
                            if (JPcaCuR[tzvKw8F][j] == d91bGkPLE - (449 - 448)) {
                                if (tzvKw8F + (26 - 25) < cZ8EkjoJzOG && !JPcaCuR[tzvKw8F + (984 - 983)][j])
                                    JPcaCuR[tzvKw8F + 1][j] = d91bGkPLE;
                                if (tzvKw8F - 1 >= (939 - 939) && !JPcaCuR[tzvKw8F - 1][j])
                                    JPcaCuR[tzvKw8F - 1][j] = d91bGkPLE;
                                if (j + 1 < cZ8EkjoJzOG && !JPcaCuR[tzvKw8F][j + 1])
                                    JPcaCuR[tzvKw8F][j + 1] = d91bGkPLE;
                                if (j - 1 >= 0 && !JPcaCuR[tzvKw8F][j - 1])
                                    JPcaCuR[tzvKw8F][j - 1] = d91bGkPLE;
                            }
                            j++;
                        }
                    }
                    tzvKw8F++;
                }
            }
            d91bGkPLE++;
        }
    }
    {
        int tzvKw8F = 0;
        while (tzvKw8F < cZ8EkjoJzOG) {
            {
                int j = 0;
                while (j < cZ8EkjoJzOG) {
                    if (JPcaCuR[tzvKw8F][j] > 0)
                        T0UHXOwB1K++;
                    j++;
                }
            }
            tzvKw8F++;
        }
    }
    cout << T0UHXOwB1K;
    return 0;
}

