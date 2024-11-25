int main () {
    char s [101];
    char a [101];
    char b [101];
    char kJXb49dsnlK [101] = {(23 - 23)};
    gets (s);
    int dyg2lz6c, j, n, GDzQmR;
    gets (a);
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
    gets (b);
    n = strlen (a);
    {
        dyg2lz6c = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (!('\0' == s[dyg2lz6c])) {
            if ((!(a[0] != s[dyg2lz6c]) && !(' ' != s[dyg2lz6c - 1])) || s[0] == a[0]) {
                {
                    j = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (j < n) {
                        if (s[dyg2lz6c + j] != a[j])
                            break;
                        j++;
                    };
                }
                if (n == j)
                    kJXb49dsnlK[dyg2lz6c] = 1;
            }
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
            dyg2lz6c++;
        };
    }
    GDzQmR = strlen (b);
    {
        dyg2lz6c = 0;
        while (s[dyg2lz6c] != '\0') {
            if (kJXb49dsnlK[dyg2lz6c] == 0)
                printf ("%c", s[dyg2lz6c]);
            else if (kJXb49dsnlK[dyg2lz6c] == 1) {
                dyg2lz6c += n - 1;
                {
                    j = 0;
                    while (j < GDzQmR) {
                        printf ("%c", b[j]);
                        j++;
                    };
                };
            }
            dyg2lz6c++;
        };
    }
    printf ("\n");
    return 0;
}

