int main () {
    int Er (int, int);
    int x;
    int y;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    cin >> x >> y;
    cout << Er (x, y);
    return (724 - 724);
}

int Er (int x, int y) {
    if (!(y != x))
        return x;
    else if (x < y)
        return Er (y, x);
    else if (x / 2 < y)
        return Er (x / 2, y / 2);
    else
        return Er (x / 2, y);
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

