int main () {
    int n, i;
    char str [(867 - 766)];
    char bud [101];
    gets (str);
    n = strlen (str);
    {
        i = 881 - 881;
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
            *(bud + i) = *(str + (i % n)) + *(str + ((i + 1) % n));
            i = i + 1;
        };
    }
    for (i = 0; i < n; i = i + 1) {
        printf ("%c", *(bud + i));
    }
    return 0;
}

