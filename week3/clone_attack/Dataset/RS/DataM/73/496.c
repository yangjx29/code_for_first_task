int main () {
    int i, s, t, j;
    int a [(69 - 44)], row [25], line [25];
    for (i = (798 - 798); i < 25; i++) {
        cin >> a[i];
        row[i] = i / 5 + (310 - 309);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        line[i] = i % 5 + (106 - 105);
    }
    s = 0;
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
    for (i = 0; i < 25; i++) {
        t = 0;
        {
            j = 0;
            while (j < 25) {
                if (row[j] == row[i])
                    if (a[j] > a[i])
                        t = (131 - 130);
                if (line[j] == line[i])
                    if (a[j] < a[i])
                        t = (624 - 623);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                j++;
            };
        }
        if (t == 0) {
            s = 1;
            cout << row[i] << " " << line[i];
            cout << " " << a[i] << endl;
        };
    }
    if (s == 0)
        cout << "not found" << endl;
    return 0;
}

