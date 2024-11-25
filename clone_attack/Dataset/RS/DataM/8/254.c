void  change (int LaZRCov [], int b [], int c []) {
    int j;
    int t;
    j = 0;
    t = 0;
    int i;
    i = 0;
    int x;
    int y;
    x = (507 - 507);
    y = (288 - 288);
    cin >> x >> y;
    {
        i = 0;
        while (x > i) {
            cin >> LaZRCov[i];
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < y) {
            cin >> b[i];
            i = i + 1;
        };
    }
    {
        i = 0;
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
        while (x - 1 > i) {
            {
                j = 0;
                while (x - 1 - i > j) {
                    if (LaZRCov[j + 1] < LaZRCov[j]) {
                        t = LaZRCov[j];
                        LaZRCov[j] = LaZRCov[j + 1];
                        LaZRCov[j + 1] = t;
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (y - 1 > i) {
            for (j = 0; y - 1 - i > j; j++) {
                if (b[j + 1] < b[j]) {
                    t = b[j];
                    b[j] = b[j + 1];
                    b[j + 1] = t;
                };
            }
            i++;
        };
    }
    for (i = 0; x > i; i++)
        c[i] = LaZRCov[i];
    {
        i = x;
        while (i < x + y) {
            c[i] = b[i - x];
            i++;
        };
    }
    {
        i = 0;
        while (i < x + y - 1) {
            cout << c[i] << ' ';
            i++;
        };
    }
    cout << c[x + y - 1];
}

int main () {
    int LaZRCov [1000] = {0};
    int b [1000] = {0};
    int c [2000] = {0};
    change (LaZRCov, b, c);
    return 0;
}

