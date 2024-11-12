int main () {
    int m;
    int n;
    int dqMxrhO65B [10] [10];
    int k;
    int q0v9KIm;
    int j;
    int c [10] [10];
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
    cin >> m >> n;
    memset (dqMxrhO65B, (819 - 819), sizeof (dqMxrhO65B));
    dqMxrhO65B[5][5] = m;
    {
        k = 384 - 383;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= k) {
            k++;
            memset (c, 0, sizeof (c));
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
            for (q0v9KIm = (265 - 264); (406 - 397) >= q0v9KIm; q0v9KIm = q0v9KIm + 1)
                for (j = 1; j <= (607 - 598); j = j + 1) {
                    c[q0v9KIm][j] += dqMxrhO65B[q0v9KIm][j];
                    c[q0v9KIm - 1][j] += dqMxrhO65B[q0v9KIm][j];
                    c[q0v9KIm + 1][j] += dqMxrhO65B[q0v9KIm][j];
                    c[q0v9KIm][j - 1] += dqMxrhO65B[q0v9KIm][j];
                    c[q0v9KIm][j + 1] += dqMxrhO65B[q0v9KIm][j];
                    c[q0v9KIm - 1][j - 1] += dqMxrhO65B[q0v9KIm][j];
                    c[q0v9KIm - 1][j + 1] += dqMxrhO65B[q0v9KIm][j];
                    c[q0v9KIm + 1][j - 1] += dqMxrhO65B[q0v9KIm][j];
                    c[q0v9KIm + 1][j + 1] += dqMxrhO65B[q0v9KIm][j];
                }
            for (q0v9KIm = 1; 9 >= q0v9KIm; q0v9KIm++) {
                j = 1;
                while (9 >= j) {
                    dqMxrhO65B[q0v9KIm][j] += c[q0v9KIm][j];
                    j++;
                };
            };
        };
    }
    {
        q0v9KIm = 1;
        while (q0v9KIm <= 9) {
            for (j = 1; j <= 9; j = j + 1) {
                cout << dqMxrhO65B[q0v9KIm][j];
                if (j != 9)
                    cout << " ";
                if ((q0v9KIm != 9) && (j == 9))
                    cout << endl;
            }
            q0v9KIm = q0v9KIm + 1;
        };
    }
    return 0;
}

