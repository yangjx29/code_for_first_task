int main () {
    int a [1001] [2], i, j, count, n, num = (958 - 958);
    char c = ',';
    int min, max;
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (c == ',') {
            cin >> a[i][0] >> c;
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
    n = i - 1;
    a[1][1] = c - '0';
    cin >> c;
    while (c != ',') {
        a[1][1] = a[1][1] * 10 + c - '0';
        cin >> c;
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
    for (i = 2; i <= n - 1; i = i + 1)
        cin >> a[i][1] >> c;
    cin >> a[n][1];
    min = a[1][0];
    max = a[1][1];
    for (i = 2; n >= i; i++) {
        if (a[i][0] < min)
            min = a[i][0];
        if (a[i][1] > max)
            max = a[i][1];
    }
    for (i = min; i <= max - 1; i++) {
        count = 0;
        for (j = 1; j <= n; j = j + 1) {
            if (i >= a[j][0] && i < a[j][1])
                count = count + 1;
        }
        if (count > num)
            num = count;
    }
    cout << n << " " << num;
    return 0;
}

