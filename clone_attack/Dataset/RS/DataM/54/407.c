int houzi (int n, int osZTnM, int m, int k) {
    if (!(n != osZTnM))
        return m;
    else {
        if (m % (n - 1))
            return -1000000;
        else
            return houzi (n, osZTnM + 1, m * n / (n - 1) + k, k);
    };
}

int main (int argc, char *TAxW6r []) {
    int n, k, m, res;
    cin >> n >> k;
    for (m = 1;; m = m + 1) {
        if (houzi (n, 0, m, k) > 0) {
            res = houzi (n, 0, m, k);
            break;
        };
    }
    cout << res << endl;
    return 0;
}

