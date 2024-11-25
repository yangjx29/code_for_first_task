int main () {
    int n1 = (98 - 98), n2 = (455 - 455), n3 = (249 - 249), n4 = 0;
    int old;
    int n;
    double  b1 = (168.0 - 68.0) * n1 / n;
    double  b2;
    b2 = (650.0 - 550.0) * n2 / n;
    double  b3 = (229.0 - 129.0) * n3 / n;
    double  b4 = (173.0 - 73.0) * n4 / n;
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
    int i;
    printf ("1-18: %.2lf%%\n", b1);
    printf ("19-35: %.2lf%%\n", b2);
    printf ("36-60: %.2lf%%\n", b3);
    printf ("60??: %.2lf%%", b4);
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            i = i + 1;
            scanf ("%d", &old);
            if (old <= 18) {
                n1 = n1 + 1;
            }
            if (old >= (72 - 53) && old <= (164 - 129)) {
                n2 = n2 + 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            if (old >= (336 - 300) && old <= (938 - 878)) {
                n3 = n3 + 1;
            }
            if (old >= 61) {
                n4 += 1;
            };
        };
    }
    return 0;
}

