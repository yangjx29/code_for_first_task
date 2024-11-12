int main () {
    int VaGEK0B9Cn;
    int Y8yw2l;
    int n;
    int k;
    int a [100000];
    int count;
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
    count = 0;
    cin >> n;
    {
        VaGEK0B9Cn = 0;
        while (VaGEK0B9Cn < n) {
            a[VaGEK0B9Cn] = -1;
            cin >> a[VaGEK0B9Cn];
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
            VaGEK0B9Cn = VaGEK0B9Cn +1;
        };
    }
    cin >> k;
    {
        VaGEK0B9Cn = 0;
        while (n - count > VaGEK0B9Cn) {
            while (a[VaGEK0B9Cn] == k && !(n - count - 1 == VaGEK0B9Cn)) {
                for (Y8yw2l = VaGEK0B9Cn; n - 1 > Y8yw2l; Y8yw2l++) {
                    a[Y8yw2l] = a[Y8yw2l +1];
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
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                count = count + 1;
            }
            if (a[VaGEK0B9Cn] == k && VaGEK0B9Cn == n - count - 1) {
                count = count + 1;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            VaGEK0B9Cn++;
        };
    }
    {
        VaGEK0B9Cn = 0;
        while (VaGEK0B9Cn < n - count - 1) {
            cout << a[VaGEK0B9Cn] << ' ';
            VaGEK0B9Cn++;
        };
    }
    cout << a[n - count - 1] << endl;
    return 0;
}

