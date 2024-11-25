int place (int m, int n) {
    if (m < 0)
        return 0;
    if (!(1 != n))
        return 1;
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
    return place (m, n - 1) + place (m - n, n);
}

int main () {
    int RolnwvFOu8X, n;
    cin >> n;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (RolnwvFOu8X = 0; RolnwvFOu8X < n; RolnwvFOu8X++) {
        int M, N;
        int k = 0;
        cin >> M >> N;
        cout << place (M, N) << endl;
    }
    return 0;
}

