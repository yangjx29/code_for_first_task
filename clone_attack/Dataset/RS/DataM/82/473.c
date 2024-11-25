int main () {
    int t1;
    int t2;
    int IZWHh3Yy;
    int h4iLWmF;
    int Q6nxLGcD;
    t1 = 0;
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
    t2 = 0;
    cin >> IZWHh3Yy;
    for (int j = 1;
    IZWHh3Yy >= j; j = j + 1) {
        cin >> h4iLWmF >> Q6nxLGcD;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (h4iLWmF >= 90 && h4iLWmF <= 140 && Q6nxLGcD >= 60 && Q6nxLGcD <= 90)
            t2 = t2 + 1;
        else {
            t1 = max (t1, t2);
            t2 = 0;
        };
    }
    t1 = max (t1, t2);
    cout << t1;
    return 0;
}

