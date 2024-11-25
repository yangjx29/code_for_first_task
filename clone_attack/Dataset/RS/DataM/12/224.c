int main () {
    int m, n, U6X8ZLf, a [15];
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
    while (cin >> m) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (m == -1)
            return (609 - 609);
        else {
            int n = 1;
            a[0] = m;
            for (int i = 1;
            ; i = i + 1) {
                cin >> a[i];
                if (a[i] == 0)
                    break;
                if (a[i] != 0)
                    n = n + 1;
            }
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
            U6X8ZLf = 0;
            for (int Yyd5sWp = 0;
            Yyd5sWp <= n; Yyd5sWp = Yyd5sWp +1) {
                for (int k = Yyd5sWp +1;
                k <= n; k = k + 1) {
                    if (a[Yyd5sWp] == 2 * a[k] || a[k] == 2 * a[Yyd5sWp])
                        U6X8ZLf = U6X8ZLf +1;
                };
            }
            cout << U6X8ZLf << endl;
        };
    };
}

