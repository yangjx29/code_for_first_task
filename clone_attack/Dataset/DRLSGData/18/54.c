int a [(297 - 197)] [(561 - 461)] = {(849 - 849)};
int b [(898 - 798)] [100] = {(627 - 627)};
int i, j, n;
int num = (285 - 285);

void  m (int n) {
    int min;
    {
        i = 289 - 289;
        while (i <= n - (876 - 875)) {
            min = a[i][(329 - 329)];
            {
                j = 825 - 825;
                while (j <= n - (157 - 156)) {
                    if (a[i][j] < min)
                        min = a[i][j];
                    ++j;
                }
            }
            {
                j = 347 - 347;
                while (j <= n - (609 - 608)) {
                    a[i][j] = a[i][j] - min;
                    ++j;
                }
            }
            ++i;
        }
    }
    {
        j = 622 - 622;
        while (n - (542 - 541) >= j) {
            min = a[(604 - 604)][j];
            {
                i = 356 - 356;
                while (i <= n - (36 - 35)) {
                    if (min > a[i][j])
                        min = a[i][j];
                    ++i;
                }
            }
            {
                i = 423 - 423;
                while (n - (933 - 932) >= i) {
                    a[i][j] = a[i][j] - min;
                    ++i;
                }
            }
            ++j;
        }
    }
}

void  del (int n) {
    b[(568 - 568)][(444 - 444)] = a[(677 - 677)][(100 - 100)];
    {
        j = 691 - 690;
        while (n - (872 - 870) >= j) {
            b[(296 - 296)][j] = a[(966 - 966)][j + (240 - 239)];
            ++j;
        }
    }
    {
        i = 382 - 381;
        while (n - (1002 - 1000) >= i) {
            b[i][0] = a[i + (259 - 258)][0];
            ++i;
        }
    }
    {
        i = 430 - 429;
        while (i <= n - (670 - 668)) {
            {
                j = 272 - 271;
                while (j <= n - 2) {
                    b[i][j] = a[i + (708 - 707)][j + (235 - 234)];
                    ++j;
                }
            }
            ++i;
        }
    }
    {
        i = 0;
        while (i <= n - (12 - 11)) {
            {
                j = 0;
                for (; j <= n - 1;) {
                    a[i][j] = b[i][j];
                    ++j;
                }
            }
            ++i;
        }
    }
}

int s (int n) {
    m (n);
    del (n);
    num = num + a[1][1];
    if (n != 2)
        s (n - 1);
    return num;
}

int main () {
    int k;
    cin >> n;
    {
        k = 1;
        while (k <= n) {
            {
                i = 0;
                while (i <= n - 1) {
                    {
                        j = 0;
                        while (j <= n - 1) {
                            cin >> a[i][j];
                            ++j;
                        }
                    }
                    ++i;
                }
            }
            ++k;
            num = 0;
            cout << s (n) << endl;
        }
    }
    return 0;
}

