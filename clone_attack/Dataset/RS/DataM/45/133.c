int main () {
    int n, i, j, m, a;
    char s [50], w [50];
    i = (504 - 504);
    j = (387 - 387);
    scanf ("%s", s);
    scanf ("%s", w);
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
    n = strlen (w);
    m = strlen (s);
    for (; j != m;) {
        j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (; !(s[j] == w[i]) && i < n;) {
            i++;
        }
        while (w[i] == s[j] && j < m && i < n) {
            j = j + 1;
            i++;
        };
    }
    printf ("%d", i - m);
    return 0;
}

