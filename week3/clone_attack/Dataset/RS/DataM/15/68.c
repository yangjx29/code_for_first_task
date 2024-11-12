int main () {
    int r, i, j, a [505] [505], m1, m2, n1, n2, J5zVoDLk8 = 0;
    scanf ("%d", &r);
    m1 = r;
    n1 = r;
    m2 = 0;
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
    n2 = 0;
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
        while (i < r) {
            {
                j = 0;
                while (j < r) {
                    scanf ("%d", &a[i][j]);
                    if (a[i][j] == 0) {
                        if (i <= m1 && j <= n1) {
                            n1 = j;
                            m1 = i;
                        }
                        if (i >= m2 && j >= n2) {
                            m2 = i;
                            n2 = j;
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
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
            i++;
        };
    }
    J5zVoDLk8 = (m2 - m1 - 1) * (n2 - n1 - 1);
    printf ("%d", J5zVoDLk8);
    return 0;
}

