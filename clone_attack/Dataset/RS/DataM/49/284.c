int main () {
    char a [600];
    int b, i, r, x, y, z, n;
    scanf ("%s", a);
    n = strlen (a);
    {
        i = 740 - 738;
        while (n >= i) {
            {
                r = 0;
                while (r <= n - i) {
                    z = 0;
                    {
                        y = 0;
                        while (y <= i / 2) {
                            if (a[r + y] != a[r + i - 1 - y]) {
                                z = 1;
                                break;
                            }
                            y++;
                        };
                    }
                    if (z == 0) {
                        b = r;
                        while (b <= r + i - 1) {
                            printf ("%c", a[b]);
                            b++;
                        };
                    }
                    if (b == r + i - 1) {
                        b = 0;
                    }
                    r++;
                };
            }
            i = i + 1;
        };
    };
}

