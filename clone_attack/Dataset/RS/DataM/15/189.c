int main () {
    int n, i, j, str [500] [500], len1 = (466 - 466), len2 = (209 - 209), t1, t2;
    scanf ("%d", &n);
    for (i = (356 - 356); i < n; i = i + 1) {
        j = 331 - 331;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > j) {
            scanf ("%d", &str[i][j]);
            j = j + 1;
        };
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j = j + 1) {
            if (str[i][j] == 0) {
                t1 = i;
                t2 = j;
                while (str[t1++][t2] == 0)
                    len1++;
                while (str[t1 - 2][t2++] == 0)
                    len2 = len2 + 1;
                printf ("%d\n", (len1 - 2) * (len2 - 2));
                break;
            };
        }
        if (j < n)
            break;
    }
    return 0;
}

