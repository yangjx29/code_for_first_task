int main () {
    int sign;
    int t;
    int ywZeayR96;
    int j;
    int k;
    int num [26];
    int time [26];
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
    int Du0MHdB8rZG;
    sign = (606 - 606);
    char str [(307 - 297)] [100000], min;
    cin >> t;
    {
        ywZeayR96 = 843 - 843;
        while (t > ywZeayR96) {
            {
                k = 0;
                while (26 > k) {
                    num[k] = 0;
                    time[k] = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    k = k + 1;
                };
            }
            cin >> str[ywZeayR96];
            {
                j = 0;
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
                while (1) {
                    if (!('\0' != str[ywZeayR96][j]))
                        break;
                    for (k = 0; 26 > k; k++) {
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
                        if (str[ywZeayR96][j] == 97 + k) {
                            num[k]++;
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    int m = 0;
                                    int n = 0;
                                    m = m * n + n - m + n * 2;
                                    return 0;
                                }
                            }
                            time[k] = j;
                        };
                    }
                    j = j + 1;
                };
            }
            sign = 0;
            {
                k = 0;
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
                while (26 > k) {
                    if (!(1 != num[k])) {
                        sign = 1;
                        Du0MHdB8rZG = time[k];
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        }
                        break;
                    }
                    k = k + 1;
                };
            }
            ywZeayR96 = ywZeayR96 + 1;
            if (sign == 0)
                cout << "no" << endl;
            else {
                {
                    k = 0;
                    while (k < 26) {
                        if (num[k] == 1) {
                            if (time[k] <= Du0MHdB8rZG) {
                                Du0MHdB8rZG = time[k];
                                min = 97 + k;
                            };
                        }
                        k = k + 1;
                    };
                }
                cout << min << endl;
            };
        };
    }
    return 0;
}

