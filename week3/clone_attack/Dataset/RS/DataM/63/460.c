int main () {
    int a [(1000 - 899)] [101];
    int b [101] [101];
    int c [101] [101] = {0};
    int ffYpHMB1A;
    int y1;
    int x2;
    int y2;
    int i;
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
    int j;
    int m;
    cin >> ffYpHMB1A >> y1;
    for (i = 1; ffYpHMB1A >= i; i++) {
        for (j = 1; y1 >= j; j++) {
            cin >> a[i][j];
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
    cin >> x2 >> y2;
    for (i = 1; x2 >= i; i++) {
        for (j = 1; y2 >= j; j++) {
            cin >> b[i][j];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    for (i = 1; i <= ffYpHMB1A; i++) {
        j = 1;
        while (j <= y2) {
            {
                m = 1;
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
                while (m <= y1) {
                    c[i][j] = c[i][j] + a[i][m] * b[m][j];
                    m++;
                };
            }
            if (j == y2) {
                cout << c[i][j] << endl;
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
            else {
                cout << c[i][j] << " ";
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            j++;
        };
    }
    return 0;
}

