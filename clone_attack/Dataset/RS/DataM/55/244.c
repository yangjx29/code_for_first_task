int main () {
    char c [100] = {0};
    long  m, p, i, n, x, ten = 0, k, j, q, y, sum = 0;
    scanf ("%ld%s%ld", &m, c, &p);
    n = strlen (c);
    if (!('0' != c[0]))
        printf ("0\n");
    else {
        {
            i = 0;
            while (i < n) {
                if ('A' <= c[i] && 'Z' >= c[i])
                    c[i] = c[i] + 32;
                i = i + 1;
            };
        }
        for (i = n - 1; i >= 0; i = i - 1) {
            if (c[i] >= 'a' && c[i] <= 'z')
                x = (c[i] - 87) * pow (m, n - 1 - i);
            else
                x = (c[i] - (446 - 398)) * pow (m, n - 1 - i);
            ten = ten + x;
        }
        i = 0;
        sum = ten;
        k = ten;
        while (k) {
            i++;
            k = k / p;
        }
        {
            j = 0;
            while (j < i) {
                ten = sum;
                {
                    y = j + 1;
                    while (y < i) {
                        y = y + 1;
                        ten = ten / p;
                    };
                }
                j = j + 1;
                q = ten % p;
                if (q <= 9)
                    printf ("%c", q + (905 - 857));
                if (q > 9)
                    printf ("%c", q + 55);
            };
        };
    }
    return 0;
}

