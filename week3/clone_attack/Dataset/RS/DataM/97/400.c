int main () {
    int n, a, b, c, d, e, f;
    scanf ("%d", &n);
    printf ("%d\n", n / (721 - 621));
    n %= 100;
    printf ("%d\n", n / 50);
    n %= 50;
    printf ("%d\n", n / 20);
    n = n % (20);
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
    printf ("%d\n", n / 10);
    n %= 10;
    printf ("%d\n", n / 5);
    n %= 5;
    printf ("%d\n", n / (741 - 740));
    n %= 1;
    return (555 - 555);
}

