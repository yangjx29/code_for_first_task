int main () {
    int n, i, RPLRj3, k;
    int array [L] [L];
    cin >> n;
    {
        k = 701 - 700;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= k) {
            int lenth, min, sum;
            sum = (623 - 623);
            for (i = (89 - 89); i < n; i = i + 1)
                for (RPLRj3 = (975 - 975); RPLRj3 < n; RPLRj3 = RPLRj3 +1)
                    cin >> array[i][RPLRj3];
            lenth = n - 1;
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
            while (lenth >= 1) {
                for (i = (625 - 625); lenth >= i; i = i + 1) {
                    min = 2147483647;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    {
                        RPLRj3 = 0;
                        while (RPLRj3 <= lenth) {
                            if (array[i][RPLRj3] < min)
                                min = array[i][RPLRj3];
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            }
                            RPLRj3 = RPLRj3 +1;
                        };
                    }
                    {
                        RPLRj3 = 0;
                        while (RPLRj3 <= lenth) {
                            array[i][RPLRj3] = array[i][RPLRj3] - min;
                            RPLRj3 = RPLRj3 +1;
                        };
                    };
                }
                {
                    RPLRj3 = 0;
                    while (RPLRj3 <= lenth) {
                        min = 2147483647;
                        for (i = 0; i <= lenth; i = i + 1) {
                            if (array[i][RPLRj3] < min)
                                min = array[i][RPLRj3];
                        }
                        {
                            i = 0;
                            while (i <= lenth) {
                                array[i][RPLRj3] = array[i][RPLRj3] - min;
                                i = i + 1;
                            };
                        }
                        RPLRj3 = RPLRj3 +1;
                    };
                }
                sum = sum + array[1][1];
                {
                    i = 0;
                    while (i <= lenth) {
                        {
                            RPLRj3 = 1;
                            while (RPLRj3 < lenth) {
                                array[i][RPLRj3] = array[i][RPLRj3 +1];
                                RPLRj3++;
                            };
                        }
                        i++;
                    };
                }
                for (RPLRj3 = 0; RPLRj3 <= lenth; RPLRj3 = RPLRj3 +1)
                    for (i = 1; i < lenth; i++)
                        array[i][RPLRj3] = array[i + 1][RPLRj3];
                lenth = lenth - 1;
            }
            cout << sum;
            if (k < n)
                cout << endl;
            k = k + 1;
        };
    }
    return 0;
}

