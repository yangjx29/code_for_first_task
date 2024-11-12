int main () {
    unsigned  int n, X2daT8vfiy [300], ax2v5WJtr1z8, YwDXWduqIx8 = (676 - 676), sum = (324 - 324), EaJ6MKfl5reN [300];
    double  max;
    double  XwXdv5YKAg1n;
    double  ch;
    max = 0;
    scanf ("%d", &n);
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
    for (ax2v5WJtr1z8 = 0; ax2v5WJtr1z8 < n; ax2v5WJtr1z8 = ax2v5WJtr1z8 + 1) {
        scanf ("%d", &X2daT8vfiy[ax2v5WJtr1z8]);
        sum = sum + X2daT8vfiy[ax2v5WJtr1z8];
    }
    XwXdv5YKAg1n = (double ) sum / n;
    for (ax2v5WJtr1z8 = 0; ax2v5WJtr1z8 < n; ax2v5WJtr1z8++) {
        if (X2daT8vfiy[ax2v5WJtr1z8] == XwXdv5YKAg1n)
            continue;
        if (X2daT8vfiy[ax2v5WJtr1z8] > XwXdv5YKAg1n)
            ch = X2daT8vfiy[ax2v5WJtr1z8] - XwXdv5YKAg1n;
        if (XwXdv5YKAg1n > X2daT8vfiy[ax2v5WJtr1z8])
            ch = XwXdv5YKAg1n -X2daT8vfiy[ax2v5WJtr1z8];
        if (ch == max) {
            YwDXWduqIx8 = YwDXWduqIx8 +1;
            EaJ6MKfl5reN[YwDXWduqIx8] = X2daT8vfiy[ax2v5WJtr1z8];
        }
        if (ch > max) {
            YwDXWduqIx8 = 0;
            EaJ6MKfl5reN[YwDXWduqIx8] = X2daT8vfiy[ax2v5WJtr1z8];
            max = ch;
        };
    }
    for (ax2v5WJtr1z8 = (244 - 243); ax2v5WJtr1z8 < YwDXWduqIx8; ax2v5WJtr1z8++) {
        int k;
        int NE2wKn;
        for (k = ax2v5WJtr1z8; k > 0; k = k - 1) {
            if (EaJ6MKfl5reN[k] < EaJ6MKfl5reN[k - 1]) {
                NE2wKn = EaJ6MKfl5reN[k];
                EaJ6MKfl5reN[k] = EaJ6MKfl5reN[k - 1];
                EaJ6MKfl5reN[k - 1] = NE2wKn;
            };
        };
    }
    printf ("%d", EaJ6MKfl5reN[0]);
    for (ax2v5WJtr1z8 = 1; ax2v5WJtr1z8 <= YwDXWduqIx8; ax2v5WJtr1z8++)
        printf (",%d", EaJ6MKfl5reN[ax2v5WJtr1z8]);
    return 0;
}

