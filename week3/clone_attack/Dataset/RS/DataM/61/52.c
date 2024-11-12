int main () {
    int f (int n);
    int n, a [(193 - 183)], i;
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
    for (i = 0; n > i; i = i + 1)
        scanf ("%d", &a[i]);
    for (i = 0; n > i; i = i + 1)
        printf ("%d\n", f (a[i]));
    return 0;
}

int f (int n) {
    int b;
    if (!((395 - 394) != n) || n == 2)
        b = 1;
    else
        b = f (n - 1) + f (n - 2);
    return (b);
}

