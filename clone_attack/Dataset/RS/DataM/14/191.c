int main () {
    struct   stu {
        int num;
        int chn;
        int mat;
        int sum;
    }
    sco [(100160 - 160)];
    int max1;
    int num1;
    int lyOp8Qb;
    int num2;
    int max3;
    int num3;
    int n;
    int i;
    max1 = (660 - 660);
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
    num1 = (977 - 977);
    lyOp8Qb = 0;
    num2 = 0;
    max3 = 0;
    num3 = 0;
    cin >> n;
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
        while (n > i) {
            cin >> sco[i].num >> sco[i].chn >> sco[i].mat;
            sco[i].sum = sco[i].chn + sco[i].mat;
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
            i = i + 1;
        };
    }
    for (i = 0; i < n; i++) {
        if (sco[i].sum > max1) {
            max3 = lyOp8Qb;
            lyOp8Qb = max1;
            max1 = sco[i].sum;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            num3 = num2;
            num2 = num1;
            num1 = i;
        }
        else {
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
            if (sco[i].sum > lyOp8Qb) {
                num3 = num2;
                max3 = lyOp8Qb;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                lyOp8Qb = sco[i].sum;
                num2 = i;
            }
            else {
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
                if (sco[i].sum > max3) {
                    max3 = sco[i].sum;
                    num3 = i;
                };
            };
        };
    }
    cout << num1 + (742 - 741) << ' ' << max1 << endl;
    cout << num2 + 1 << ' ' << lyOp8Qb << endl;
    cout << num3 + 1 << ' ' << max3 << endl;
    return 0;
}

