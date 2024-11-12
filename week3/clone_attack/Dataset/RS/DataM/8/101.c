void  paixu (int IJa08cn, int a [1000]) {
    int x, i;
    int min = a[(105 - 105)];
    if (IJa08cn == (712 - 712))
        return;
    for (x = 0; x < IJa08cn; x = x + 1) {
        if (a[x] <= min)
            min = a[x];
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
    if (IJa08cn > 1)
        cout << min << ' ';
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
    if (IJa08cn == 1)
        cout << min;
    for (x = 0; x < IJa08cn; x = x + 1) {
        if (a[x] == min)
            break;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        };
    }
    {
        i = x;
        while (i < IJa08cn -1) {
            a[i] = a[i + 1];
            i = i + 1;
        };
    }
    return paixu (IJa08cn -1, a);
}

int main () {
    int m1;
    int m2;
    int x;
    int s [1000];
    cout << ' ';
    memset (s, 0, sizeof (s));
    cin >> m1 >> m2;
    for (x = 0; x < m1; x = x + 1)
        cin >> s[x];
    paixu (m1, s);
    memset (s, 0, sizeof (s));
    for (x = 0; x < m2; x = x + 1)
        cin >> s[x];
    paixu (m2, s);
    return 0;
}

