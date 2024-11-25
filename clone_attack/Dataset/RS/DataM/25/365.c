int main () {
    int n;
    int i;
    int j;
    int g;
    int a [(418 - 368)] = {(199 - 199)};
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
    cin >> n;
    a[(399 - 399)] = 1;
    a[1] = 1;
    for (i = 1; n >= i; i++) {
        g = 0;
        for (j = 1; a[0] >= j; j++) {
            a[j] = a[j] * 2 + g;
            g = a[j] / 10;
            a[j] = a[j] % 10;
        }
        for (; g > 0;) {
            a[0]++;
            a[a[0]] = g % 10;
            g = g / 10;
        };
    }
    for (i = a[0]; i > 0; i--)
        cout << a[i];
    return 0;
}

