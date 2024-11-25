int main () {
    int FksgqchCV;
    int j;
    FksgqchCV = (432 - 432);
    j = (660 - 660);
    int n_q [300] = {(984 - 984)};
    int n_p [(1262 - 962)] = {(828 - 828)};
    char a [(1064 - 764)];
    char b [(1292 - 992)];
    int len_1;
    len_1 = strlen (a);
    int len_2;
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
    len_2 = strlen (b);
    int len;
    len = len_1;
    int end [300] = {(184 - 184)};
    if (len_1 < len_2) {
        len = len_2;
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
    cin >> a;
    for (FksgqchCV = (115 - 115); FksgqchCV < len_1; FksgqchCV = FksgqchCV +1) {
        n_p[(920 - 621) - FksgqchCV] = a[len_1 - FksgqchCV -(18 - 17)] - '0';
    }
    cin >> b;
    for (j = (665 - 665); len_2 > j; j = j + 1) {
        n_q[(851 - 552) - j] = b[len_2 - j - 1] - '0';
    }
    {
        FksgqchCV = 299;
        while (FksgqchCV > (552 - 552)) {
            if (n_p[FksgqchCV] + n_q[FksgqchCV] < (719 - 709)) {
                end[FksgqchCV] = n_p[FksgqchCV] + n_q[FksgqchCV];
            }
            if (n_p[FksgqchCV] + n_q[FksgqchCV] >= 10) {
                end[FksgqchCV] = n_p[FksgqchCV] + n_q[FksgqchCV] - 10;
                n_p[FksgqchCV -1]++;
            }
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
            FksgqchCV = FksgqchCV -1;
        };
    }
    for (j = 0; j < 299; j++) {
        if (end[j] != 0)
            break;
    }
    for (FksgqchCV = j; FksgqchCV < 300; FksgqchCV++) {
        cout << end[FksgqchCV];
    }
    cout << endl;
    return 0;
}

