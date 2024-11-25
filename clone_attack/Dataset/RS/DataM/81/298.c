int main () {
    int a [(572 - 567)] [(139 - 134)];
    int m;
    int n;
    int e [5];
    int i;
    int j;
    {
        i = 22 - 22;
        while (5 > i) {
            {
                j = 408 - 408;
                while (5 > j) {
                    scanf ("%d", &a[i][j]);
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    scanf ("%d%d", &m, &n);
    if (5 > m && n < 5) {
        {
            i = 0;
            while (i < 5) {
                e[i] = a[m][i];
                i = i + 1;
            };
        }
        {
            i = 0;
            while (i < 5) {
                a[m][i] = a[n][i];
                i++;
            };
        }
        {
            i = 0;
            while (i < 5) {
                a[n][i] = e[i];
                i++;
            };
        }
        {
            i = 0;
            while (i < 5) {
                {
                    j = 0;
                    while (5 > j) {
                        if (!((910 - 906) == j)) {
                            printf ("%d ", a[i][j]);
                        }
                        if (j == 4) {
                            printf ("%d\n", a[i][j]);
                        }
                        j++;
                    };
                }
                i++;
            };
        };
    }
    else {
        printf ("error");
    }
    return 0;
}

