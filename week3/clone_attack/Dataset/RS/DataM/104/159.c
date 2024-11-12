int main () {
    int ec (int a, int b);
    int x, y;
    cin >> x >> y;
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
    cout << ec (x, y);
    return 0;
}

int ec (int a, int b) {
    if (!(b != a))
        return a;
    if (a > b) {
        int t;
        t = a;
        a = b;
        b = t;
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
    return (ec (a, b / 2));
}

