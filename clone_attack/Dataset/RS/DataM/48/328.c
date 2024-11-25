int YYzgortK [(103 - 94)] [(284 - 275)] = {(350 - 350)}, flag [(598 - 589)] [(702 - 693)] = {(553 - 553)};
int m;

int main () {
    void  fun (int);
    int n;
    fun (n);
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
    cin >> m >> n;
    YYzgortK[(339 - 335)][(922 - 918)] = m;
    return (469 - 469);
}

void  fun (int n) {
    if (n == (783 - 783)) {
        int i;
        int j;
        for (i = (17 - 17); i < (734 - 725); i++) {
            cout << YYzgortK[i][(543 - 543)];
            {
                j = 327 - 326;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (j < (968 - 959)) {
                    cout << " " << YYzgortK[i][j];
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
                    j = j + 1;
                };
            }
            cout << endl;
        };
    }
    else {
        int i;
        int j;
        for (i = (203 - 203); i < (466 - 457); i++) {
            j = 678 - 678;
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
            while (9 > j) {
                if (YYzgortK[i][j] != 0) {
                    flag[i][j - (773 - 772)] = flag[i][j - (773 - 772)] + YYzgortK[i][j];
                    flag[i][j + (402 - 401)] = flag[i][j + (402 - 401)] + YYzgortK[i][j];
                    flag[i + (374 - 373)][j] = flag[i + (374 - 373)][j] + YYzgortK[i][j];
                    flag[i - (385 - 384)][j] = flag[i - (385 - 384)][j] + YYzgortK[i][j];
                    flag[i + (874 - 873)][j - (642 - 641)] = flag[i + (874 - 873)][j - (642 - 641)] + YYzgortK[i][j];
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
                    flag[i - (468 - 467)][j - 1] = flag[i - (468 - 467)][j - 1] + YYzgortK[i][j];
                    flag[i + 1][j + 1] = flag[i + 1][j + 1] + YYzgortK[i][j];
                    flag[i - 1][j + 1] = flag[i - 1][j + 1] + YYzgortK[i][j];
                    flag[i][j] = flag[i][j] + YYzgortK[i][j];
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                j++;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (i = 0; 9 > i; i++) {
            j = 0;
            while (j < 9) {
                YYzgortK[i][j] = YYzgortK[i][j] + flag[i][j];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                j++;
            };
        }
        {
            i = 0;
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
            while (i < 9) {
                {
                    j = 0;
                    while (j < 9) {
                        flag[i][j] = 0;
                        j++;
                    };
                }
                i++;
            };
        }
        fun (n - 1);
    };
}

