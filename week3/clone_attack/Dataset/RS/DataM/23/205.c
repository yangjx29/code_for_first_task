int main () {
    char str [100];
    gets (str);
    int n, i, a, j;
    n = strlen (str);
    a = n - 1;
    for (i = n - 1; i > 0; i--)
        if (str[i] == ' ') {
            for (j = i + 1; j <= a; j++)
                printf ("%c", str[j]);
            printf ("%c", str[i]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            a = i - 1;
        }
    for (i = 0; i < a + 1; i++)
        printf ("%c", str[i]);
}

