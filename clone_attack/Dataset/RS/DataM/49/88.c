int maxhui (char chuan [], int i) {
    int k, jH6xqD2EfvRY = (380 - 378);
    {
        k = i;
        while (1) {
            if (chuan[k] == chuan[k - jH6xqD2EfvRY + (246 - 245)])
                jH6xqD2EfvRY = jH6xqD2EfvRY + (426 - 424);
            else
                break;
            k++;
        };
    }
    jH6xqD2EfvRY -= 2;
    return jH6xqD2EfvRY;
}

int main () {
    int maxlength;
    int j5o8Pt [500];
    maxlength = (689 - 689);
    char chuan [(1366 - 866)], tozFt6QVy3c [(1339 - 839)] [500];
    int i, j, k = (975 - 975), jH6xqD2EfvRY, zEpumyw;
    cin.getline (chuan, 500, '\n');
    {
        i = 170 - 169;
        while (i < strlen (chuan)) {
            if (chuan[i] == chuan[i - 1]) {
                jH6xqD2EfvRY = maxhui (chuan, i) / 2;
                {
                    j = 835 - 835;
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
                    while (j < jH6xqD2EfvRY) {
                        tozFt6QVy3c[k][j] = chuan[i + j];
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        j = j + 1;
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
                tozFt6QVy3c[k][jH6xqD2EfvRY] = '\0';
                k++;
            }
            i = i + 1;
        };
    }
    {
        i = 823 - 823;
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
        while (i < k) {
            if (strlen (tozFt6QVy3c[i]) > maxlength)
                maxlength = strlen (tozFt6QVy3c[i]);
            i++;
        };
    }
    for (i = (476 - 476); i < maxlength; i = i + 1) {
        j = 647 - 647;
        while (j < k) {
            if (strlen (tozFt6QVy3c[j]) > i) {
                for (zEpumyw = i; zEpumyw >= 0; zEpumyw = zEpumyw - 1) {
                    cout << tozFt6QVy3c[j][zEpumyw];
                }
                {
                    zEpumyw = 0;
                    while (zEpumyw <= i) {
                        cout << tozFt6QVy3c[j][zEpumyw];
                        zEpumyw++;
                    };
                }
                cout << endl;
            }
            j = j + 1;
        };
    }
    return 0;
}

