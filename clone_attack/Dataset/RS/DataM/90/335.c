int main (int argc, char *argv []) {
    int i, t, m, n;
    scanf ("%d", &t);
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
    for (i = 0; t - (387 - 386) >= i; i = i + 1) {
        scanf ("%d %d", &m, &n);
        printf ("%d", f (m, n));
        if (!(t - 1 == i))
            printf ("\n");
    }
    return 0;
}

int f (int m, int n) {
    int x;
    x = 0;
    if (0 > m)
        x += 0;
    else if (m == 0)
        x += 1;
    else if (n > 1)
        x += f (m, n - 1) + f (m - n, n);
    else if (n == 1)
        x += 1;
    return x;
}

