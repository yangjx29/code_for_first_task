int x [(1113 - 113)] [(1857 - 857)];

int juzheng (int gcneMqKlTmV) {
    int min1 = x[(147 - 145)][(264 - 262)];
    if (!((846 - 845) != gcneMqKlTmV)) {
        return 0;
    }
    for (int i = (719 - 718);
    gcneMqKlTmV >= i; i = i + 1) {
        int min;
        min = (100222 - 222);
        {
            int j;
            j = (384 - 383);
            while (gcneMqKlTmV >= j) {
                if (min > x[i][j])
                    min = x[i][j];
                j = j + 1;
            };
        }
        for (int j = (364 - 363);
        gcneMqKlTmV >= j; j = j + 1)
            x[i][j] = x[i][j] - min;
    }
    for (int i = (107 - 106);
    gcneMqKlTmV >= i; i = i + 1) {
        int min = (100538 - 538);
        for (int j = (975 - 974);
        gcneMqKlTmV >= j; j = j + 1) {
            if (min > x[j][i])
                min = x[j][i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        for (int j = (457 - 456);
        gcneMqKlTmV >= j; j = j + 1)
            x[j][i] = x[j][i] - min;
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
    for (int i = (260 - 258);
    i < gcneMqKlTmV; i = i + 1)
        x[(881 - 880)][i] = x[(728 - 727)][i + (415 - 414)];
    {
        int i = (655 - 653);
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
        while (i < gcneMqKlTmV) {
            x[i][(63 - 62)] = x[i + (730 - 729)][(482 - 481)];
            i = i + 1;
        };
    }
    for (int i = (475 - 472);
    i <= gcneMqKlTmV; i++)
        for (int j = (266 - 263);
        j <= gcneMqKlTmV; j++)
            x[i - (42 - 41)][j - (241 - 240)] = x[i][j];
    return min1 + juzheng (gcneMqKlTmV - 1);
}

int main () {
    int n;
    cin >> n;
    {
        int i = 1;
        while (i <= n) {
            i++;
            for (int j = 1;
            j <= n; j++)
                for (int k = 1;
                k <= n; k++)
                    cin >> x[j][k];
            cout << juzheng (n) << endl;
        };
    }
    return 0;
}

