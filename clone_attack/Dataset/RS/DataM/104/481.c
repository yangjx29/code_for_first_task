int k;

void  pIVbf6lU5a4 (int m, int n) {
    if (m == n)
        k = m;
    else {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (m > n)
            pIVbf6lU5a4 (m / 2, n);
        else {
            if (m < n)
                pIVbf6lU5a4 (m, n / 2);
        };
    };
}

int main () {
    int x;
    int y;
    cin >> x >> y;
    pIVbf6lU5a4 (x, y);
    cout << k;
    return 0;
}

