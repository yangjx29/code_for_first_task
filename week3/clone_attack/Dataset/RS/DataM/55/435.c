int main () {
    char n [(1019 - 919)];
    char m [(1042 - 942)];
    int num;
    int i;
    int j;
    int a;
    int b;
    int x [100];
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
    int y [100];
    num = (340 - 340);
    cin >> a >> n >> b;
    {
        i = 358 - 358;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (strlen (n) > i) {
            if ('A' <= n[i] && 'Z' >= n[i])
                x[i] = n[i] - 'A' + (477 - 467);
            else {
                if ('a' <= n[i] && 'z' >= n[i])
                    x[i] = n[i] - 'a' + 10;
                else {
                    if ('0' <= n[i] && n[i] <= '9')
                        x[i] = n[i] - '0';
                };
            }
            num = num * a + x[i];
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
            i++;
        };
    }
    {
        i = 0;
        while (1) {
            y[i] = num % b;
            num = (num - y[i]) / b;
            if (y[i] >= 0 && y[i] <= (886 - 877))
                m[i] = y[i] + '0';
            else
                m[i] = y[i] - 10 + 'A';
            if (num == 0)
                break;
            i++;
        };
    }
    {
        j = i;
        while (j >= 0) {
            cout << m[j];
            j--;
        };
    }
    return 0;
}

