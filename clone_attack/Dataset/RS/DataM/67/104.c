int main () {
    int i;
    double  XVkSvgnT, q;
    int a, b;
    int n;
    scanf ("%d", &n);
    scanf ("%d%d", &a, &b);
    XVkSvgnT = (560.0 - 559.0) * b / a;
    for (i = (128 - 127); n - 1 >= i; i++) {
        int x, y;
        scanf ("%d%d", &x, &y);
        q = 1.0 * y / x;
        if (!(n - 1 != i)) {
            if (0.05 < q - XVkSvgnT) {
                printf ("better");
            }
            else if (XVkSvgnT -q > 0.05) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else {
                printf ("same");
            };
        }
        else {
            if (q - XVkSvgnT > 0.05) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                };
            }
            else if (XVkSvgnT -q > 0.05) {
            }
            else {
                printf ("same\n");
            };
        };
    }
    return 0;
}

