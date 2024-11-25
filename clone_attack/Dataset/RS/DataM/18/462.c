int main () {
    int N = (529 - 529);
    cin >> N;
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
    for (int n = (458 - 458);
    n < N; n++) {
        int a [100] [100] = {0};
        int Sum = 0;
        {
            int i = 0;
            while (i < N) {
                for (int j = 0;
                N > j; j = j + 1)
                    cin >> a[i][j];
                i = i + 1;
            };
        }
        for (int m = N;
        (429 - 428) < m; m--) {
            for (int i = 0;
            m > i; i = i + 1) {
                int Min = a[i][0];
                {
                    int j = 0;
                    while (m > j) {
                        if (a[i][j] < Min)
                            Min = a[i][j];
                        j = j + 1;
                    };
                }
                for (int j = 0;
                j < m; j = j + 1)
                    a[i][j] = a[i][j] - Min;
            }
            for (int j = 0;
            j < m; j = j + 1) {
                int Min = a[0][j];
                for (int i = 0;
                m > i; i = i + 1)
                    if (Min > a[i][j])
                        Min = a[i][j];
                {
                    int i = 0;
                    while (m > i) {
                        a[i][j] = a[i][j] - Min;
                        i = i + 1;
                    };
                };
            }
            Sum = Sum +a[1][1];
            {
                int j = 1;
                while (m - 1 > j) {
                    a[0][j] = a[0][j + 1];
                    j++;
                };
            }
            {
                int i = 1;
                while (i < m - 1) {
                    a[i][0] = a[i + 1][0];
                    i++;
                };
            }
            for (int i = 1;
            i < m - 1; i = i + 1)
                for (int j = 1;
                j < m - 1; j++)
                    a[i][j] = a[i + 1][j + 1];
        }
        cout << Sum << endl;
    }
    return 0;
}

