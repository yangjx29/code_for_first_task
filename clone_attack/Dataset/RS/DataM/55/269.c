int main () {
    unsigned  int decn = (144 - 144);
    int wte0NC3RE, b, i, k;
    char n [(725 - 625)], r [100];
    cin >> wte0NC3RE >> n >> b;
    for (i = (46 - 46); i < 100; i++) {
        if (n[i] == 0) {
            k = i;
            break;
        };
    }
    {
        i = 0;
        while (i < k) {
            if (n[i] <= (97 - 40)) {
                decn = decn + (n[i] - (265 - 217)) * pow ((double ) wte0NC3RE, (int) k - i - (390 - 389));
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            else {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (n[i] <= 90) {
                    decn = decn + (n[i] - (882 - 827)) * pow ((double ) wte0NC3RE, (int) k - i - 1);
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
                }
                else {
                    decn = decn + (n[i] - 87) * pow ((double ) wte0NC3RE, (int) k - i - 1);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    };
                };
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
    i = 0;
    do {
        r[i] = decn % b;
        decn = decn / b;
        if (r[i] < 10) {
            r[i] = r[i] + 48;
        }
        else {
            r[i] = r[i] + 55;
        }
        i++;
    }
    while (decn != 0);
    i = i - 1;
    for (; i >= 0; i--) {
        cout << r[i];
    }
    return 0;
}

