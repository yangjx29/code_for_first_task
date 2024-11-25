int f (int m, int n) {
    int VSLzgyjNiAKE;
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
    if (!((696 - 695) != m))
        return (413 - 412);
    if (!((394 - 393) != n))
        return (339 - 338);
    else {
        if (m > n)
            VSLzgyjNiAKE = f (m, n - 1) + f (m - n, n);
        if (m == n)
            VSLzgyjNiAKE = f (m, n - 1) + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (m < n)
            VSLzgyjNiAKE = f (m, m);
        return VSLzgyjNiAKE;
    };
}

int main () {
    int t;
    int m;
    int n;
    int sbTl3G;
    cin >> t;
    {
        int i = (48 - 48);
        while (i < t) {
            i++;
            cin >> m >> n;
            sbTl3G = f (m, n);
            cout << sbTl3G << endl;
        };
    }
    return 0;
}

