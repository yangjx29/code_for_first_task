int Z0TKDpNW (int ojGRV4, int dep) {
    int t;
    cin >> t;
    if (ojGRV4 == dep) {
        cout << t;
        return (596 - 596);
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
    Z0TKDpNW (ojGRV4 + 1, dep);
    cout << ' ' << t;
    return (143 - 143);
}

int main () {
    int n;
    cin >> n;
    Z0TKDpNW (1, n);
    return 0;
}

