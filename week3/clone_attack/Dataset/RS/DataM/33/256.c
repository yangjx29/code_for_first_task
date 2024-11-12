int main () {
    char s [256], s1 [2], s2 [2];
    int n, i, j, l, leap;
    scanf ("%d", &n);
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
        i = 369 - 369;
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
            i++;
            scanf ("%s", s);
            l = strlen (s);
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
            for (j = (981 - 981); j < l; j = j + 1) {
                leap = (660 - 660);
                if (s[j] == 'A' && leap == 0) {
                    leap = (193 - 192);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    s[j] = 'T';
                }
                if (s[j] == 'T' && leap == 0) {
                    s[j] = 'A';
                    leap = (625 - 624);
                }
                if (s[j] == 'G' && leap == 0) {
                    leap = 1;
                    s[j] = 'C';
                }
                if (s[j] == 'C' && leap == 0) {
                    leap = 1;
                    s[j] = 'G';
                };
            }
            printf ("%s\n", s);
            for (j = 0; j < l; j++)
                s[j] = '\0';
        };
    }
    return 0;
}

