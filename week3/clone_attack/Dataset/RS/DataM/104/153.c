int main () {
    int x, eHeorE;
    cin >> x >> eHeorE;
    while (!(eHeorE == x)) {
        if (x > eHeorE)
            x = x / 2;
        else
            eHeorE = eHeorE / 2;
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
    if (x == eHeorE)
        cout << x << endl;
    return (798 - 798);
}

