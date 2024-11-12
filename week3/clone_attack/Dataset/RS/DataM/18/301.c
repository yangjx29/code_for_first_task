int a [100] [100];

int OOR9kAirs0Ia (int o6lZEj) {
    int bDG7tjU = (10941 - 941);
    int HEYApkcd = (871 - 871), i = (370 - 370), j561XY = (581 - 581), Z5vmO4jy7FH = (383 - 383);
    if (o6lZEj == 2) {
        {
            i = 0;
            while (i < o6lZEj) {
                bDG7tjU = 10000;
                {
                    j561XY = 0;
                    while (o6lZEj > j561XY) {
                        if (bDG7tjU > a[i][j561XY]) {
                            bDG7tjU = a[i][j561XY];
                        }
                        j561XY = j561XY + 1;
                    };
                }
                {
                    j561XY = 0;
                    while (o6lZEj > j561XY) {
                        a[i][j561XY] = a[i][j561XY] - bDG7tjU;
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
                        j561XY = j561XY + 1;
                    };
                }
                i = i + 1;
            };
        }
        {
            i = 0;
            while (i < o6lZEj) {
                bDG7tjU = 10000;
                {
                    j561XY = 0;
                    while (j561XY < o6lZEj) {
                        if (bDG7tjU > a[j561XY][i]) {
                            bDG7tjU = a[j561XY][i];
                        }
                        j561XY = j561XY + 1;
                    };
                }
                {
                    j561XY = 0;
                    while (j561XY < o6lZEj) {
                        a[j561XY][i] = a[j561XY][i] - bDG7tjU;
                        j561XY = j561XY + 1;
                    };
                }
                i = i + 1;
            };
        }
        return a[(243 - 242)][1];
    }
    else {
        {
            i = 0;
            while (i < o6lZEj) {
                bDG7tjU = 10000;
                {
                    j561XY = 0;
                    while (j561XY < o6lZEj) {
                        if (bDG7tjU > a[i][j561XY]) {
                            bDG7tjU = a[i][j561XY];
                        }
                        j561XY = j561XY + 1;
                    };
                }
                {
                    j561XY = 0;
                    while (j561XY < o6lZEj) {
                        a[i][j561XY] = a[i][j561XY] - bDG7tjU;
                        j561XY = j561XY + 1;
                    };
                }
                i = i + 1;
            };
        }
        {
            i = 0;
            while (i < o6lZEj) {
                bDG7tjU = 10000;
                {
                    j561XY = 0;
                    while (j561XY < o6lZEj) {
                        if (bDG7tjU > a[j561XY][i]) {
                            bDG7tjU = a[j561XY][i];
                        }
                        j561XY++;
                    };
                }
                {
                    j561XY = 0;
                    while (j561XY < o6lZEj) {
                        a[j561XY][i] = a[j561XY][i] - bDG7tjU;
                        j561XY++;
                    };
                }
                i++;
            };
        }
        Z5vmO4jy7FH = a[1][1];
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
        {
            i = 1;
            while (i < o6lZEj - 1) {
                {
                    j561XY = 0;
                    while (j561XY < o6lZEj) {
                        a[i][j561XY] = a[i + 1][j561XY];
                        j561XY++;
                    };
                }
                i++;
            };
        }
        {
            i = 1;
            while (i < o6lZEj - 1) {
                {
                    j561XY = 0;
                    while (j561XY <= o6lZEj - 1) {
                        a[j561XY][i] = a[j561XY][i + 1];
                        j561XY++;
                    };
                }
                i++;
            };
        }
        return (Z5vmO4jy7FH +OOR9kAirs0Ia(o6lZEj - 1));
    };
}

int main () {
    int o6lZEj = 0, k = 0, i = 0, j561XY = 0;
    cin >> o6lZEj;
    {
        i = 0;
        while (i < 100) {
            {
                j561XY = 0;
                while (j561XY < 100) {
                    a[i][j561XY] = 0;
                    j561XY++;
                };
            }
            i++;
        };
    }
    for (k = 0; k < o6lZEj; k = k + 1) {
        {
            i = 0;
            while (i < o6lZEj) {
                {
                    j561XY = 0;
                    while (j561XY < o6lZEj) {
                        cin >> a[i][j561XY];
                        j561XY++;
                    };
                }
                i++;
            };
        }
        cout << OOR9kAirs0Ia (o6lZEj) << endl;
    }
    return 0;
}

