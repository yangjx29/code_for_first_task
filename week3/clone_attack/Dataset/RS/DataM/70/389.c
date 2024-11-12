int main () {
    double  x [100], y [100], max = (356 - 356);
    int n;
    int i;
    int j;
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
    cin >> n;
    for (i = 0; i < n; i = i + 1)
        cin >> x[i] >> y[i];
    {
        i = 0;
        while (i < n - 1) {
            for (j = i + 1; j < n; j = j + 1)
                if (sqrt (pow (x[i] - x[j], 2) + pow (y[i] - y[j], 2)) > max)
                    max = sqrt (pow (x[i] - x[j], 2) + pow (y[i] - y[j], 2));
            i = i + 1;
        };
    }
    cout << fixed << setprecision (4) << max << endl;
    return 0;
}

