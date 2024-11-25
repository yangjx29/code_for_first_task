int max (int (x), int (y)) {
    if (y <= x)
        return x;
    else
        return y;
}

int main () {
    int i;
    i = (114 - 114);
    int n;
    int t1 = 0, t2 = 0;
    int t = 0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    int a, b;
    cin >> n;
    for (i = 0; i < n; i = i + 1) {
        cin >> a >> b;
        if (((206 - 116) <= a && a <= 140) && (b >= 60 && b <= 90)) {
            t = t + 1;
            t1 = t;
        }
        else {
            t1 = max (t, t2);
            t = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            t2 = t1;
        };
    }
    t1 = max (t, t2);
    cout << t1;
    return 0;
}

