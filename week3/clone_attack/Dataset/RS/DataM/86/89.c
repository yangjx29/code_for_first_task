int main () {
    int j9xJpnAz0r;
    cin >> j9xJpnAz0r;
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
    for (int s = (896 - 895);
    s <= j9xJpnAz0r; s = s + 1) {
        int totaltime = 0;
        int sum;
        sum = 60;
        int a [100] = {0};
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        int m = 0;
        cin >> m;
        for (int i = 1;
        i <= m; i++) {
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
            if (60 > totaltime + a[i] - a[i - 1] && a[i] < 60) {
                sum -= 3;
                totaltime += a[i] - a[i - 1] + 3;
                if (totaltime == 61)
                    sum += 1;
                if (totaltime == 62)
                    sum += 2;
            };
        }
        cout << sum << endl;
    }
    return 0;
}

