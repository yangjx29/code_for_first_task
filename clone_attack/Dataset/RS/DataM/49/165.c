int main () {
    int kAJgC95 = 0;
    char a [1000];
    char AsPXR4xK [1000] [1000];
    char c [1000] [1000];
    int len = strlen (a);
    int dcDwOHxG30N2, m5QcsAD, k, num = 0, zqZYaIHP [1000], clen0 [1000], p = 0, shorter;
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
    cin >> a;
    for (dcDwOHxG30N2 = 0; dcDwOHxG30N2 < len; dcDwOHxG30N2 = dcDwOHxG30N2 + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (m5QcsAD = dcDwOHxG30N2; m5QcsAD < len; m5QcsAD++) {
            p = 0;
            for (k = dcDwOHxG30N2; k <= m5QcsAD; k++) {
                AsPXR4xK[num][p] = a[k];
                p = p + 1;
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
            num++;
        };
    }
    for (dcDwOHxG30N2 = 0; num > dcDwOHxG30N2; dcDwOHxG30N2++) {
        kAJgC95 = 0;
        m5QcsAD = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        zqZYaIHP[dcDwOHxG30N2] = strlen (AsPXR4xK[dcDwOHxG30N2]);
        for (; 1;) {
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
            if (!(AsPXR4xK[dcDwOHxG30N2][zqZYaIHP[dcDwOHxG30N2] - m5QcsAD - 1] != AsPXR4xK[dcDwOHxG30N2][m5QcsAD])) {
                m5QcsAD = m5QcsAD + 1;
                if (m5QcsAD == zqZYaIHP[dcDwOHxG30N2])
                    break;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                kAJgC95 = 1;
                continue;
            }
            else {
                kAJgC95 = 0;
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
                break;
            };
        }
        if (!(1 != kAJgC95) && zqZYaIHP[dcDwOHxG30N2] > 1) {
            strcpy (c[p], AsPXR4xK[dcDwOHxG30N2]);
            clen0[p] = zqZYaIHP[dcDwOHxG30N2];
            p++;
        };
    }
    shorter = 0;
    for (dcDwOHxG30N2 = 0; dcDwOHxG30N2 < p; dcDwOHxG30N2++) {
        {
            m5QcsAD = 0;
            while (m5QcsAD < p) {
                if (clen0[m5QcsAD] < clen0[shorter]) {
                    shorter = m5QcsAD;
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                m5QcsAD++;
            };
        }
        cout << c[shorter] << endl;
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
        clen0[shorter] = 1000;
    }
    return 0;
}

