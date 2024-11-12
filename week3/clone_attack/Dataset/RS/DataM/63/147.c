int main () {
    int xcs7dkUxiKw;
    int njS2PWto;
    int lCi2uB;
    int pHaNywSRoU9;
    int IWZRJp0efHUd;
    int y2;
    int i;
    int FiGaNYz8LM5k;
    int k;
    int GhLN9Oj0IQxr [100] [100];
    int b [100] [100];
    int c [100] [100];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    memset (c, 0, sizeof (c));
    cin >> lCi2uB >> IWZRJp0efHUd;
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
        while (i < lCi2uB) {
            {
                FiGaNYz8LM5k = 0;
                while (FiGaNYz8LM5k < IWZRJp0efHUd) {
                    cin >> GhLN9Oj0IQxr[i][FiGaNYz8LM5k];
                    FiGaNYz8LM5k++;
                };
            }
            i = i + 1;
        };
    }
    cin >> pHaNywSRoU9 >> y2;
    {
        i = 0;
        while (i < pHaNywSRoU9) {
            {
                FiGaNYz8LM5k = 0;
                while (y2 > FiGaNYz8LM5k) {
                    cin >> b[i][FiGaNYz8LM5k];
                    FiGaNYz8LM5k++;
                };
            }
            i++;
        };
    }
    xcs7dkUxiKw = lCi2uB;
    njS2PWto = y2;
    {
        i = 0;
        while (xcs7dkUxiKw > i) {
            {
                FiGaNYz8LM5k = 0;
                while (FiGaNYz8LM5k < njS2PWto) {
                    {
                        k = 0;
                        while (k < pHaNywSRoU9) {
                            c[i][FiGaNYz8LM5k] = c[i][FiGaNYz8LM5k] + GhLN9Oj0IQxr[i][k] * b[k][FiGaNYz8LM5k];
                            k++;
                        };
                    }
                    FiGaNYz8LM5k++;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < xcs7dkUxiKw) {
            cout << c[i][0];
            {
                FiGaNYz8LM5k = 1;
                while (FiGaNYz8LM5k < njS2PWto) {
                    cout << " " << c[i][FiGaNYz8LM5k];
                    FiGaNYz8LM5k++;
                };
            }
            i++;
            cout << endl;
        };
    }
    return 0;
}

