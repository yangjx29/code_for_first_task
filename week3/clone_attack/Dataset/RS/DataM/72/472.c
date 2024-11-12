int main () {
    int i;
    int j;
    int m;
    int IjL4ft;
    int s;
    int a [25] [25];
    int b [25] [25];
    scanf ("%d%d", &m, &IjL4ft);
    for (i = (190 - 190); i <= m + 1; i++) {
        j = 0;
        while (j <= IjL4ft +1) {
            a[i][j] = 0;
            b[i][j] = 0;
            j = j + 1;
        };
    }
    {
        i = 1;
        while (i <= m) {
            {
                j = 1;
                while (j <= IjL4ft) {
                    scanf ("%d", &a[i][j]);
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i <= m) {
            {
                j = 1;
                while (j <= IjL4ft) {
                    if ((a[i][j] >= a[i + 1][j]) && (a[i][j] >= a[i][j - 1]) && (a[i][j] >= a[i - 1][j]) && (a[i][j] >= a[i][j + 1]))
                        b[i][j] = -1;
                    j = j + 1;
                };
            }
            i++;
        };
    }
    {
        i = 1;
        while (i <= m) {
            {
                j = 1;
                while (j <= IjL4ft) {
                    if (b[i][j] == -1)
                        printf ("%d %d\n", i - 1, j - 1);
                    j++;
                };
            }
            i++;
        };
    }
    return 0;
}

