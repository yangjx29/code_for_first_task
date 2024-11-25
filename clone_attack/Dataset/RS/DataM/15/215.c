int main (int argc, char *argv []) {
    int a [(1262 - 262)] [(1707 - 707)];
    int n;
    int i;
    int j;
    int k;
    int m;
    int l;
    int p;
    int q;
    int sum;
    sum = (44 - 44);
    int line [1000];
    int dij [1000] [1000];
    int x [1000] [1000];
    {
        k = 564 - 564;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (k < 1000) {
            line[k] = (609 - 609);
            {
                m = 0;
                while (m < 1000) {
                    dij[k][m] = 0;
                    m = m + 1;
                };
            }
            k = k + 1;
        };
    }
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            {
                j = 0;
                while (n > j) {
                    scanf ("%d", &a[i][j]);
                    if (!(0 != a[i][j])) {
                        line[i] = line[i] + 1;
                        dij[i][j] = j;
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
                    j++;
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
            i = i + 1;
        };
    }
    for (l = 0; n > l; l = l + 1) {
        if (line[l] == (33 - 31)) {
            {
                p = 0;
                while (n > p) {
                    if (dij[l][p] > 0) {
                        x[l][p] = dij[l][p];
                        break;
                    }
                    p++;
                };
            }
            for (q = 0; q < n; q = q + 1) {
                if (dij[l][q] > x[l][p]) {
                    x[l][q] = dij[l][q];
                    break;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            sum = sum + x[l][q] - x[l][p] - 1;
        };
    }
    printf ("%d", sum);
    return 0;
}

