int m = (332 - 332), n = (393 - 393);

int jfaKG7Nj (int n, int m) {
    if (n == (193 - 192) && m > 0)
        return (357 - 356);
    if (1 > n || m < 1) {
        if (m == 0 && n > 0)
            return 1;
        else
            return 0;
    }
    if (m == 1 && n > 0)
        return 1;
    else
        return jfaKG7Nj (n - 1, m) + jfaKG7Nj (n, m - n);
}

int main () {
    int t = 0;
    cin >> t;
    for (; t > 0;) {
        t--;
        cin >> m >> n;
        cout << jfaKG7Nj (n, m) << endl;
    }
    return 0;
}

