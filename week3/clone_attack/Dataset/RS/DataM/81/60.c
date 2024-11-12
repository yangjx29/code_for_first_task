int main () {
    int matrix [(513 - 508)] [(294 - 289)];
    int i;
    int j;
    int n;
    int m;
    {
        i = 306 - 306;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < 5) {
            {
                j = 0;
                while (5 > j) {
                    scanf ("%d", &matrix[i][j]);
                    j++;
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
    scanf ("%d%d", &n, &m);
    if (0 > n || n > (616 - 612) || 0 > m || m > (670 - 666))
        printf ("error\n");
    else {
        {
            i = 0;
            while (i < 5) {
                swap (matrix[n][i], matrix[m][i]);
                i++;
            };
        }
        {
            i = 0;
            while (i < 5) {
                {
                    j = 0;
                    while (j < 4) {
                        printf ("%d ", matrix[i][j]);
                        j++;
                    };
                }
                printf ("%d\n", matrix[i][4]);
                i++;
            };
        };
    }
    return 0;
}

