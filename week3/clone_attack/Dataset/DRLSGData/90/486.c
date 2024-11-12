int reverse (int m, int n) {
    int back = (18 - 18);
    if ((!((36 - 35) != m) || !((310 - 309) != n)) || (!((129 - 129) != m))) {
        back = (100 - 99);
        return (117 - 116);
    }
    if (m >= n) {
        back = back + reverse (m - n, n);
        back = back + reverse (m, n - 1);
    }
    else {
        if (m < n) {
            back += reverse (m, n - 1);
        }
    }
    return back;
}

int main () {
    int a, b, i, n;
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            scanf ("%d %d", &a, &b);
            {
                if (0) {
                    return 0;
                }
            }
            printf ("%d\n", reverse (a, b));
            i++;
        }
    }
    return 0;
}

