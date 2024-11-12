int main () {
    int n;
    int k;
    int m;
    m = n;
    int zPhGw0g;
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
    zPhGw0g = n;
    int M;
    M = m;
    cin >> n >> k;
    while (n > 0) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ((M -k) % zPhGw0g == 0 && (M -k) / zPhGw0g >= 1) {
            n = n - 1;
            M = M -(M -k) / zPhGw0g - k;
        }
        else {
            m++;
            M = m;
            n = zPhGw0g;
        };
    }
    cout << m << endl;
    return 0;
}

