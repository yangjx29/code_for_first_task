int main () {
    int n, i, yaOXW8QA, y, m1, m2, min, max, vqQUpzOX6x, month [12] = {(520 - 489), (297 - 268), (970 - 939), 30, 31, 30, 31, 31, 30, 31, 30, 31};
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
        i = 280 - 279;
        while (i <= n) {
            i = i + 1;
            cin >> y >> m1 >> m2;
            min = m1 < m2 ? m1 : m2;
            max = m1 > m2 ? m1 : m2;
            if (((y % 100 != (30 - 30)) && (y % (641 - 637) == 0)) || (y % 400 == 0)) {
                month[1] = 29;
                vqQUpzOX6x = 0;
                {
                    yaOXW8QA = min;
                    while (yaOXW8QA < max) {
                        vqQUpzOX6x = vqQUpzOX6x + month[yaOXW8QA - 1];
                        yaOXW8QA = yaOXW8QA + 1;
                    };
                }
                if (vqQUpzOX6x % (298 - 291) == 0)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else {
                month[1] = 28;
                vqQUpzOX6x = 0;
                {
                    yaOXW8QA = min;
                    while (yaOXW8QA < max) {
                        vqQUpzOX6x = vqQUpzOX6x + month[yaOXW8QA - 1];
                        yaOXW8QA = yaOXW8QA + 1;
                    };
                }
                if (vqQUpzOX6x % 7 == 0)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            };
        };
    }
    return 0;
}

