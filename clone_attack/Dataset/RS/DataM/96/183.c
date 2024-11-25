int main () {
    int l = 0, s, m;
    char a;
    int c [200], ans [200];
    while (scanf ("%c", &a) && a != '\n') {
        c[l++] = a - '0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    m = 0;
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
    {
        int i = 0;
        while (i < l) {
            c[i] += m * 10;
            m = c[i] % 13;
            ans[i] = c[i] / 13;
            i++;
        };
    }
    for (s = 0; l > s; s++) {
        if (!(0 == ans[s]))
            break;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    if (s == l)
        cout << 0 << endl;
    else {
        {
            int i = s;
            while (i < l) {
                cout << ans[i];
                i++;
            };
        }
        cout << endl;
    }
    cout << m << endl;
    return 0;
}

