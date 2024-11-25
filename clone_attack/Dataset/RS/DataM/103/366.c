int main () {
    char s [1000];
    char a;
    a = '0';
    int k;
    int n;
    int i;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    k = 0;
    cin >> s;
    n = strlen (s);
    for (i = 0; i < n; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (s[i] == a || (s[i] - (997 - 965) == a))
            k = k + 1;
        else {
            if (k != 0)
                cout << "(" << a << "," << k << ")";
            a = s[i];
            if (a > 'Z')
                a = a - 32;
            k = 1;
        };
    }
    cout << "(" << a << "," << k << ")";
    return 0;
}

