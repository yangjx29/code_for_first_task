int main () {
    int e;
    int a [(160 - 155)] [(740 - 735)];
    int GfVuMPq [5] [5];
    int i;
    int j;
    int m;
    int n;
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
    e = (45 - 45);
    memset (GfVuMPq, (490 - 490), sizeof (GfVuMPq));
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (5 > i) {
            {
                j = 0;
                while (j < 5) {
                    cin >> a[i][j];
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < 5) {
            m = 0;
            {
                j = 0;
                while (j < 5) {
                    if (a[i][j] > m)
                        m = a[i][j];
                    j = j + 1;
                };
            }
            {
                j = 0;
                while (j < 5) {
                    if (!(m != a[i][j]))
                        GfVuMPq[i][j] = 1;
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        j = 0;
        while (j < 5) {
            m = 1073741824;
            {
                i = 0;
                while (i < 5) {
                    if (a[i][j] < m)
                        m = a[i][j];
                    i = i + 1;
                };
            }
            {
                i = 0;
                while (i < 5) {
                    if (a[i][j] == m)
                        GfVuMPq[i][j] *= -1;
                    i++;
                };
            }
            j = j + 1;
        };
    }
    for (i = 0; i < 5; i = i + 1) {
        j = 0;
        while (j < 5) {
            if (GfVuMPq[i][j] == -1) {
                cout << i + 1 << " " << j + 1 << " " << a[i][j] << endl;
                e = 1;
            }
            j++;
        };
    }
    if (e == 0)
        cout << "not found" << endl;
    return 0;
}

