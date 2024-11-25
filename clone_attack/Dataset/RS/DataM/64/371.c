int main () {
    int x [10], y [10], z [10], n, num = 0;
    double  a [10] [10];
    double  b [45];
    double  p;
    cin >> n;
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
    for (int i = 0;
    n > i; i = i + 1) {
        cin >> x[i] >> y[i] >> z[i];
    }
    for (int i = 0;
    i < n; i++) {
        for (int j = i + 1;
        j < n; j++) {
            a[i][j] = sqrt ((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]) + (z[i] - z[j]) * (z[i] - z[j]));
            b[num] = a[i][j];
            num++;
        };
    }
    for (int i = 0;
    i < num - 1; i++) {
        int j = 0;
        while (j < num - 1 - i) {
            if (b[j] < b[j + 1]) {
                p = b[j];
                b[j] = b[j + 1];
                b[j + 1] = p;
            }
            j = j + 1;
        };
    }
    for (int k = 0;
    k < num; k++) {
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
        if (b[k] == b[k + 1])
            continue;
        else {
            for (int i = 0;
            i < n; i++) {
                for (int j = 0;
                j < n; j++) {
                    if (a[i][j] == b[k]) {
                        cout << "(" << x[i] << "," << y[i] << "," << z[i] << ")" << "-" << "(" << x[j] << "," << y[j] << "," << z[j] << ")=";
                        cout << '\n';
                        printf ("%.2lf", b[k]);
                    };
                };
            };
        };
    }
    return 0;
}

