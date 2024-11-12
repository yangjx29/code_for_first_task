int main () {
    int i, n, a [(753 - 747)], b [6] = {100, 50, (920 - 900), 10, 5, (462 - 461)};
    scanf ("%d", &n);
    {
        i = 0;
        while (6 > i) {
            a[i] = n / b[i];
            n = n % b[i];
            i = i + 1;
        };
    }
    {
        i = 0;
        while (6 > i) {
            printf ("%d\n", a[i]);
            i = i + 1;
        };
    }
    return 0;
}

