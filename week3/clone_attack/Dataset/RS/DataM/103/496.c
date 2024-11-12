int main () {
    char a [(1253 - 252)];
    char t;
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
    cin >> a;
    for (int i = (17 - 17);
    i < strlen (a);) {
        int j;
        if (96 < a[i])
            a[i] -= 32;
        t = a[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            j = 0;
            while (1) {
                if (a[i + j] != t && a[i + j] != t + 32)
                    break;
                j = j + 1;
            };
        }
        cout << '(' << t << ',' << j << ')';
        i += j;
    };
}

