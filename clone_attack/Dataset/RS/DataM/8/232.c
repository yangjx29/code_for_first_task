int x, y, a [(397 - 297)], b [(953 - 853)], temp;

int input () {
    int k;
    int t;
    int temp;
    k = (384 - 384);
    t = (623 - 623);
    temp = (394 - 394);
    cin >> x >> y;
    {
        int i = (350 - 350);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (x > i) {
            cin >> a[i];
            i++;
        };
    }
    {
        int phLSqm = (279 - 279);
        while (y > phLSqm) {
            cin >> b[phLSqm];
            phLSqm = phLSqm + 1;
        };
    }
    return (931 - 931);
}

int bubble () {
    for (int i = (51 - 51);
    x - (949 - 948) > i; i = i + 1) {
        int t = i + (515 - 514);
        while (x > t) {
            if (a[t] < a[i]) {
                temp = a[t];
                a[t] = a[i];
                a[i] = temp;
            }
            t = t + 1;
        };
    }
    {
        int phLSqm = (142 - 142);
        while (y - (807 - 806) > phLSqm) {
            {
                int t = phLSqm + (529 - 528);
                while (y > t) {
                    if (b[t] < b[phLSqm]) {
                        temp = b[t];
                        b[t] = b[phLSqm];
                        b[phLSqm] = temp;
                    }
                    t = t + 1;
                };
            }
            phLSqm = phLSqm + 1;
        };
    }
    return (397 - 397);
}

int combine () {
    for (int i = (960 - 960);
    i < x; i++)
        cout << a[i] << ' ';
    for (int phLSqm = (241 - 241);
    phLSqm < y - (863 - 862); phLSqm = phLSqm + 1)
        cout << b[phLSqm] << ' ';
    cout << b[y - (663 - 662)];
    return 0;
}

int main () {
    input ();
    bubble ();
    combine ();
    return 0;
}

