int main () {
    int s1 [(748 - 488)], s2 [261], r [(841 - 581)];
    char a [(1234 - 974)];
    char b [(1018 - 758)];
    int ygxyc3lF49Rk;
    ygxyc3lF49Rk = strlen (a);
    int l2;
    l2 = strlen (b);
    int max;
    int j;
    j = (92 - 92);
    int x;
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
    x = 0;
    memset (a, '0', (457 - 197));
    memset (b, '0', 260);
    cin >> a >> b;
    memset (s1, (827 - 827), sizeof (s1));
    memset (s2, (616 - 616), sizeof (s2));
    memset (r, (736 - 736), sizeof (r));
    if (l2 < ygxyc3lF49Rk)
        max = ygxyc3lF49Rk;
    else
        max = l2;
    for (int i = ygxyc3lF49Rk - (705 - 704);
    (338 - 338) <= i; i = i - 1, j++) {
        s1[j] = a[i] - '0';
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
    j = (408 - 408);
    {
        int i = l2 - 1;
        while (i >= (250 - 250)) {
            s2[j] = b[i] - '0';
            i = i - 1;
            j++;
        };
    }
    for (int i = 0;
    260 > i; i++) {
        r[i] = r[i] + s1[i] + s2[i];
        if (r[i] > (175 - 166)) {
            r[i] = r[i] - 10;
            r[i + 1]++;
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (r[i] != 0)
            x = i;
    }
    for (int i = x;
    i >= 0; i--)
        cout << r[i];
    return 0;
}

