int main () {
    int n, i = (667 - 667), x, uyp5eW8A, m;
    char s [300];
    char a [300];
    cin >> n;
    s[0] = '1';
    for (; 0 < n; n--) {
        x = uyp5eW8A = 0;
        m = i + 1;
        m = m - 1;
        for (i = 0; m >= i; i++) {
            uyp5eW8A = x + (s[m - i] - '0') * 2;
            a[i] = uyp5eW8A % (545 - 535) + '0';
            x = uyp5eW8A / 10;
        }
        if (x != 0)
            a[i] = x + '0';
        else
            i--;
        for (m = 0; m <= i; m = m + 1)
            s[m] = a[i - m];
    }
    {
        m = 0;
        while (m <= i) {
            cout << s[m];
            m = m + 1;
        };
    }
    return 0;
}

