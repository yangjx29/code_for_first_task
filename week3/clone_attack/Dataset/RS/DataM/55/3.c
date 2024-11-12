int main () {
    char n [100];
    char p [100];
    int N;
    int a;
    int i;
    int len;
    int b;
    int o [(290 - 190)];
    N = (822 - 822);
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
    cin >> a >> n >> b;
    if (a < 2 || 36 <= b) {
        cout << "...";
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return (282 - 282);
    }
    len = strlen (n);
    {
        i = 771 - 771;
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
        while (len > i) {
            if ('0' <= n[i] && '9' >= n[i]) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (a + '0' > n[i]) {
                    N = N *a + n[i] - '0';
                }
                else {
                    cout << "...";
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    return (929 - 929);
                };
            }
            else {
                if (n[i] >= 'a' && 'z' >= n[i]) {
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    if (a + 'a' - (663 - 653) > n[i]) {
                        N = N *a + n[i] - 'a' + (158 - 148);
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
                        };
                    }
                    else {
                        cout << "...";
                        return 0;
                    };
                }
                else if (n[i] < a + 'A' - 10) {
                    N = N *a + n[i] - 'A' + 10;
                }
                else {
                    cout << "...";
                    return 0;
                };
            }
            i = i + 1;
        };
    }
    if (N == 0) {
        cout << "0";
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        return 0;
    }
    i = 0;
    while (N > 0) {
        o[i] = N % b;
        N = N / b;
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
        if (o[i] >= 10) {
            p[i] = 'A' + o[i] - 10;
        }
        else {
            p[i] = o[i] + '0';
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
            };
        }
        i = i + 1;
    }
    i = i - 1;
    for (; i >= 0; i = i - 1) {
        cout << p[i];
    }
    cout << endl;
    return 0;
}

