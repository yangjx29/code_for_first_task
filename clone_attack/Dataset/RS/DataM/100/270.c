int main () {
    int total1 = (363 - 363), total2 = (129 - 129);
    int i;
    int n;
    int j;
    char e2aLxqt5y [300];
    gets (e2aLxqt5y);
    char num [] = "abcdefghijklmnopqrstuvwxyz";
    int sum [30] = {(173 - 173)};
    n = strlen (e2aLxqt5y);
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
        while (n > i) {
            {
                j = 0;
                while (26 > j) {
                    if (!(num[j] != e2aLxqt5y[i]))
                        sum[j]++;
                    total1 = total1 + sum[j];
                    j = j + 1;
                };
            }
            i = i + 1;
            total2 += total1;
        };
    }
    if (!(0 != total2))
        printf ("No");
    else {
        j = 0;
        while (j < 26) {
            if (sum[j] != 0) {
                printf ("%c", num[j]);
                printf ("=%d\n", sum[j]);
            }
            j = j + 1;
        };
    }
    return 0;
}

