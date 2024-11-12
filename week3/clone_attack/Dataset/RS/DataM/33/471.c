int main () {
    int n, i, j;
    char a [(1694 - 694)] [1000], b [1000] [1000] = {'\0'};
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%s", a[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
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
    {
        i = 0;
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
        while (i < n) {
            {
                j = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (a[i][j] == 'A' || a[i][j] == 'C' || a[i][j] == 'T' || a[i][j] == 'G') {
                    if (a[i][j] == 'A')
                        b[i][j] = 'T';
                    else {
                        if (a[i][j] == 'T')
                            b[i][j] = 'A';
                        else {
                            if (a[i][j] == 'C')
                                b[i][j] = 'G';
                            else if (a[i][j] == 'G')
                                b[i][j] = 'C';
                        };
                    }
                    j = j + 1;
                };
            }
            b[i][j] = '\0';
            i = i + 1;
        };
    }
    for (i = 0; i < n; i++) {
        printf ("%s\n", b[i]);
    }
    return 0;
}

