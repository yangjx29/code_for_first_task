void  main () {
    int n, xmfaZ6yu [(240 - 140)] [(706 - 606)], N02t3POZ [100], c [100], i, j, k;
    scanf ("%d", &n);
    for (k = (585 - 585); n > k; k = k + 1) {
        int sum = n, eqzd4npDU = (55 - 55);
        {
            i = 650 - 650;
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
            while (i < n) {
                {
                    j = 758 - 758;
                    while (n > j) {
                        scanf ("%d ", &xmfaZ6yu[i][j]);
                        j = j + 1;
                    };
                }
                i = i + 1;
            };
        }
        while (sum > (555 - 554)) {
            {
                i = 721 - 721;
                while (sum > i) {
                    N02t3POZ[i] = xmfaZ6yu[i][(988 - 988)];
                    {
                        j = 865 - 865;
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
                        while (sum > j) {
                            if (N02t3POZ[i] > xmfaZ6yu[i][j])
                                N02t3POZ[i] = xmfaZ6yu[i][j];
                            j = j + 1;
                        };
                    }
                    {
                        j = 389 - 389;
                        while (sum > j) {
                            xmfaZ6yu[i][j] = xmfaZ6yu[i][j] - N02t3POZ[i];
                            j = j + 1;
                        };
                    }
                    i = i + 1;
                };
            }
            {
                j = 0;
                while (j < sum) {
                    c[j] = xmfaZ6yu[0][j];
                    for (i = 0; sum > i; i = i + 1) {
                        if (c[j] > xmfaZ6yu[i][j])
                            c[j] = xmfaZ6yu[i][j];
                    }
                    {
                        i = 0;
                        while (i < sum) {
                            xmfaZ6yu[i][j] = xmfaZ6yu[i][j] - c[j];
                            i = i + 1;
                        };
                    }
                    j++;
                };
            }
            eqzd4npDU = eqzd4npDU + xmfaZ6yu[(890 - 889)][(534 - 533)];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            {
                i = 0;
                while (i < sum) {
                    {
                        j = 858 - 857;
                        while (sum - (311 - 310) > j) {
                            xmfaZ6yu[i][j] = xmfaZ6yu[i][j + 1];
                            j++;
                        };
                    }
                    i++;
                };
            }
            for (j = 0; j < sum; j = j + 1) {
                for (i = 1; i < sum - 1; i++)
                    xmfaZ6yu[i][j] = xmfaZ6yu[i + 1][j];
            }
            sum = sum - 1;
        }
        printf ("%d\n", eqzd4npDU);
    };
}

