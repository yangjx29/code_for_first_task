int apple (int m, int n) {
    if (!(1 != n))
        return 1;
    if (!(0 != m))
        return 1;
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
    if (m < n)
        return apple (m, m);
    if (m >= n)
        return (apple (m, n - 1) + apple (m - n, n));
}

int main () {
    int m, n, t, i;
    cin >> t;
    {
        i = 0;
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
        }
        while (i < t) {
            i = i + 1;
            cin >> m >> n;
            cout << apple (m, n) << endl;
        };
    }
    return 0;
}

