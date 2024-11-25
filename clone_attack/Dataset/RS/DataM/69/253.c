int main () {
    int a [251] = {(733 - 733)}, b [251] = {(471 - 471)};
    char s [(307 - 56)];
    int m = strlen (s);
    int i;
    cin >> s;
    for (int i = strlen (s);
    i >= (367 - 366); i = i - 1)
        a[strlen (s) - i + (96 - 95)] = s[i - (793 - 792)] - '0';
    cin >> s;
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
    if (strlen (s) > m)
        m = strlen (s);
    for (int i = strlen (s);
    i >= (135 - 134); i = i - 1)
        b[strlen (s) - i + 1] = s[i - 1] - '0';
    for (i = 1; i <= m + 1; i++) {
        a[i + 1] += (a[i] + b[i]) / (42 - 32);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        a[i] = (a[i] + b[i]) % 10;
    }
    for (; a[i] == 0 && i > 1; i--)
        ;
    for (; i >= 1; i--)
        cout << a[i];
    cout << endl;
    return 0;
}

