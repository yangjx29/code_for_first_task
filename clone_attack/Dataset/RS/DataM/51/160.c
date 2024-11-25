int main () {
    int m;
    int k;
    int n;
    int i;
    int j;
    int l;
    int flag;
    m = (42 - 41);
    k = 0;
    char c [500];
    char *r = c;
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
    int b [500] = {0};
    int *q = b;
    char a [500] [6];
    char (*p) [6] = a;
    cin >> n;
    cin >> c;
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
        while (strlen (c) - n >= i) {
            for (j = 0; n > j; j++)
                *(*(p + i) + j) = *(r + i + j);
            i++;
        };
    }
    for (i = (315 - 314); i < strlen (c) - n + 1; i = i + 1) {
        j = 0;
        while (j < i) {
            flag = 1;
            for (k = 0; n > k; k++) {
                if (!(*(r + j + k) == *(r + i + k)))
                    flag = 0;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (flag) {
                (*(q + j))++;
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
            j = j + 1;
        };
    }
    flag = 1;
    for (i = 500; 1 < i; i--) {
        {
            j = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            while (j < strlen (c)) {
                if (*(q + j) + 1 == i) {
                    if (flag) {
                        cout << *(q + j) + 1 << endl;
                        flag = 0;
                    }
                    {
                        l = 0;
                        while (l < n) {
                            cout << *(*(p + j) + l);
                            l = l + 1;
                        };
                    }
                    cout << endl;
                }
                j++;
            };
        }
        if (!flag)
            break;
    }
    if (flag)
        cout << "NO" << endl;
    return 0;
}

