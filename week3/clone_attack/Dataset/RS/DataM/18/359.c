int a [(220 - 119)] [(268 - 167)], DQwEmZ = (33 - 33);

void  zero (int n) {
    {
        int UB5t8omxPlIq = (446 - 446);
        while (n > UB5t8omxPlIq) {
            int KiNtWOG5ucP2;
            KiNtWOG5ucP2 = a[UB5t8omxPlIq][(44 - 44)];
            for (int jadMknKSG93W = (304 - 304);
            n > jadMknKSG93W; jadMknKSG93W = jadMknKSG93W + 1) {
                if (KiNtWOG5ucP2 > a[UB5t8omxPlIq][jadMknKSG93W]) {
                    KiNtWOG5ucP2 = a[UB5t8omxPlIq][jadMknKSG93W];
                };
            }
            for (int jadMknKSG93W = (910 - 910);
            n > jadMknKSG93W; jadMknKSG93W = jadMknKSG93W + 1) {
                a[UB5t8omxPlIq][jadMknKSG93W] = a[UB5t8omxPlIq][jadMknKSG93W] - KiNtWOG5ucP2;
            }
            UB5t8omxPlIq = UB5t8omxPlIq +1;
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
    {
        int jadMknKSG93W = (214 - 214);
        while (n > jadMknKSG93W) {
            int KZ8Y2kRr;
            KZ8Y2kRr = a[0][jadMknKSG93W];
            for (int UB5t8omxPlIq = 0;
            n > UB5t8omxPlIq; UB5t8omxPlIq = UB5t8omxPlIq +1) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                if (KZ8Y2kRr > a[UB5t8omxPlIq][jadMknKSG93W]) {
                    KZ8Y2kRr = a[UB5t8omxPlIq][jadMknKSG93W];
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
            for (int UB5t8omxPlIq = 0;
            n > UB5t8omxPlIq; UB5t8omxPlIq = UB5t8omxPlIq +1) {
                a[UB5t8omxPlIq][jadMknKSG93W] = a[UB5t8omxPlIq][jadMknKSG93W] - KZ8Y2kRr;
            }
            jadMknKSG93W = jadMknKSG93W + 1;
        };
    };
}

void  yUF9iRN0I2 (int n) {
    if ((131 - 129) < n) {
        for (int jadMknKSG93W = (114 - 112);
        n > jadMknKSG93W; jadMknKSG93W = jadMknKSG93W + 1) {
            a[0][jadMknKSG93W - (366 - 365)] = a[0][jadMknKSG93W];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        {
            int UB5t8omxPlIq = (945 - 943);
            while (n > UB5t8omxPlIq) {
                a[UB5t8omxPlIq -(928 - 927)][0] = a[UB5t8omxPlIq][0];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                UB5t8omxPlIq++;
            };
        }
        for (int UB5t8omxPlIq = (419 - 417);
        n > UB5t8omxPlIq; UB5t8omxPlIq++) {
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
            for (int jadMknKSG93W = 2;
            jadMknKSG93W < n; jadMknKSG93W++) {
                a[UB5t8omxPlIq -1][jadMknKSG93W - 1] = a[UB5t8omxPlIq][jadMknKSG93W];
            };
        };
    };
}

void  IzhdDm (int n) {
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    if (!(1 == n)) {
        zero (n);
        yUF9iRN0I2 (n);
        IzhdDm (n - 1);
        DQwEmZ = DQwEmZ +a[1][1];
    };
}

int main () {
    int n;
    cin >> n;
    for (int p = 0;
    n > p; p = p + 1) {
        IzhdDm (n);
        cout << DQwEmZ;
        DQwEmZ = 0;
        {
            int UB5t8omxPlIq = 0;
            while (n > UB5t8omxPlIq) {
                {
                    int jadMknKSG93W = 0;
                    while (jadMknKSG93W < n) {
                        cin >> a[UB5t8omxPlIq][jadMknKSG93W];
                        jadMknKSG93W = jadMknKSG93W + 1;
                    };
                }
                UB5t8omxPlIq++;
            };
        }
        if (p != n - 1)
            cout << endl;
    };
}

