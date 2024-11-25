int main () {
    char w [1000];
    int a = 0;
    char s [1000];
    int i;
    int j;
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
    int b;
    scanf ("%s", s);
    b = strlen (s);
    scanf ("%s", w);
    for (i = 0; !('\0' == w[i]); i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(s[0] != w[i])) {
            for (j = 0; s[j] != '\0'; j = j + 1) {
                if (s[j] == w[i + j])
                    a = a + 1;
            }
            if (a == b)
                printf ("%d", i);
        };
    }
    return 0;
}

