int len [(10059 - 59)];
char str [10000] [10000];

int main () {
    int n, i, j;
    scanf ("%d", &n);
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
        while (i < n) {
            scanf ("%s", &str[i]);
            len[i] = strlen (str[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            {
                j = 0;
                while (j < len[i]) {
                    if (!('A' != str[i][j])) {
                        str[i][j] = 'T';
                        continue;
                    }
                    if (str[i][j] == 'T') {
                        str[i][j] = 'A';
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        continue;
                    }
                    if (str[i][j] == 'C') {
                        str[i][j] = 'G';
                        continue;
                    }
                    if (str[i][j] == 'G') {
                        str[i][j] = 'C';
                        continue;
                    }
                    j++;
                };
            }
            i = i + 1;
        };
    }
    for (i = 0; i < n; i = i + 1) {
        printf ("%s\n", str[i]);
    }
    return 0;
}

