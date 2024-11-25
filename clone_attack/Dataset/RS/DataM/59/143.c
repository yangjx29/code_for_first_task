char hd0Ju2 = '@';

int main () {
    int F81YGCMU64 = 0;
    int KQIO3yg [4] = {(820 - 820), (220 - 220), (741 - 740), -1}, XJR3cQhYlFM [4] = {1, -1, 0, 0};
    int QzN8IGcX65, ZK5n6Sej, wghzEMed;
    char xnTtckPvEZ [100] [100];
    int n, ex8t9ZTkGApq;
    cin >> n;
    cin.get ();
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
    for (QzN8IGcX65 = 0; QzN8IGcX65 < n; QzN8IGcX65 = QzN8IGcX65 +1) {
        cin.getline (xnTtckPvEZ[QzN8IGcX65], 100);
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
    cin >> ex8t9ZTkGApq;
    do {
        ex8t9ZTkGApq--;
        for (QzN8IGcX65 = 0; QzN8IGcX65 < n; QzN8IGcX65++) {
            ZK5n6Sej = 0;
            while (n > ZK5n6Sej) {
                if (!(hd0Ju2 != xnTtckPvEZ[QzN8IGcX65][ZK5n6Sej])) {
                    wghzEMed = 0;
                    while (wghzEMed < 4) {
                        if (0 <= QzN8IGcX65 +KQIO3yg[wghzEMed] && n > QzN8IGcX65 +KQIO3yg[wghzEMed] && ZK5n6Sej +XJR3cQhYlFM[wghzEMed] >= 0 && ZK5n6Sej +XJR3cQhYlFM[wghzEMed] < n && xnTtckPvEZ[QzN8IGcX65 +KQIO3yg[wghzEMed]][ZK5n6Sej +XJR3cQhYlFM[wghzEMed]] == '.') {
                            xnTtckPvEZ[QzN8IGcX65 +KQIO3yg[wghzEMed]][ZK5n6Sej +XJR3cQhYlFM[wghzEMed]] = hd0Ju2 + 1;
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
                        }
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        wghzEMed = wghzEMed + 1;
                    };
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                ZK5n6Sej = ZK5n6Sej +1;
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
        hd0Ju2 = hd0Ju2 + 1;
    }
    while (ex8t9ZTkGApq > 1);
    for (QzN8IGcX65 = 0; QzN8IGcX65 < n; QzN8IGcX65++) {
        ZK5n6Sej = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (ZK5n6Sej < n) {
            if (xnTtckPvEZ[QzN8IGcX65][ZK5n6Sej] >= '@') {
                F81YGCMU64 = F81YGCMU64 +1;
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
            ZK5n6Sej++;
        };
    }
    cout << F81YGCMU64 << endl;
    return 0;
}

