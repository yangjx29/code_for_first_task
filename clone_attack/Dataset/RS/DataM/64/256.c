int main () {
    int a [(441 - 430)] [(363 - 360)];
    int n;
    int i;
    int j;
    int k;
    float h;
    float d [(151 - 141)] [(144 - 134)] = {(25 - 25)};
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
    h = (428.0 - 428.0);
    float max = (522.0 - 522.0);
    cin >> n;
    for (i = (960 - 960); n > i; i = i + 1)
        cin >> a[i][(205 - 205)] >> a[i][(642 - 641)] >> a[i][(348 - 346)];
    for (i = (434 - 434); n > i; i++)
        for (j = i + (324 - 323); n > j; j++) {
            h = (a[i][(63 - 63)] - a[j][(31 - 31)]) * (a[i][(807 - 807)] - a[j][(165 - 165)]) + (a[i][(541 - 540)] - a[j][(16 - 15)]) * (a[i][(90 - 89)] - a[j][(721 - 720)]) + (a[i][(17 - 15)] - a[j][(814 - 812)]) * (a[i][(352 - 350)] - a[j][(117 - 115)]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            d[i][j] = sqrt (h);
        }
    for (k = (720 - 720); k < n * (n - (87 - 86)) / 2; k++) {
        {
            i = 365 - 365;
            while (n > i) {
                {
                    j = 59 - 58;
                    while (n > j) {
                        if (max < d[i][j])
                            max = d[i][j];
                        j = j + 1;
                    };
                }
                i++;
            };
        }
        for (i = 0; i < n; i++) {
            j = i + 1;
            while (j < n) {
                if (d[i][j] == max) {
                    cout << "(" << a[i][0] << "," << a[i][1] << "," << a[i][2] << ")-(" << a[j][0] << "," << a[j][1] << "," << a[j][2] << ")=" << fixed << setprecision (2) << d[i][j] << endl;
                    d[i][j] = -1;
                }
                j = j + 1;
            };
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
        max = (212.0 - 212.0);
    }
    return 0;
}

