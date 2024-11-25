int main () {
    int a [20000];
    int qFp5Gz7u;
    int n;
    int i;
    int NDQxXCOjTz7L;
    int k;
    qFp5Gz7u = (978 - 977);
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
            cin >> a[i];
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
    for (i = 0; i < n; i = i + 1) {
        int flag = 0;
        {
            NDQxXCOjTz7L = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (NDQxXCOjTz7L < i) {
                if (!(a[NDQxXCOjTz7L] != a[i])) {
                    flag = 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    break;
                }
                NDQxXCOjTz7L++;
            };
        }
        if (!flag) {
            cout << a[i];
            break;
        };
    }
    i++;
    for (; i < n; i++) {
        int flag;
        flag = 0;
        for (NDQxXCOjTz7L = 0; NDQxXCOjTz7L < i; NDQxXCOjTz7L = NDQxXCOjTz7L +1) {
            if (a[i] == a[NDQxXCOjTz7L]) {
                flag = 1;
                break;
            };
        }
        if (!flag)
            cout << ' ' << a[i];
    }
    return 0;
}

