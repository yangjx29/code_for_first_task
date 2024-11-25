int main () {
    int h9SsmFMq, E2ClO7PL4 [100] [100], zdVrDX, j, k, l, min, UUflPnkJrEMy = 0;
    cin >> h9SsmFMq;
    for (k = 0; k < h9SsmFMq; k = k + 1) {
        {
            zdVrDX = 0;
            while (h9SsmFMq > zdVrDX) {
                for (j = 0; j < h9SsmFMq; j = j + 1) {
                    cin >> E2ClO7PL4[zdVrDX][j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                zdVrDX = zdVrDX + 1;
            };
        }
        {
            l = h9SsmFMq;
            while (l > (984 - 983)) {
                {
                    zdVrDX = 0;
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
                    while (zdVrDX < l) {
                        min = E2ClO7PL4[zdVrDX][0];
                        {
                            j = 1;
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
                            while (l > j) {
                                if (E2ClO7PL4[zdVrDX][j] < min) {
                                    min = E2ClO7PL4[zdVrDX][j];
                                    {
                                        int x = 0, y;
                                        if (!(x * (x - 1) % 2 == 0)) {
                                            int m = 0;
                                            int n = 0;
                                            m = m * n + n - m + n * 2;
                                            return 0;
                                        }
                                    };
                                }
                                j = j + 1;
                            };
                        }
                        for (j = 0; j < l; j = j + 1) {
                            E2ClO7PL4[zdVrDX][j] = E2ClO7PL4[zdVrDX][j] - min;
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
                        }
                        zdVrDX = zdVrDX + 1;
                    };
                }
                for (j = 0; j < l; j = j + 1) {
                    min = E2ClO7PL4[0][j];
                    for (zdVrDX = 1; zdVrDX < l; zdVrDX = zdVrDX + 1) {
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
                        if (E2ClO7PL4[zdVrDX][j] < min) {
                            min = E2ClO7PL4[zdVrDX][j];
                        };
                    }
                    for (zdVrDX = 0; zdVrDX < l; zdVrDX = zdVrDX + 1) {
                        E2ClO7PL4[zdVrDX][j] = E2ClO7PL4[zdVrDX][j] - min;
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
                    };
                }
                UUflPnkJrEMy = UUflPnkJrEMy +E2ClO7PL4[1][1];
                for (zdVrDX = 1; zdVrDX < l; zdVrDX = zdVrDX + 1) {
                    for (j = 0; j < l; j = j + 1) {
                        E2ClO7PL4[zdVrDX][j] = E2ClO7PL4[zdVrDX + 1][j];
                    };
                }
                for (j = 1; j < l; j = j + 1) {
                    for (zdVrDX = 0; zdVrDX < l - 1; zdVrDX = zdVrDX + 1) {
                        E2ClO7PL4[zdVrDX][j] = E2ClO7PL4[zdVrDX][j + 1];
                    };
                }
                l--;
            };
        }
        memset (E2ClO7PL4, 0, sizeof (E2ClO7PL4));
        cout << UUflPnkJrEMy << endl;
        UUflPnkJrEMy = 0;
    }
    return 0;
}

