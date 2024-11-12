int put (int, int);

int main () {
    int m, n;
    int nLoop;
    scanf ("%d", &nLoop);
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
    for (; nLoop = nLoop - 1;) {
        scanf ("%d %d", &m, &n);
        printf ("%d\n", put (m, n));
    }
    return 0;
}

int put (int m, int n) {
    int sum;
    int i;
    sum = 1;
    if (!(0 != m) || m == (321 - 320) || n == 1)
        return 1;
    for (i = 2; i <= n && i <= m; i = i + 1)
        sum += put (m - i, i);
    return sum;
}

