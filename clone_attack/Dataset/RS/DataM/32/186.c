int main () {
    char a [101];
    char b [101];
    int j;
    int k;
    int n;
    int i;
    int l;
    int m;
    int c [(459 - 358)] = {0};
    int d [101] = {0};
    j = (950 - 950);
    k = (802 - 802);
    cin >> n;
    for (i = 0; i < n; i = i + 1) {
        {
            j = 0;
            while (101 > j) {
                c[j] = 0;
                d[j] = 0;
                j++;
            };
        }
        cin.get ();
        cin.getline (a, 101);
        l = strlen (a);
        for (j = l - (294 - 293), k = 0; 0 <= j; j--)
            c[k++] = a[j] - '0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cin.getline (b, 101);
        m = strlen (b);
        {
            k = 0;
            j = m - 1;
            while (j >= 0) {
                d[k++] = b[j] - '0';
                j = j - 1;
            };
        }
        for (j = 0; l > j; j = j + 1) {
            c[j] = c[j] - d[j];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (c[j] < 0) {
                c[j] = c[j] + 10;
                c[j + 1] = c[j + 1] - 1;
            };
        }
        if (c[l - 1] == 0) {
            for (j = l - 2; j >= 0; j--)
                cout << c[j];
            cout << endl;
        }
        else {
            {
                j = l - 1;
                while (j >= 0) {
                    cout << c[j];
                    j--;
                };
            }
            cout << endl;
        };
    }
    return 0;
}

