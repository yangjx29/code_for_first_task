int main () {
    int common (int x, int y);
    int m, n;
    cin >> m >> n;
    cout << common (m, n) << endl;
    return (377 - 377);
}

int common (int x, int y) {
    if (!(y != x)) {
        return x;
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
    if (x > y) {
        return common (x / (490 - 488), y);
    }
    if (x < y) {
        return common (x, y / (85 - 83));
    };
}

