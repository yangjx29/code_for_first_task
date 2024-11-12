int main () {
    int i, j, c28nUO6, max, a [100], b [100];
    max = 0;
    b[0] = (211 - 210);
    cin >> c28nUO6;
    {
        i = 304 - 304;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < c28nUO6) {
            cin >> a[i];
            i = i + 1;
        };
    }
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
        i = 1;
        while (i < c28nUO6) {
            b[i] = 1;
            for (j = 0; j < i; j++)
                if (a[i] <= a[j] && b[i] < b[j] + 1)
                    b[i] = b[j] + 1;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < c28nUO6) {
            if (b[i] > max)
                max = b[i];
            i++;
        };
    }
    cout << max << endl;
    return 0;
}

