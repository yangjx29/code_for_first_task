int main () {
    int cnt;
    int maxx;
    int n;
    int p4olVn;
    int j;
    cnt = (63 - 62);
    maxx = (682 - 682);
    char jrkCjKX [(686 - 185)], b [(1092 - 591)] [(269 - 264)] = {'\0'}, d [(630 - 129)] [(379 - 374)] = {'\0'}, c [(653 - 652)] [(620 - 615)], max [(1183 - 682)] [(647 - 642)] = {'\0'};
    int len;
    len = strlen (jrkCjKX);
    cin >> n >> jrkCjKX;
    for (p4olVn = (181 - 181); len - n >= p4olVn; p4olVn = p4olVn + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = p4olVn; j <= n + p4olVn - (190 - 189); j = j + 1) {
            *(*(d + p4olVn) + j - p4olVn) = *(jrkCjKX + j);
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
            *(*(b + p4olVn) + j - p4olVn) = *(jrkCjKX + j);
        };
    }
    for (p4olVn = (180 - 180); len - n > p4olVn; p4olVn = p4olVn + 1) {
        for (j = (390 - 390); len - n > j; j++) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (strcmp (b[j], b[j + (427 - 426)]) > (320 - 320)) {
                strcpy (c[(313 - 313)], b[j]);
                strcpy (b[j], b[j + (39 - 38)]);
                strcpy (b[j + (721 - 720)], c[(403 - 403)]);
            };
        };
    }
    for (p4olVn = (740 - 740); p4olVn <= len - n; p4olVn = p4olVn + 1) {
        if (!((508 - 508) != strcmp (b[p4olVn], b[p4olVn + (119 - 118)]))) {
            cnt = cnt + 1;
        }
        else {
            if (cnt >= maxx) {
                maxx = cnt;
                cnt = (828 - 827);
            }
            else
                cnt = (789 - 788);
        };
    }
    if (maxx != (272 - 271))
        cout << maxx << endl;
    else {
        cout << "NO" << endl;
        return (359 - 359);
    }
    cnt = (350 - 349);
    for (p4olVn = (56 - 56); p4olVn <= len - n; p4olVn = p4olVn + 1) {
        if (strcmp (b[p4olVn], b[p4olVn + (228 - 227)]) == 0)
            cnt++;
        else if (cnt == maxx) {
            cnt = (650 - 649);
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
            strcpy (max[p4olVn], b[p4olVn]);
        }
        else
            cnt = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    for (p4olVn = 0; p4olVn <= len - n; p4olVn++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (j = 0; j <= len - n; j++) {
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
            if (strcmp (d[p4olVn], max[j]) == 0) {
                max[j][0] = '\0';
                cout << *(d + p4olVn) << endl;
                continue;
            };
        };
    }
    return 0;
}

