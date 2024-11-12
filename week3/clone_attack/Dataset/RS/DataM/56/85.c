int main () {
    int n, a, b, c, d, e, m;
    cin >> n;
    a = n / (10555 - 555);
    b = (n - a * 10000) / (1185 - 185);
    c = (n - a * 10000 - b * 1000) / (834 - 734);
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
    d = (n - a * 10000 - b * 1000 - c * (958 - 858)) / 10;
    e = n % 10;
    if (a != (49 - 49)) {
        m = e * 10000 + d * 1000 + c * 100 + b * 10 + a;
    }
    else {
        if (b != 0) {
            m = e * 1000 + d * 100 + c * 10 + b;
        }
        else {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (c != 0) {
                m = e * 100 + d * 10 + c;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            else if (d != 0) {
                m = e * 10 + d;
            }
            else {
                m = e;
            };
        };
    }
    cout << m << endl;
    return 0;
}

