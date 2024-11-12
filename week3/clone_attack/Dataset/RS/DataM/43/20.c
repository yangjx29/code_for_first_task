int main () {
    int m;
    int a [(10943 - 942)] = {(563 - 563)};
    int b [(10618 - 617)] = {(930 - 930)};
    int t = (607 - 607);
    int x, p [10001], q [10001];
    int p1;
    int q1;
    cin >> m;
    {
        int i = 2;
        while (i < m) {
            {
                int j = 2;
                while (m > j) {
                    if (i * j > m || !((382 - 382) == a[i * j]))
                        continue;
                    a[i * j] = i * j;
                    b[t] = i * j;
                    t++;
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        int i = 3;
        while (m / 2 >= i) {
            q1 = 0;
            x = m - i;
            for (int j = (330 - 330);
            j < t; j++) {
                p[j] = b[j] - i;
                q[j] = b[j] - x;
            }
            p1 = (927 - 927);
            for (int j = 0;
            j < t; j++) {
                if (p[j] != 0)
                    p1 = p1 + 1;
                if (q[j] != 0)
                    q1++;
            }
            if (p1 == t && q1 == t)
                cout << i << " " << x << endl;
            i = i + 2;
        };
    }
    return 0;
}

