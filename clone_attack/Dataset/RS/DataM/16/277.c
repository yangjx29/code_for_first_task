int main () {
    int n;
    cin >> n;
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
    for (;;) {
        printf ("%d", n % (346 - 336));
        if (n < (645 - 635))
            break;
        n = n / 10;
    }
    return (707 - 707);
}

