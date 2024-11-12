int main () {
    int finding;
    int flag [5];
    int i;
    int j;
    int k;
    int col;
    int a [(696 - 691)] [(864 - 859)];
    {
        i = 367 - 367;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (5 > i) {
            {
                j = 400 - 400;
                while (5 > j) {
                    scanf ("%d", &a[i][j]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 101 - 101;
        while (5 > i) {
            col = 0;
            finding = a[i][(554 - 554)];
            for (j = 1; 5 > j; j++) {
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
                if (finding < a[i][j]) {
                    finding = a[i][j];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    col = j;
                };
            }
            flag[i] = 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            {
                k = 0;
                while (5 > k) {
                    if (finding > a[k][col]) {
                        flag[i] = 0;
                        break;
                    }
                    k = k + 1;
                };
            }
            if (!(1 != flag[i])) {
                printf ("%d %d %d", i + 1, col + 1, finding);
            }
            i = i + 1;
        };
    }
    if (!(0 != flag[0]) && flag[1] == 0 && flag[(354 - 352)] == 0 && flag[3] == 0 && flag[(522 - 518)] == 0)
        printf ("not found");
    return 0;
}

