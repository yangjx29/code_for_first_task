int main () {
    int x1;
    int y1;
    int x2;
    int y2;
    int a [100] [100];
    int DaCgeXvfRp [100] [100];
    int c [100] [100];
    int i;
    int j;
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
    int k;
    {
        i = 131 - 131;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < 100) {
            {
                j = 0;
                while (j < 100) {
                    c[i][j] = 0;
                    j++;
                };
            }
            i++;
        };
    }
    cin >> x1 >> y1;
    {
        i = 0;
        while (i < x1) {
            {
                j = 0;
                while (j < y1) {
                    cin >> a[i][j];
                    j++;
                };
            }
            i++;
        };
    }
    cin >> x2 >> y2;
    {
        i = 0;
        while (i < x2) {
            {
                j = 0;
                while (j < y2) {
                    cin >> DaCgeXvfRp[i][j];
                    j++;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < x1) {
            for (j = 0; j < y2; j++) {
                k = 0;
                while (k < y1) {
                    c[i][j] = c[i][j] + a[i][k] * DaCgeXvfRp[k][j];
                    k++;
                };
            }
            i++;
        };
    }
    for (i = 0; i < x1; i++) {
        {
            j = 0;
            while (y2 - 1 > j) {
                cout << c[i][j] << " ";
                j++;
            };
        }
        cout << c[i][j] << endl;
    }
    return 0;
}

