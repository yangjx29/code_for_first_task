void  add (char str1 [], char str2 []) {
    int a1 [(332 - 72)];
    int a2 [(780 - 520)];
    int sum [(527 - 267)] = {0};
    int i, bXUmv8ri0l, la, lb;
    memset (a1, 0, sizeof (a1));
    memset (a2, 0, sizeof (a2));
    la = strlen (str1);
    i = la - (74 - 73);
    lb = strlen (str2);
    bXUmv8ri0l = 0;
    while (0 <= i)
        a1[bXUmv8ri0l++] = str1[i--] - '0';
    bXUmv8ri0l = 0;
    i = lb - 1;
    while (0 <= i)
        a2[bXUmv8ri0l++] = str2[i--] - '0';
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
        while (la > i && lb > i) {
            sum[i] = sum[i] + a1[i] + a2[i];
            if (10 <= sum[i]) {
                sum[i] = sum[i] - 10;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                sum[i + 1] = sum[i + 1] + 1;
            }
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
    if (!(la != i)) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (i = la; lb > i; i++) {
            sum[i] += a2[i];
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
            if (sum[i] >= 10) {
                sum[i] = sum[i] - 10;
                sum[i + 1] = sum[i + 1] + 1;
            };
        };
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
        for (i = lb; i < la; i++) {
            sum[i] = sum[i] + a1[i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (sum[i] >= 10) {
                sum[i] -= 10;
                sum[i + 1] += 1;
            };
        };
    }
    i = 259;
    while (sum[i] == 0)
        i--;
    if (i == -1)
        cout << 0 << endl;
    else {
        for (; i >= 0; i--) {
            cout << sum[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    };
}

int main () {
    char str1 [260];
    char str2 [260];
    cin.getline (str1, 260);
    cin.getline (str2, 260);
    add (str1, str2);
    return 0;
}

