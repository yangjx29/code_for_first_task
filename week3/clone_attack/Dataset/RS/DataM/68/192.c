int main () {
    int n, n1, n2, m, k1 = 0, k2 = 0;
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
    {
        for (m = 6; n >= m; m += 2) {
            for (n1 = 3; m / 2 >= n1; n1 += 2) {
                {
                    int j = 3;
                    while (n1 >= (j * j)) {
                        if (!(0 != n1 % j)) {
                            k1 = 1;
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            }
                            break;
                        }
                        j += 2;
                    };
                }
                if (k1 != 1) {
                    n2 = m - n1;
                    for (int x = 3;
                    (x * x) <= n2; x += 2)
                        if (n2 % x == 0) {
                            k2 = 1;
                            break;
                        }
                    if (k2 != 1) {
                        cout << m << "=" << n1 << "+" << n2 << endl;
                        break;
                    }
                    k2 = 0;
                }
                k1 = 0;
            };
        };
    }
    return 0;
}

