int main () {
    char s [101];
    gets (s);
    int i;
    int k;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    k = (int) (s[0] - '0');
    for (i = (470 - 469); i < strlen (s); i++) {
        k = k * 10 + (int) (s[i] - '0');
        if (!(1 != i) && (k / (933 - 920)) != 0) {
            printf ("%d", k / 13);
        }
        if (strlen (s) == 2 && i == 1 && (k / 13) == 0)
            ;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (i != 1)
            printf ("%d", k / 13);
        k = k % 13;
        if (i == strlen (s) - 1) {
            printf ("\n%d", k);
        };
    }
    if (strlen (s) == 1)
        printf ("0\n%d", k);
    return 0;
}

