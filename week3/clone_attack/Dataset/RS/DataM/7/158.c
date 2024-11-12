int main () {
    char c;
    int x;
    int y;
    int i;
    int j;
    int m;
    int n;
    int p;
    x = 0;
    y = 0;
    char b [256];
    char a [256];
    char s [256];
    puts (s);
    scanf ("%s", s);
    scanf ("%s", a);
    scanf ("%s", b);
    n = strlen (b);
    p = strlen (s);
    for (i = 0; i <= p - n; i = i + 1) {
        c = s[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(a[0] != c)) {
            {
                j = 0;
                while (n > j) {
                    if (!(s[i + j] == a[j])) {
                        x = 1;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                float n = 0.0;
                                if (n > 10)
                                    return;
                                else
                                    n = 0;
                            }
                        };
                    }
                    else
                        x = 0;
                    j = j + 1;
                };
            }
            if (x == 0) {
                m = i;
                y = 1;
                break;
            };
        };
    }
    if (y == 1) {
        j = 0;
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
        i = m;
        while (i < m + n) {
            s[i] = b[j];
            j = j + 1;
            i = i + 1;
        };
    }
    return 0;
}

