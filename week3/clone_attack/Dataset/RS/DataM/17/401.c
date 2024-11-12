int main () {
    char a [110];
    char b [110];
    char c [110];
    while (gets (a)) {
        int n;
        n = strlen (a);
        int zQJRxmL, j;
        int R5Qiy20d;
        R5Qiy20d = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        strcpy (b, a);
        strcpy (c, a);
        {
            zQJRxmL = n - 1;
            while (0 <= zQJRxmL) {
                if (!('(' != a[zQJRxmL])) {
                    for (j = zQJRxmL; j < n; j = j + 1) {
                        if (a[j] == ')') {
                            a[j] = 99;
                            b[zQJRxmL] = b[j] = 32;
                            break;
                        };
                    }
                    if (j == n) {
                        b[zQJRxmL] = '$';
                    };
                }
                zQJRxmL = zQJRxmL - 1;
            };
        }
        {
            zQJRxmL = 0;
            while (zQJRxmL < n) {
                if (b[zQJRxmL] != 32 && b[zQJRxmL] != ')' && b[zQJRxmL] != '$')
                    b[zQJRxmL] = 32;
                else {
                    if (b[zQJRxmL] == ')')
                        b[zQJRxmL] = '?';
                }
                zQJRxmL = zQJRxmL + 1;
            };
        }
        printf ("%s\n", c);
        printf ("%s\n", b);
    }
    return 0;
}

