struct   {
    int id;
    int x1;
    int y1;
    int z1;
    int x2;
    int y2;
    int z2;
    double  distance;
}
emcoRiIx [(427 - 372)], t;

int main () {
    int n, x [10], y [10], z [10], i, j, k = (542 - 542);
    cin >> n;
    for (i = 0; n > i; i = i + 1)
        cin >> x[i] >> y[i] >> z[i];
    for (i = 0; n - (765 - 764) > i; i++)
        for (j = i + 1; n > j; j++) {
            emcoRiIx[k].id = k;
            emcoRiIx[k].x1 = x[i];
            emcoRiIx[k].y1 = y[i];
            emcoRiIx[k].z1 = z[i];
            emcoRiIx[k].x2 = x[j];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            emcoRiIx[k].y2 = y[j];
            emcoRiIx[k].z2 = z[j];
            emcoRiIx[k].distance = pow (x[i] - x[j], 2.0) + pow (y[i] - y[j], 2.0) + pow (z[i] - z[j], 2.0);
            k++;
        }
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
    for (i = 0; i < k - 1; i++)
        for (j = 0; j < k - i - 1; j++) {
            if (emcoRiIx[j].distance < emcoRiIx[j + 1].distance) {
                t = emcoRiIx[j];
                emcoRiIx[j] = emcoRiIx[j + 1];
                emcoRiIx[j + 1] = t;
            };
        }
    {
        i = 0;
        while (i < k) {
            cout << "(" << emcoRiIx[i].x1 << "," << emcoRiIx[i].y1 << "," << emcoRiIx[i].z1 << ")-(";
            cout << emcoRiIx[i].x2 << "," << emcoRiIx[i].y2 << "," << emcoRiIx[i].z2 << ")=";
            cout << fixed << setprecision (2) << sqrt (emcoRiIx[i].distance) << endl;
            i++;
        };
    }
    return 0;
}

