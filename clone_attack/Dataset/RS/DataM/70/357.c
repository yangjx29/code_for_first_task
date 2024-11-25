int main () {
    int n;
    double  dis;
    double  x [1000];
    double  y [1000];
    double  d [1000] [1000];
    dis = 0;
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
    for (int i = 0;
    n > i; i = i + 1)
        cin >> x[i] >> y[i];
    for (int i = 0;
    n > i; i++) {
        int j = 0;
        while (n > j) {
            d[i][j] = (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]);
            j = j + 1;
        };
    }
    {
        int i = 0;
        while (i < n) {
            {
                int j = 0;
                while (n > j) {
                    if (d[i][j] > dis)
                        dis = d[i][j];
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    dis = sqrt (dis);
    printf ("%.4f\n", dis);
    return 0;
}

