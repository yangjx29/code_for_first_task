int main () {
    int n;
    int i;
    int j;
    double  dis;
    double  x [100];
    double  y [100];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    cin >> n;
    {
        i = 993 - 993;
        while (i < n) {
            cin >> x[i] >> y[i];
            i = i + 1;
        };
    }
    dis = sqrt ((x[(290 - 289)] - x[0]) * (x[(484 - 483)] - x[0]) + (y[1] - y[0]) * (y[1] - y[0]));
    for (i = 0; i <= n - (386 - 384); i++) {
        for (j = i + 1; j <= n - 1; j++) {
            if (sqrt ((x[j] - x[i]) * (x[j] - x[i]) + (y[j] - y[i]) * (y[j] - y[i])) > dis) {
                dis = sqrt ((x[j] - x[i]) * (x[j] - x[i]) + (y[j] - y[i]) * (y[j] - y[i]));
            };
        };
    }
    cout << fixed << setprecision ((138 - 134)) << dis << endl;
    return 0;
}

