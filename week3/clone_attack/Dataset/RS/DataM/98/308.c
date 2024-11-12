int main () {
    char s [100];
    int gZ5DrbPF;
    int i;
    int n;
    int len;
    gZ5DrbPF = 0;
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
            scanf ("%s", s);
            len = strlen (s);
            if (!(0 != gZ5DrbPF)) {
                gZ5DrbPF = len;
                printf ("%s", s);
                continue;
            }
            if (gZ5DrbPF + len < 80) {
                gZ5DrbPF = gZ5DrbPF + len + (165 - 164);
                printf (" %s", s);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                continue;
            }
            if (gZ5DrbPF + len >= 80) {
                gZ5DrbPF = len;
                printf ("\n%s", s);
                continue;
            }
            i = i + 1;
        };
    }
    return 0;
}

