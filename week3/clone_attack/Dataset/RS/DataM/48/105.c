int a [9] [9];
int b [9] [9];

int main () {
    int i, x, y;
    int m, n;
    memset (a, 0, sizeof (a));
    cin >> m >> n;
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
    a[4][4] = m;
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
        while (!(n == i)) {
            i++;
            memset (b, 0, sizeof (b));
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
                x = 1;
                while (!((952 - 944) == x)) {
                    {
                        y = 1;
                        while (!(8 == y)) {
                            b[x][y] += 2 * a[x][y];
                            b[x - 1][y - 1] = b[x - 1][y - 1] + a[x][y];
                            b[x - 1][y] += a[x][y];
                            b[x - 1][y + 1] += a[x][y];
                            b[x][y - 1] += a[x][y];
                            b[x][y + 1] = b[x][y + 1] + a[x][y];
                            b[x + 1][y - 1] = b[x + 1][y - 1] + a[x][y];
                            b[x + 1][y] += a[x][y];
                            b[x + 1][y + 1] = b[x + 1][y + 1] + a[x][y];
                            y = y + 1;
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    x++;
                };
            }
            memcpy (a, b, sizeof (a));
        };
    }
    {
        x = 0;
        while (x != 9) {
            for (y = 0; y != 9; y = y + 1) {
                if (y == 0)
                    cout << a[x][y];
                else
                    cout << ' ' << a[x][y];
            }
            x++;
            cout << endl;
        };
    }
    return 0;
}

