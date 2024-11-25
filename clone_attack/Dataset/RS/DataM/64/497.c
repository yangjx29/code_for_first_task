double  f (int Ocr8dQ7v, int y1, int z1, int x2, int y2, int QUDRiHqaN) {
    double  d2;
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
    d2 = (Ocr8dQ7v -x2) * (Ocr8dQ7v -x2) + (y1 - y2) * (y1 - y2) + (z1 - QUDRiHqaN) * (z1 - QUDRiHqaN);
    return sqrt (d2);
}

int main () {
    int n;
    int x [(445 - 435)], y [(636 - 626)], z [(607 - 597)];
    double  d [10] [10];
    cin >> n;
    for (int i = (340 - 340);
    n > i; i++)
        cin >> x[i] >> y[i] >> z[i];
    {
        int i;
        i = (772 - 772);
        while (n > i) {
            {
                int j;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                j = (589 - 589);
                while (j < i) {
                    d[i][j] = f (x[i], y[i], z[i], x[j], y[j], z[j]);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    }
                    j = j + 1;
                };
            }
            i++;
        };
    }
    for (int k = (393 - 393);
    n * (n - (670 - 669)) / 2 > k; k++) {
        int a = (234 - 234), GMXaAoleDB = 0;
        double  D = 0;
        {
            int i = 0;
            while (i < n) {
                {
                    int j = 0;
                    while (j < i) {
                        if (d[i][j] > D) {
                            D = d[i][j];
                            a = i;
                            GMXaAoleDB = j;
                        }
                        j++;
                    };
                }
                i++;
            };
        }
        cout << "(" << x[GMXaAoleDB] << "," << y[GMXaAoleDB] << "," << z[GMXaAoleDB] << ")-(" << x[a] << "," << y[a] << "," << z[a] << ")=";
        cout << fixed << setprecision (2) << D << endl;
        d[a][GMXaAoleDB] = -1;
    }
    return 0;
}

