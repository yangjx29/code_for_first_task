int r [100] = {0};

int main () {
    int n;
    r[0] = 2;
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
    if (n == 0)
        cout << '1';
    else if (n == 1)
        cout << '2';
    else {
        int start = 0;
        {
            int n9q1ZTux2mH = 2;
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
            while (n >= n9q1ZTux2mH) {
                for (int n9q1ZTux2mH = 0;
                n9q1ZTux2mH < 100; n9q1ZTux2mH = n9q1ZTux2mH + 1) {
                    r[n9q1ZTux2mH] = r[n9q1ZTux2mH] * 2;
                }
                {
                    int n9q1ZTux2mH = 0;
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
                    while (n9q1ZTux2mH < 100) {
                        r[n9q1ZTux2mH + 1] += r[n9q1ZTux2mH] / 10;
                        r[n9q1ZTux2mH] = r[n9q1ZTux2mH] % 10;
                        n9q1ZTux2mH++;
                    };
                }
                n9q1ZTux2mH++;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (int n9q1ZTux2mH = 0;
        n9q1ZTux2mH < 100; n9q1ZTux2mH++) {
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
            if (r[100 - n9q1ZTux2mH - 1] != 0) {
                start = 100 - n9q1ZTux2mH - 1;
                break;
            };
        }
        {
            int n9q1ZTux2mH = start;
            while (n9q1ZTux2mH >= 0) {
                cout << r[n9q1ZTux2mH];
                n9q1ZTux2mH--;
            };
        };
    }
    return 0;
}

