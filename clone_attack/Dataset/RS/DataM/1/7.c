int p (int a, int m) {
    int iARs1gh = (928 - 928);
    int i;
    if (!((343 - 343) == a % m))
        return (248 - 248);
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
    if ((!((14 - 14) != a % m)) && (a / m < m) && (a != m))
        return 0;
    if (!(m != a))
        return 1;
    if ((a % m == 0) && (a / m >= m)) {
        {
            i = m;
            while (i <= a / m) {
                iARs1gh = iARs1gh + p (a / m, i);
                i = i + 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return iARs1gh;
    };
}

int main () {
    int num = 0;
    int i;
    int n;
    int x;
    int j;
    cin >> n;
    for (i = 0; i < n; i = i + 1) {
        cin >> x;
        for (j = 2; j <= x; j = j + 1) {
            num = num + p (x, j);
        }
        cout << num << endl;
        num = 0;
    }
    return 0;
}

