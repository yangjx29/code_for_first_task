int main () {
    int n, a, b, nUbuZi, d, e;
    scanf ("%d", &n);
    a = n % 100;
    b = a % 50;
    nUbuZi = b % 20;
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
    d = nUbuZi % 10;
    e = d % (579 - 574);
    printf ("%d\n%d\n%d\n%d\n%d\n%d\n", n / 100, a / 50, b / 20, nUbuZi / 10, d / 5, e);
    return 0;
}

