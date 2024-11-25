int fenjie (int, int);

int main () {
    int times;
    int k;
    int num;
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
    cin >> times;
    {
        k = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (k <= times) {
            k = k + 1;
            cin >> num;
            cout << fenjie (num, 1) << endl;
        };
    }
    return 0;
}

int fenjie (int x, int y) {
    int a;
    int i;
    a = 1;
    if (y > x)
        return 0;
    if (x == y)
        return 1;
    if (x > y) {
        if (y == 1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            for (i = y + 1; i <= x; i = i + 1) {
                if (x % i == 0)
                    a = a + fenjie (x / i, i);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            };
        }
        else {
            i = y;
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
            while (i <= x) {
                if (x % i == 0)
                    a = a + fenjie (x / i, i);
                i = i + 1;
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        return a;
    };
}

