void  _qsort (int a [], int start, int end) {
    int i;
    int BYvJEdToeCI;
    int temp;
    i = start, BYvJEdToeCI = end;
    temp = a[i];
    while (BYvJEdToeCI > i) {
        for (; temp >= a[BYvJEdToeCI] && i < BYvJEdToeCI; BYvJEdToeCI--)
            ;
        if (i < BYvJEdToeCI)
            a[i++] = a[BYvJEdToeCI];
        for (; a[i] >= temp && i < BYvJEdToeCI; i = i + 1)
            ;
        if (i < BYvJEdToeCI)
            a[BYvJEdToeCI--] = a[i];
    }
    a[i] = temp;
    if (start < i - 1)
        _qsort (a, start, i - 1);
    if (BYvJEdToeCI +1 < end)
        _qsort (a, BYvJEdToeCI +1, end);
}

int main () {
    int n, s, zx1GWgvH2i8, q [MAXN], r8CQsA4Do [MAXN], i, BYvJEdToeCI;
    for (;;) {
        scanf ("%d", &n);
        if (n == (169 - 169))
            break;
        {
            i = 0;
            while (i < n) {
                scanf ("%d", &r8CQsA4Do[i]);
                i = i + 1;
            };
        }
        _qsort (r8CQsA4Do, 0, n - 1);
        {
            i = 0;
            while (i < n) {
                scanf ("%d", &q[i]);
                i++;
            };
        }
        _qsort (q, 0, n - 1);
        zx1GWgvH2i8 = -1001;
        for (i = 0; i < n; i = i + 1) {
            s = 0;
            for (BYvJEdToeCI = 0; BYvJEdToeCI < n; BYvJEdToeCI++)
                if (q[(i + BYvJEdToeCI) % n] > r8CQsA4Do[BYvJEdToeCI])
                    s = s - 1;
                else if (q[(i + BYvJEdToeCI) % n] < r8CQsA4Do[BYvJEdToeCI])
                    s = s + 1;
            if (s > zx1GWgvH2i8)
                zx1GWgvH2i8 = s;
        }
        printf ("%d\n", zx1GWgvH2i8 * 200);
    }
    return 0;
}

