int sum, XgQoKtVbMIk [(350 - 249)] [101];

void  pRuBLpKjzUZO (int n) {
    if (n == (312 - 311))
        return;
    else {
        int min;
        {
            int i = 1;
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
            while (n >= i) {
                min = XgQoKtVbMIk[i][1];
                {
                    int q2JjbpGEYH = 1;
                    while (n >= q2JjbpGEYH) {
                        min = XgQoKtVbMIk[i][q2JjbpGEYH] >= min ? min : XgQoKtVbMIk[i][q2JjbpGEYH];
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
                        q2JjbpGEYH = q2JjbpGEYH + 1;
                    };
                }
                {
                    int q2JjbpGEYH = 1;
                    while (n >= q2JjbpGEYH) {
                        XgQoKtVbMIk[i][q2JjbpGEYH] -= min;
                        q2JjbpGEYH = q2JjbpGEYH + 1;
                    };
                }
                i = i + 1;
            };
        }
        {
            int i = 1;
            while (i <= n) {
                min = XgQoKtVbMIk[1][i];
                {
                    int q2JjbpGEYH = 1;
                    while (q2JjbpGEYH <= n) {
                        min = XgQoKtVbMIk[q2JjbpGEYH][i] >= min ? min : XgQoKtVbMIk[q2JjbpGEYH][i];
                        q2JjbpGEYH = q2JjbpGEYH + 1;
                    };
                }
                {
                    int q2JjbpGEYH = 1;
                    while (q2JjbpGEYH <= n) {
                        XgQoKtVbMIk[q2JjbpGEYH][i] -= min;
                        q2JjbpGEYH = q2JjbpGEYH + 1;
                    };
                }
                i = i + 1;
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
        sum = sum + XgQoKtVbMIk[2][2];
        {
            int i = 2;
            while (i <= n - 1) {
                {
                    int q2JjbpGEYH = 1;
                    while (q2JjbpGEYH <= n) {
                        XgQoKtVbMIk[i][q2JjbpGEYH] = XgQoKtVbMIk[i + 1][q2JjbpGEYH];
                        q2JjbpGEYH = q2JjbpGEYH + 1;
                    };
                }
                i = i + 1;
            };
        }
        {
            int i = 2;
            while (i <= n - 1) {
                {
                    int q2JjbpGEYH = 1;
                    while (q2JjbpGEYH <= n) {
                        XgQoKtVbMIk[q2JjbpGEYH][i] = XgQoKtVbMIk[q2JjbpGEYH][i + 1];
                        q2JjbpGEYH = q2JjbpGEYH + 1;
                    };
                }
                i = i + 1;
            };
        };
    }
    pRuBLpKjzUZO (n - 1);
}

int main () {
    int n;
    cin >> n;
    {
        int h4RVMW50Ui = 1;
        while (h4RVMW50Ui <= n) {
            pRuBLpKjzUZO (n);
            h4RVMW50Ui = h4RVMW50Ui + 1;
            memset (XgQoKtVbMIk, 0, sizeof (XgQoKtVbMIk));
            for (int i = 1;
            i <= n; i = i + 1) {
                int q2JjbpGEYH = 1;
                while (q2JjbpGEYH <= n) {
                    cin >> XgQoKtVbMIk[i][q2JjbpGEYH];
                    q2JjbpGEYH = q2JjbpGEYH + 1;
                };
            }
            sum = (812 - 812);
            cout << sum << endl;
        };
    }
    return 0;
}

