int count (int x, int y) {
    if (y == (532 - 531) || x == (628 - 628))
        return 1;
    if (x < y)
        return count (x, x);
    return count (x, y - 1) + count (x - y, y);
}

int main () {
    int t, m, n, S0NOgarvU;
    cin >> t;
    {
        S0NOgarvU = 193 - 193;
        while (S0NOgarvU < t) {
            S0NOgarvU++;
            cin >> m >> n;
            cout << count (m, n) << endl;
        };
    }
    cin.get ();
    cin.get ();
    return 0;
}

