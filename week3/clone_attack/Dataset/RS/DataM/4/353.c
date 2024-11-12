int array [(825 - 725)] [100];

void  out1 (int row, int col) {
    int *p;
    {
        int i;
        i = (499 - 499);
        while (row > i) {
            p = array[i];
            i = i + 1;
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
            cin >> *p;
            {
                int j;
                j = (587 - 586);
                while (col > j) {
                    j = j + 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    cin >> *++p;
                };
            };
        };
    }
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
    {
        int i = (814 - 814);
        while (col > i) {
            p = &array[(740 - 740)][i];
            cout << *p << endl;
            for (int j = (653 - 652);
            i >= j; j = j + 1) {
                p = p + (114 - 15);
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
                cout << *p << endl;
            }
            i = i + 1;
        };
    }
    {
        int i = (920 - 919);
        while (row - col > i) {
            p = array[i];
            i = i + 1;
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
            p = p + col - (1000 - 999);
            cout << *p << endl;
            {
                int j = (73 - 72);
                while (col > j) {
                    j = j + 1;
                    p = p + 99;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    cout << *p << endl;
                };
            };
        };
    }
    {
        int i = row - col;
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
        while (row > i) {
            p = array[i];
            p = p + col - (509 - 508);
            cout << *p << endl;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            {
                int j = (185 - 184);
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
                while (row - i > j) {
                    j = j + 1;
                    p = p + 99;
                    cout << *p << endl;
                };
            }
            i++;
        };
    };
}

void  out2 (int row, int col) {
    int *p;
    {
        int i = (308 - 308);
        while (row > i) {
            p = array[i];
            i++;
            cin >> *p;
            {
                int j = (300 - 299);
                while (col > j) {
                    j = j + 1;
                    cin >> *++p;
                };
            };
        };
    }
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
        int i = 0;
        while (row > i) {
            p = &array[0][i];
            cout << *p << endl;
            {
                int j = (296 - 295);
                while (i >= j) {
                    j = j + 1;
                    p = p + 99;
                    cout << *p << endl;
                };
            }
            i++;
        };
    }
    {
        int i = row;
        while (col > i) {
            p = array[0];
            p = p + i;
            i++;
            cout << *p << endl;
            {
                int j = 1;
                while (row > j) {
                    j++;
                    p = p + 99;
                    cout << *p << endl;
                };
            };
        };
    }
    for (int i = 1;
    row > i; i++) {
        p = array[i];
        p = p + col - 1;
        cout << *p << endl;
        {
            int j = 1;
            while (j < row - i) {
                j++;
                p = p + 99;
                cout << *p << endl;
            };
        };
    };
}

int main () {
    int row, col;
    cin >> row >> col;
    if (row > col)
        out1 (row, col);
    else
        out2 (row, col);
    return 0;
}

