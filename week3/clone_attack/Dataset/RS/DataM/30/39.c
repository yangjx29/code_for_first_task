int main () {
    int z4xyozOXH3Ef = 0;
    int xeEnzFKW (int);
    int n;
    cin >> n;
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
    {
        int WP914o0fcez2 = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= WP914o0fcez2) {
            if (xeEnzFKW (WP914o0fcez2))
                z4xyozOXH3Ef += WP914o0fcez2 *WP914o0fcez2;
            WP914o0fcez2 = WP914o0fcez2 +1;
        };
    }
    cout << z4xyozOXH3Ef << endl;
    return 0;
}

int xeEnzFKW (int WP914o0fcez2) {
    if (!(0 != WP914o0fcez2 % 7))
        return 0;
    while (WP914o0fcez2 != 0) {
        if (WP914o0fcez2 % 10 == 7)
            return 0;
        WP914o0fcez2 = WP914o0fcez2 / 10;
    }
    return 1;
}

