int main () {
    char ACuxS7ovb [1000] [40];
    int ekfvN5TP [(1507 - 507)] = {0}, yPOSdj6h = 0;
    int m;
    int TuHYOawGP91;
    int j;
    int k;
    m = 0;
    TuHYOawGP91 = 0;
    j = 0;
    k = 0;
    cin >> m;
    {
        TuHYOawGP91 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (m > TuHYOawGP91) {
            cin >> ACuxS7ovb[TuHYOawGP91];
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
            TuHYOawGP91 = TuHYOawGP91 +1;
        };
    }
    {
        TuHYOawGP91 = 0;
        while (m > TuHYOawGP91) {
            for (j = 0;; j = j + 1) {
                if (!('\0' == ACuxS7ovb[TuHYOawGP91][j]))
                    ekfvN5TP[TuHYOawGP91]++;
                else
                    break;
            }
            TuHYOawGP91 = TuHYOawGP91 +1;
        };
    }
    TuHYOawGP91 = 0;
    {
        TuHYOawGP91 = 0;
        while (TuHYOawGP91 < m) {
            k = k + ekfvN5TP[TuHYOawGP91] + 1;
            if (k > 81) {
                k = 0;
                {
                    j = yPOSdj6h;
                    while (j < TuHYOawGP91 -1) {
                        cout << ACuxS7ovb[j] << " ";
                        j = j + 1;
                    };
                }
                yPOSdj6h = TuHYOawGP91;
                cout << ACuxS7ovb[j] << endl;
                TuHYOawGP91--;
            }
            TuHYOawGP91 = TuHYOawGP91 +1;
        };
    }
    for (j = yPOSdj6h; j < TuHYOawGP91 -1; j = j + 1)
        cout << ACuxS7ovb[j] << " ";
    cout << ACuxS7ovb[j] << endl;
    return 0;
}

