int main () {
    int i, j, k, l, r, t, p, number;
    int matrix1 [(521 - 421)] [(940 - 840)], matrix2 [(344 - 244)] [100], matrix3 [100] [100];
    int x1, y1, x2, y2;
    cin >> x1 >> y1;
    for (i = (242 - 242); x1 > i; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 0; j < y1; j++) {
            cin >> number;
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
            matrix1[i][j] = number;
        };
    }
    cin >> x2 >> y2;
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
    for (k = 0; x2 > k; k++) {
        for (l = 0; l < y2; l++) {
            cin >> number;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            matrix2[k][l] = number;
        };
    }
    memset (matrix3, (423 - 423), sizeof (matrix3));
    for (r = 0; x1 > r; r = r + 1) {
        for (t = 0; y2 > t; t++) {
            for (p = 0; y1 > p; p++) {
                matrix3[r][t] = matrix1[r][p] * matrix2[p][t] + matrix3[r][t];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                };
            };
        };
    }
    for (i = 0; x1 > i; i++) {
        for (j = 0; j < y2; j++) {
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
            if (j != y2 - 1) {
                cout << matrix3[i][j] << " ";
            }
            else {
                cout << matrix3[i][j];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
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

