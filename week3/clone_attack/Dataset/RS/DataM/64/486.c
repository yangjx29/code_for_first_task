int main () {
    double  tE43Kd [100];
    int a [10], dv0Go7jfidTS [10], c [10], e [100];
    int n, m, i, j, p5nryKAvYSa, y, t = 0;
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
        while (i < n) {
            cin >> a[i] >> dv0Go7jfidTS[i] >> c[i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            {
                j = i + 1;
                while (n > j) {
                    e[t] = 10 * i + j;
                    tE43Kd[e[t]] = sqrt ((a[i] - a[j]) * (a[i] - a[j]) + (dv0Go7jfidTS[i] - dv0Go7jfidTS[j]) * (dv0Go7jfidTS[i] - dv0Go7jfidTS[j]) + (c[i] - c[j]) * (c[i] - c[j]));
                    j++;
                    t++;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    {
        i = 1;
        while (t > i) {
            {
                j = 0;
                while (t - i > j) {
                    if (tE43Kd[e[j + 1]] > tE43Kd[e[j]]) {
                        m = e[j];
                        e[j] = e[j + 1];
                        e[j + 1] = m;
                    }
                    j++;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < t) {
            p5nryKAvYSa = e[i] % 10;
            y = (e[i] - p5nryKAvYSa) / 10;
            cout << "(" << a[y] << "," << dv0Go7jfidTS[y] << "," << c[y] << ")-(" << a[p5nryKAvYSa] << "," << dv0Go7jfidTS[p5nryKAvYSa] << "," << c[p5nryKAvYSa] << ")=" << fixed << setprecision (2) << tE43Kd[e[i]] << endl;
            i++;
        };
    }
    return 0;
}

