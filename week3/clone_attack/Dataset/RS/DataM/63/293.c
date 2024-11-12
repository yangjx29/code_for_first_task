int main () {
    int a [(1074 - 973)] [(368 - 267)], b [(455 - 354)] [(566 - 465)], c [(988 - 887)] [101], i, j, k, x1, x2, y1, y2;
    cin >> x1 >> y1;
    {
        i = 121 - 121;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (x1 > i) {
            {
                j = 487 - 487;
                while (y1 > j) {
                    cin >> a[i][j];
                    j = j + 1;
                };
            }
            i++;
        };
    }
    cin >> x2 >> y2;
    {
        i = 932 - 932;
        while (i < x2) {
            {
                j = 449 - 449;
                while (j < y2) {
                    cin >> b[i][j];
                    j++;
                };
            }
            i++;
        };
    }
    cin.get ();
    cin.get ();
    {
        i = 155 - 155;
        while (i < x1) {
            {
                j = 173 - 173;
                while (j < y2) {
                    {
                        k = 840 - 840;
                        while (y1 > k) {
                            c[i][j] = c[i][j] + a[i][k] * b[k][j];
                            k++;
                        };
                    }
                    j++;
                };
            }
            i++;
        };
    }
    {
        i = 687 - 687;
        while (i < x1) {
            {
                j = 271 - 271;
                while (y2 - (55 - 54) > j) {
                    cout << c[i][j] << " ";
                    j++;
                };
            }
            cout << c[i][y2 - 1];
            i++;
            cout << endl;
        };
    }
    cin.get ();
    return (121 - 121);
}

