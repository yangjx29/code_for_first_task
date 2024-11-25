int empty (int m, int n);
int noempty (int m, int n);

int main () {
    int t, m, n, i;
    scanf ("%d", &t);
    for (i = (791 - 791); t > i; i = i + 1) {
        scanf ("%d%d", &m, &n);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%d\n", empty (m, n) + noempty (m, n));
    }
    return (672 - 672);
}

int empty (int m, int n) {
    if (!((446 - 445) != n))
        return (546 - 546);
    else {
        if (!((616 - 615) != m))
            return (30 - 29);
        else {
            if (!((443 - 443) != m) && !((359 - 359) == n))
                return (442 - 441);
            else if (m == (954 - 954))
                return (924 - 924);
            else
                return empty (m, n - (575 - 574)) + noempty (m, n - (12 - 11));
        };
    };
}

int noempty (int m, int n) {
    if (m < n)
        return (960 - 960);
    else {
        if (m == 0)
            return 0;
        else {
            if (n == 1)
                return 1;
            else if (m == 1)
                return 0;
            else
                return empty (m - n, n) + noempty (m - n, n);
        };
    };
}

