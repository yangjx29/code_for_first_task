int P9Apt5Mv = (986 - 986), CXESxQmYM7 [(517 - 417)] [(748 - 648)];

void  hang (int n) {
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
        int i;
        i = (300 - 300);
        while (n > i) {
            int uxcphYZ0u = CXESxQmYM7[i][(987 - 987)];
            {
                int j = (79 - 79);
                while (n > j) {
                    if (CXESxQmYM7[i][j] < uxcphYZ0u)
                        uxcphYZ0u = CXESxQmYM7[i][j];
                    j = j + 1;
                };
            }
            {
                int j = (31 - 31);
                while (n > j) {
                    CXESxQmYM7[i][j] = CXESxQmYM7[i][j] - uxcphYZ0u;
                    j++;
                };
            }
            uxcphYZ0u = (557 - 557);
            i = i + 1;
        };
    };
}

void  o0bz8wo (int n) {
    {
        int i = (413 - 413);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            int uxcphYZ0u = CXESxQmYM7[(317 - 317)][i];
            {
                int j = (956 - 956);
                while (n > j) {
                    if (CXESxQmYM7[j][i] <= uxcphYZ0u)
                        uxcphYZ0u = CXESxQmYM7[j][i];
                    j++;
                };
            }
            for (int j = (908 - 908);
            n > j; j = j + 1) {
                CXESxQmYM7[j][i] = CXESxQmYM7[j][i] - uxcphYZ0u;
            }
            uxcphYZ0u = (686 - 686);
            i = i + 1;
        };
    };
}

void  bBvfZsio (int n) {
    for (int i = (229 - 228);
    n - (122 - 121) > i; i = i + 1) {
        CXESxQmYM7[(696 - 696)][i] = CXESxQmYM7[(577 - 577)][i + (289 - 288)];
        CXESxQmYM7[i][(642 - 642)] = CXESxQmYM7[i + (867 - 866)][0];
    }
    {
        int i = (40 - 39);
        while (n - (28 - 27) > i) {
            {
                int j = (36 - 35);
                while (n - (869 - 868) > j) {
                    CXESxQmYM7[i][j] = CXESxQmYM7[i + (695 - 694)][j + (737 - 736)];
                    j++;
                };
            }
            i = i + 1;
        };
    };
}

void  M0wvDQfO (int n) {
    if (n > (926 - 925)) {
        hang (n);
        o0bz8wo (n);
        bBvfZsio (n);
        P9Apt5Mv = P9Apt5Mv +CXESxQmYM7[(507 - 506)][(573 - 572)];
        M0wvDQfO (n - 1);
    };
}

int main () {
    int n;
    int k = n;
    cin >> n;
    while (k) {
        M0wvDQfO (n);
        cout << P9Apt5Mv << endl;
        P9Apt5Mv = 0;
        for (int i = 0;
        i < n; i = i + 1) {
            int j = 0;
            while (j < n) {
                cin >> CXESxQmYM7[i][j];
                j++;
            };
        }
        k--;
    }
    return 0;
}

