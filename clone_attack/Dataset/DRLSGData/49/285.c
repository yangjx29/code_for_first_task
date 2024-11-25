int main () {
    char c [(576 - 75)];
    int a, i, j, m, n;
    gets (c);
    n = strlen (c);
    for (m = (995 - 993); m <= n; m++) {
        for (i = (954 - 954); i <= n - m; i++) {
            a = (953 - 953);
            for (j = i; m + i > j; j++) {
                if (c[j] != c[m + i - j + i - (784 - 783)]) {
                    a = 1;
                    break;
                }
            }
            if (a == 0) {
                for (j = i; j < m + i; j++)
                    printf ("%c", c[j]);
            }
        }
    }
    return 0;
}

