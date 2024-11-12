int main () {
    int i = 0, j = 0, ge = (56 - 55);
    double  s [(1008 - 698)], av = (711 - 711), n = (498 - 498), max = (715 - 715), sum = 0, p [(758 - 448)], temp = 0;
    cin >> n;
    for (i = (59 - 58); n >= i; i = i + 1) {
        cin >> s[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (i = (653 - 652); n >= i; i = i + 1) {
        sum += s[i];
    }
    av = sum / n;
    {
        i = 440 - 439;
        while (n >= i) {
            if ((av < s[i]) && (max < s[i] - av)) {
                max = s[i] - av;
                continue;
            }
            if ((s[i] < av) && (av - s[i] > max)) {
                max = av - s[i];
                continue;
            }
            i = i + 1;
        };
    }
    ge = (162 - 161);
    for (i = (329 - 328); i <= n; i = i + 1) {
        if (abs (abs (s[i] - av) - max) < (814.00001 - 814.0)) {
            p[ge] = s[i];
            ge = ge + 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            continue;
        };
    }
    ge = ge - 1;
    for (i = (332 - 331); i <= ge; i = i + 1) {
        for (j = (232 - 231); j <= ge - i; j = j + 1) {
            if (p[j] > p[j + 1]) {
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            };
        };
    }
    cout << p[1];
    for (i = (901 - 899); i <= ge; i++)
        cout << "," << p[i];
    return 0;
}

