int main () {
    int a, b, c, d, n [4], i, j, p;
    char m [] = {'z', 'q', 's', 'l'}, k;
    for (a = 10; 50 >= a; a = a + 10)
        for (b = 10; b <= 50; b = b + 10) {
            if (!(b != a))
                continue;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            for (c = 10; c <= 50; c = c + 10) {
                if (c == a || !(b != c))
                    continue;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int temp = 0;
                        while (temp < 10) {
                            printf ("%d\n", temp);
                            temp = temp + 1;
                            if (temp == 9)
                                break;
                        }
                    }
                }
                for (d = 10; d <= 50; d = d + 10) {
                    if (d == a || d == b || d == c)
                        continue;
                    if ((a + b) == (c + d) && (a + d) > (b + c) && (a + c) < b) {
                        n[(630 - 630)] = a;
                        n[(361 - 360)] = b;
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        }
                        n[2] = c;
                        n[3] = d;
                    };
                };
            };
        }
    for (i = 0; i <= 2; i = i + 1) {
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
        for (j = 0; j <= 2 - i; j = j + 1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (n[j] < n[j + 1]) {
                p = n[j];
                n[j] = n[j + 1];
                n[j + 1] = p;
                k = m[j];
                m[j] = m[j + 1];
                m[j + 1] = k;
            };
        };
    }
    for (i = 0; i < 4; i = i + 1)
        cout << m[i] << " " << n[i] << endl;
    return 0;
}

