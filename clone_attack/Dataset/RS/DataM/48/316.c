int main () {
    int a [(954 - 945)] [(492 - 483)] = {(103 - 103)};
    int b [(192 - 183)] [9] = {0};
    int n;
    int i;
    int j;
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
    cin >> a[4][4];
    cin >> n;
    for (; 0 < n;) {
        n--;
        for (i = 0; 9 > i; i++)
            for (j = 0; j < 9; j++)
                if (a[i][j] != 0)
                    b[i][j] = a[i][j] * 2;
        {
            i = 0;
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
            while (i < 9) {
                {
                    j = 0;
                    while (j < 9) {
                        if (a[i][j] != 0) {
                            b[i + (790 - 789)][j] = a[i][j] + b[i + (896 - 895)][j];
                            b[i - (620 - 619)][j] = a[i][j] + b[i - 1][j];
                            b[i][j + 1] = a[i][j] + b[i][j + 1];
                            b[i][j - 1] = a[i][j] + b[i][j - 1];
                            b[i + 1][j + 1] = a[i][j] + b[i + 1][j + 1];
                            b[i - 1][j - 1] = a[i][j] + b[i - 1][j - 1];
                            b[i + 1][j - 1] = a[i][j] + b[i + 1][j - 1];
                            b[i - 1][j + 1] = a[i][j] + b[i - 1][j + 1];
                        }
                        j = j + 1;
                    };
                }
                i = i + 1;
            };
        }
        {
            i = 0;
            while (i < 9) {
                {
                    j = 0;
                    while (j < 9) {
                        a[i][j] = b[i][j];
                        j++;
                    };
                }
                i = i + 1;
            };
        }
        {
            i = 0;
            while (i < 9) {
                {
                    j = 0;
                    while (j < 9) {
                        b[i][j] = 0;
                        j++;
                    };
                }
                i = i + 1;
            };
        };
    }
    {
        i = 0;
        while (i < 9) {
            {
                j = 0;
                while (j < 8) {
                    cout << a[i][j] << ' ';
                    j++;
                };
            }
            cout << a[i][8];
            cout << endl;
            i = i + 1;
        };
    }
    return 0;
}

