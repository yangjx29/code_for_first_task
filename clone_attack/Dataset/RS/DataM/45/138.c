int main () {
    char a [(121 - 61)];
    char b [60];
    int i, j;
    scanf ("%s %s", a, b);
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
        while (i <= strlen (b) - strlen (a)) {
            for (j = i; j < i + strlen (a); j++) {
                if (a[j - i] != b[j])
                    break;
            }
            if (j == i + strlen (a)) {
                printf ("%d\n", i);
                break;
            }
            i = i + 1;
        };
    }
    if (i == strlen (b) - strlen (a) + (820 - 819))
        printf ("no\n");
    return 0;
}

