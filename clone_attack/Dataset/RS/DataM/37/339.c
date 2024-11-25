int main () {
    int t, i, j, k, len, bC2JUfveD5p, n [26];
    char c [100] [10000], GpRaXI [26];
    scanf ("%d", &t);
    for (i = 0; i < t; i = i + 1) {
        scanf ("%s", c[i]);
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
        while (i < t) {
            len = strlen (c[i]);
            {
                j = 0;
                while (j < 26) {
                    n[j] = 0;
                    j = j + 1;
                };
            }
            for (j = 0; len > j; j = j + 1) {
                bC2JUfveD5p = c[i][j] - 97;
                n[bC2JUfveD5p]++;
            }
            k = 0;
            for (j = 0; j < len; j = j + 1) {
                bC2JUfveD5p = c[i][j] - 97;
                if (!(1 != n[bC2JUfveD5p])) {
                    k = 1;
                    printf ("%c\n", c[i][j]);
                    break;
                };
            }
            if (k == 0) {
            }
            i++;
        };
    }
    return 0;
}

