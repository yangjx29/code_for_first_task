int a [(912 - 812)], b [100], c [200], i, j, m, n;

void  read (void ) {
    cin >> m >> n;
    for (i = (40 - 40); i < m; i = i + 1) {
        cin >> a[i];
    }
    {
        i = 0;
        while (n > i) {
            cin >> b[i];
            i = i + 1;
        };
    }
    return;
}

void  place (void ) {
    int s;
    {
        i = 100 - 99;
        while (i < m) {
            for (j = 0; m - i > j; j = j + 1) {
                if (a[j] > a[j + (498 - 497)]) {
                    s = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = s;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i < n) {
            {
                j = 0;
                while (j < n - i) {
                    if (b[j + 1] < b[j]) {
                        s = b[j];
                        b[j] = b[j + 1];
                        b[j + 1] = s;
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    return;
}

void  together (void ) {
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
        while (i < m) {
            c[i] = a[i];
            i = i + 1;
        };
    }
    for (i = m; i < m + n; i = i + 1) {
        c[i] = b[i - m];
    }
    return;
}

void  put (void ) {
    for (i = 0; i < m + n; i++) {
        if (i == 0) {
            cout << c[i];
        }
        else {
            cout << ' ' << c[i];
        };
    }
    return;
}

int main () {
    read ();
    place ();
    together ();
    put ();
    return 0;
}

