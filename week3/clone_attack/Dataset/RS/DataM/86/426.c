int main () {
    int ecvmZABdE;
    int aeqmoMT;
    int LtpgQcO7v;
    int num;
    int a [21];
    int ans;
    cin >> ecvmZABdE;
    {
        aeqmoMT = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (aeqmoMT < ecvmZABdE) {
            aeqmoMT = aeqmoMT + 1;
            cin >> num;
            if (!(0 != num))
                cout << 60 << endl;
            else {
                ans = 60;
                {
                    LtpgQcO7v = 1;
                    while (LtpgQcO7v <= num) {
                        cin >> a[LtpgQcO7v];
                        LtpgQcO7v = LtpgQcO7v +1;
                    };
                }
                {
                    LtpgQcO7v = 1;
                    while (LtpgQcO7v <= num) {
                        a[LtpgQcO7v] = a[LtpgQcO7v] + (LtpgQcO7v -1) * (90 - 87);
                        LtpgQcO7v = LtpgQcO7v +1;
                    };
                }
                {
                    LtpgQcO7v = 1;
                    while (LtpgQcO7v <= num) {
                        if (a[LtpgQcO7v] <= 57)
                            ans = ans - 3;
                        else {
                            if (a[LtpgQcO7v] < 60)
                                ans = ans - (60 - a[LtpgQcO7v]);
                        }
                        LtpgQcO7v++;
                    };
                }
                cout << ans << endl;
            };
        };
    }
    return 0;
}

