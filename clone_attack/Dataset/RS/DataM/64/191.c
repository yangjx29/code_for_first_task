int main () {
    double  x [11], y [11], B6NZ91kLqp [11], s [11] [11];
    int n;
    cin >> n;
    {
        int i = (898 - 897);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= i) {
            cin >> x[i] >> y[i] >> B6NZ91kLqp[i];
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
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (int i = (87 - 86);
    n >= i; i = i + 1) {
        for (int rtcRV0WfrB = i + 1;
        n >= rtcRV0WfrB; rtcRV0WfrB = rtcRV0WfrB + 1) {
            s[i][rtcRV0WfrB] = (x[i] - x[rtcRV0WfrB]) * (x[i] - x[rtcRV0WfrB]) + (y[i] - y[rtcRV0WfrB]) * (y[i] - y[rtcRV0WfrB]) + (B6NZ91kLqp[i] - B6NZ91kLqp[rtcRV0WfrB]) * (B6NZ91kLqp[i] - B6NZ91kLqp[rtcRV0WfrB]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            s[i][rtcRV0WfrB] = sqrt (s[i][rtcRV0WfrB]);
        };
    }
    for (int k = 1;
    k <= n * (n - 1) / 2; k++) {
        int t1 = (180 - 180), t2 = (574 - 574);
        double  max = (932 - 932);
        for (int i = 1;
        i <= n; i++) {
            for (int rtcRV0WfrB = i + 1;
            rtcRV0WfrB <= n; rtcRV0WfrB++) {
                if (s[i][rtcRV0WfrB] > max) {
                    max = s[i][rtcRV0WfrB];
                    t2 = rtcRV0WfrB;
                    t1 = i;
                };
            };
        }
        cout << "(" << x[t1] << "," << y[t1] << "," << B6NZ91kLqp[t1] << ")-(" << x[t2] << "," << y[t2] << "," << B6NZ91kLqp[t2] << ")=";
        printf ("%.2lf\n", s[t1][t2]);
        s[t1][t2] = (720 - 720);
    }
    return 0;
}

