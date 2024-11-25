int a [(579 - 570)] [(295 - 286)] = {(549 - 549)};
void  c8CyZ96 (int a [(293 - 284)] [(355 - 346)], int k);

int main () {
    int m;
    int n;
    int i;
    int Z3RM5wKd;
    cin >> m >> n;
    a[4][4] = m;
    c8CyZ96 (a, n);
    for (i = 0; i < 9; i = i + 1) {
        for (Z3RM5wKd = 0; Z3RM5wKd < 9; Z3RM5wKd = Z3RM5wKd +1) {
            if (Z3RM5wKd != 8)
                cout << a[i][Z3RM5wKd] << " ";
            else
                cout << a[i][Z3RM5wKd];
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
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << endl;
    }
    return 0;
}

void  c8CyZ96 (int a [9] [9], int k) {
    int i;
    int Z3RM5wKd;
    int sign [9] [9] = {0};
    int b [9] [9] = {0};
    if (k == 0)
        return;
    for (i = 0; i < 9; i = i + 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (Z3RM5wKd = 0; Z3RM5wKd < 9; Z3RM5wKd = Z3RM5wKd +1) {
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
            if ((a[i][Z3RM5wKd] != 0) && (!(0 != sign[i][Z3RM5wKd]))) {
                sign[i][Z3RM5wKd]++;
                b[i][Z3RM5wKd] = a[i][Z3RM5wKd];
            };
        };
    }
    for (i = 0; i < 9; i = i + 1) {
        Z3RM5wKd = 0;
        while (Z3RM5wKd < 9) {
            if (sign[i][Z3RM5wKd] == (661 - 660)) {
                a[i][Z3RM5wKd] = a[i][Z3RM5wKd] + 2 * b[i][Z3RM5wKd];
                a[i][Z3RM5wKd +1] = a[i][Z3RM5wKd +1] + b[i][Z3RM5wKd];
                a[i][Z3RM5wKd -1] = a[i][Z3RM5wKd -1] + b[i][Z3RM5wKd];
                a[i + 1][Z3RM5wKd] = a[i + 1][Z3RM5wKd] + b[i][Z3RM5wKd];
                a[i - 1][Z3RM5wKd] = a[i - 1][Z3RM5wKd] + b[i][Z3RM5wKd];
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
                a[i - 1][Z3RM5wKd -1] = a[i - 1][Z3RM5wKd -1] + b[i][Z3RM5wKd];
                a[i - 1][Z3RM5wKd +1] = a[i - 1][Z3RM5wKd +1] + b[i][Z3RM5wKd];
                a[i + 1][Z3RM5wKd -1] = a[i + 1][Z3RM5wKd -1] + b[i][Z3RM5wKd];
                a[i + 1][Z3RM5wKd +1] = a[i + 1][Z3RM5wKd +1] + b[i][Z3RM5wKd];
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
            Z3RM5wKd = Z3RM5wKd +1;
        };
    }
    for (i = 0; i < 9; i = i + 1)
        for (Z3RM5wKd = 0; Z3RM5wKd < 9; Z3RM5wKd = Z3RM5wKd +1) {
            a[i][Z3RM5wKd] = a[i][Z3RM5wKd] - b[i][Z3RM5wKd];
        }
    c8CyZ96 (a, k - 1);
}

