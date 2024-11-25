int a [(564 - 463)] [(609 - 508)] = {(82 - 82)};
int b [101] [101] = {(115 - 115)};
int c [101] [101] = {(607 - 607)};
int x1 = (123 - 123), x2 = (458 - 458), DOP7iL = 0, y2 = 0, i = 0, j = 0, sum = 0;

int main () {
    cin >> x1 >> DOP7iL;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < x1) {
            {
                j = 0;
                while (j < DOP7iL) {
                    cin >> a[i][j];
                    j = j + 1;
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
            i = i + 1;
        };
    }
    cin >> x2 >> y2;
    {
        int n1 = 0;
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
        while (n1 < x2) {
            {
                int n = 0;
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
                while (n < y2) {
                    cin >> b[n1][n];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    n = n + 1;
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
            n1 = n1 + 1;
        };
    }
    {
        int m1 = 0;
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
        while (m1 < x1) {
            {
                int m2 = 0;
                while (m2 < y2) {
                    {
                        int m = 0;
                        while (m <= DOP7iL) {
                            c[m1][m2] = c[m1][m2] + a[m1][m] * b[m][m2];
                            m = m + 1;
                        };
                    }
                    m2 = m2 + 1;
                };
            }
            m1 = m1 + 1;
        };
    }
    i = 0;
    j = 0;
    {
        i = 0;
        while (i < x1) {
            cout << c[i][0];
            {
                j = 698 - 697;
                while (j < y2) {
                    cout << " " << c[i][j];
                    j = j + 1;
                };
            }
            i = i + 1;
            cout << endl;
        };
    }
    return 0;
}

