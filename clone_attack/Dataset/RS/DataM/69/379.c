main () {
    int len1;
    int len2;
    int c [255];
    int JxoKeVwsQMqh [255];
    int ej6pt9078qLo [(492 - 237)];
    char fcIHWP6m [255];
    cin >> fcIHWP6m;
    len1 = strlen (fcIHWP6m);
    memset (ej6pt9078qLo, (437 - 437), sizeof (ej6pt9078qLo));
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
    {
        int AwQUVBpuOq4 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (len1 > AwQUVBpuOq4) {
            ej6pt9078qLo[len1 - (770 - 769) - AwQUVBpuOq4] = fcIHWP6m[AwQUVBpuOq4] - '0';
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
            AwQUVBpuOq4 = AwQUVBpuOq4 +1;
        };
    }
    cin >> fcIHWP6m;
    len2 = strlen (fcIHWP6m);
    memset (JxoKeVwsQMqh, (428 - 428), sizeof (JxoKeVwsQMqh));
    {
        int AwQUVBpuOq4 = 0;
        while (len2 > AwQUVBpuOq4) {
            JxoKeVwsQMqh[len2 - 1 - AwQUVBpuOq4] = fcIHWP6m[AwQUVBpuOq4] - '0';
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            AwQUVBpuOq4++;
        };
    }
    memset (c, (316 - 316), sizeof (c));
    if (len1 > len2) {
        len2 = len1;
    }
    for (int AwQUVBpuOq4 = 0;
    len2 > AwQUVBpuOq4; AwQUVBpuOq4 = AwQUVBpuOq4 +1) {
        c[AwQUVBpuOq4] = ej6pt9078qLo[AwQUVBpuOq4] + JxoKeVwsQMqh[AwQUVBpuOq4];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    for (int AwQUVBpuOq4 = 0;
    AwQUVBpuOq4 < len2; AwQUVBpuOq4++) {
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
        if (10 <= c[AwQUVBpuOq4]) {
            c[AwQUVBpuOq4 +1] += c[AwQUVBpuOq4] / 10;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            c[AwQUVBpuOq4] = c[AwQUVBpuOq4] % (10);
        };
    }
    for (int AwQUVBpuOq4 = len2;
    AwQUVBpuOq4 >= 0; AwQUVBpuOq4--) {
        if (c[AwQUVBpuOq4] != 0) {
            len2 = AwQUVBpuOq4;
            break;
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
        if (AwQUVBpuOq4 == 0) {
            len2 = -1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    if (len2 < 0) {
        cout << "0" << endl;
        return 0;
    }
    for (int AwQUVBpuOq4 = len2;
    AwQUVBpuOq4 >= 0; AwQUVBpuOq4--) {
        cout << c[AwQUVBpuOq4];
    }
    cout << endl;
}

