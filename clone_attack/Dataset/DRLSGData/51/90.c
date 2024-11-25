int main () {
    int n, i, j, k, l, m, x, y, z;
    char b [501] [6] = {0};
    char a [500];
    scanf ("%d", &n);
    l = 1;
    scanf ("%s", a);
    k = strlen (a);
    {
        i = 0;
        while (i < n) {
            b[0][i] = a[i];
            i = i + 1;
        }
    }
    b[0][4] = 1;
    b[0][5] = 0;
    {
        i = 1;
        while (k - n >= i) {
            y = 0;
            {
                j = 0;
                while (j < l) {
                    x = 0;
                    {
                        m = 0;
                        while (n > m) {
                            if (a[i + m] != b[j][m])
                                x = x + 1;
                            m = m + 1;
                        }
                    }
                    if (!(0 != x)) {
                        y = y + 1;
                        b[j][4]++;
                    }
                    j = j + 1;
                }
            }
            if (!(0 != y)) {
                for (m = 0; m < n; m = m + 1)
                    b[l][m] = a[i + m];
                b[l][4] = 1;
                b[l][5] = l;
                l = l + 1;
            }
            i = i + 1;
        }
    }
    {
        i = 0;
        while (l - 1 > i) {
            {
                j = i + 1;
                while (j < l) {
                    if (b[i][4] < b[j][4]) {
                        z = 0;
                        while (6 > z) {
                            b[500][z] = b[j][z];
                            b[j][z] = b[i][z];
                            b[i][z] = b[500][z];
                            z = z + 1;
                        }
                    }
                    j = j + 1;
                }
            }
            i = i + 1;
        }
    }
    if (!(1 != b[0][4]))
        ;
    else {
        z = 1;
        printf ("%d", b[0][4]);
        {
            i = 1;
            while (i < l) {
                if (!(b[i - 1][4] != b[i][4]))
                    z++;
                else
                    break;
                i = i + 1;
            }
        }
        {
            i = 0;
            for (; z - 1 > i;) {
                for (j = i + 1; z > j; j = j + 1) {
                    if (b[i][5] > b[j][5]) {
                        k = 0;
                        while (6 > k) {
                            b[500][k] = b[j][k];
                            b[j][k] = b[i][k];
                            b[i][k] = b[500][k];
                            k = k + 1;
                        }
                    }
                }
                i = i + 1;
            }
        }
        {
            i = 0;
            while (i < z) {
                j = 0;
                while (j < n) {
                    printf ("%c", b[i][j]);
                    j = j + 1;
                }
                i = i + 1;
            }
        }
    }
    return 0;
}

