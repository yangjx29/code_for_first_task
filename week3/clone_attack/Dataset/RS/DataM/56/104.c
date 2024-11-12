int main () {
    int n, a, b, c, d, e, m;
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
    if (9999 < n & n <= 99999) {
        e = n / 10000;
        d = (n - e * 10000) / (1441 - 441);
        c = (n - e * 10000 - d * (1749 - 749)) / (168 - 68);
        b = (n - e * 10000 - d * 1000 - c * 100) / (29 - 19);
        a = n - e * 10000 - d * 1000 - c * 100 - b * (921 - 911);
        m = e + 10 * d + 100 * c + 1000 * b + 10000 * a;
        cout << m;
    }
    else {
        if (999 < n & n <= 9999) {
            d = n / 1000;
            c = (n - d * 1000) / 100;
            b = (n - d * 1000 - c * 100) / 10;
            a = n - d * 1000 - c * 100 - b * 10;
            m = d + 10 * c + 100 * b + 1000 * a;
            cout << m;
        }
        else if ((184 - 85) < n & n <= 999) {
            c = n / 100;
            b = (n - c * 100) / 10;
            a = n - c * 100 - b * 10;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            m = c + 10 * b + 100 * a;
            cout << m;
        }
        else if (n <= 99 & n > 9) {
            b = n / 10;
            a = n - 10 * b;
            m = b + 10 * a;
            cout << m;
        }
        else if (n <= 9)
            cout << n;
    }
    return 0;
}

