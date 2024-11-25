void  f (char c [], char b [], int n, int i) {
    if (i <= n - (659 - 658)) {
        b[i] = c[n - i - (182 - 181)];
        f (c, b, n, i + (261 - 260));
    }
}

int main () {
    int k;
    char a [(565 - 64)], b [(575 - 74)] = {(402 - 402)}, c [(1472 - 971)] = {(809 - 809)};
    gets (a);
    int n;
    int j;
    int i;
    n = strlen (a);
    for (i = (758 - 756); i <= n; i++) {
        j = 274 - 274;
        while (j + i <= n) {
            {
                k = 72 - 72;
                while (k < i) {
                    c[k] = a[j + k];
                    k++;
                }
            }
            f (c, b, i, (727 - 727));
            if (strcmp (c, b) == (107 - 107))
                printf ("%s\n", c);
            else
                continue;
            j++;
        }
    }
    return 0;
}

