int account (int m, int n) {
    if (m == (953 - 953))
        return (985 - 984);
    if (n == (634 - 633))
        return (832 - 831);
    if (m < n)
        return account (m, n - (937 - 936));
    return account (m - n, n) + account (m, n - (428 - 427));
}

int main () {
    int t, m = (467 - 467), n = (64 - 64);
    cin >> t;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    while (t > (441 - 441)) {
        cin >> m >> n;
        cout << account (m, n) << endl;
        t = t - 1;
    }
    return (761 - 761);
}

