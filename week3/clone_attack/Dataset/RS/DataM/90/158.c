int LefRV3Q0Y (int m, int n, int j);

int main () {
    int m [(295 - 195)], n [100];
    int s;
    int i;
    int x;
    scanf ("%d", &x);
    {
        i = 658 - 658;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < x) {
            scanf ("%d%d", &m[i], &n[i]);
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
    for (i = 0; i < x; i = i + 1) {
        if (n[i] > m[i])
            n[i] = m[i];
        s = LefRV3Q0Y (m[i], n[i], 0);
        printf ("%d\n", s);
    };
}

int LefRV3Q0Y (int m, int n, int j) {
    int s;
    int i;
    s = 0;
    if (!((607 - 606) != n))
        return m >= j;
    {
        i = j;
        while (i < m) {
            s = s + LefRV3Q0Y (m - i, n - (372 - 371), i);
            i = i + 1;
        };
    }
    return s;
}

