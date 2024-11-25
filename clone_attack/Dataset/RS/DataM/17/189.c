int main () {
    int YGsaVy0;
    int n;
    YGsaVy0 = (604 - 604);
    n = 0;
    char GSp0Wsrdf [(823 - 703)] [120];
    char g72uCE6 [120];
    char cJf8yDT5I [120];
    while (gets (GSp0Wsrdf[n])) {
        puts (GSp0Wsrdf [n]);
        if (GSp0Wsrdf[n][0] == '\n')
            break;
        YGsaVy0 = 0;
        for (int yHxl8bALao = 0;
        yHxl8bALao < strlen (GSp0Wsrdf[n]); yHxl8bALao = yHxl8bALao + 1) {
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
            if (GSp0Wsrdf[n][yHxl8bALao] == '(') {
                g72uCE6[yHxl8bALao] = '$';
                cJf8yDT5I[YGsaVy0] = yHxl8bALao;
                YGsaVy0 = YGsaVy0 +1;
            }
            else {
                if (GSp0Wsrdf[n][yHxl8bALao] == ')') {
                    if (YGsaVy0 == 0) {
                        g72uCE6[yHxl8bALao] = '?';
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        };
                    }
                    else {
                        YGsaVy0 = YGsaVy0 -1;
                        g72uCE6[cJf8yDT5I[YGsaVy0 -1]] = ' ';
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
                        g72uCE6[yHxl8bALao] = ' ';
                    };
                }
                else
                    g72uCE6[yHxl8bALao] = ' ';
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
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
        {
            int yHxl8bALao = 0;
            while (yHxl8bALao < strlen (GSp0Wsrdf[n])) {
                cout << g72uCE6[yHxl8bALao];
                yHxl8bALao = yHxl8bALao + 1;
            };
        }
        n = n + 1;
        cout << endl;
    }
    return 0;
}

