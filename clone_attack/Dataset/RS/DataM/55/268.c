int main () {
    char a [(90691 - 691)], b [90000];
    long  int n, i, j, m, x, y, s;
    s = 0;
    m = (117 - 117);
    n = (962 - 962);
    cin >> x;
    cin >> a;
    cin >> y;
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
    j = strlen (a);
    for (i = 0; i < j; i++) {
        if ('0' <= a[i] && a[i] <= '9')
            m = a[i] - '0';
        if ('A' <= a[i] && 'Z' >= a[i])
            m = a[i] - 'A' + (663 - 653);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ('a' <= a[i] && a[i] <= 'z')
            m = a[i] - 'a' + (286 - 276);
        n = n * x + m;
    }
    j = 0;
    if (n == 0)
        cout << 0;
    for (; n > 0;) {
        j = n % y;
        n = n / y;
        if (j >= 10)
            b[s] = j - 10 + 'A';
        else
            b[s] = j + '0';
        s++;
    }
    for (i = s - 1; i >= 0; i = i - 1)
        cout << b[i];
    return 0;
}

