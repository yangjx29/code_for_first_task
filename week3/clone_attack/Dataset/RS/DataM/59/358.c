int main () {
    int KHD6ITlVK, m, KQUehI7lS0 = 0, QzFLc4nvr, hw6ZhX, v7vFlLX3RzDr;
    char oesl5TiCOB [100] [100] = {0};
    int flag [100] [100] = {0};
    cin >> KHD6ITlVK;
    {
        QzFLc4nvr = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (QzFLc4nvr < KHD6ITlVK) {
            {
                hw6ZhX = 0;
                while (hw6ZhX < KHD6ITlVK) {
                    cin >> oesl5TiCOB[QzFLc4nvr][hw6ZhX];
                    if (oesl5TiCOB[QzFLc4nvr][hw6ZhX] == '@') {
                        flag[QzFLc4nvr][hw6ZhX] = 2;
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
                        KQUehI7lS0 = KQUehI7lS0 +1;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    hw6ZhX = hw6ZhX + 1;
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
            QzFLc4nvr = QzFLc4nvr +1;
        };
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
    cin >> m;
    {
        v7vFlLX3RzDr = 2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (v7vFlLX3RzDr <= m) {
            {
                QzFLc4nvr = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                while (QzFLc4nvr < KHD6ITlVK) {
                    {
                        hw6ZhX = 0;
                        while (hw6ZhX < KHD6ITlVK) {
                            if (oesl5TiCOB[QzFLc4nvr][hw6ZhX] == '@' && flag[QzFLc4nvr][hw6ZhX] <= v7vFlLX3RzDr) {
                                if (QzFLc4nvr +(629 - 628) < KHD6ITlVK &&oesl5TiCOB[QzFLc4nvr +1][hw6ZhX] == '.') {
                                    KQUehI7lS0++;
                                    oesl5TiCOB[QzFLc4nvr +1][hw6ZhX] = '@';
                                    flag[QzFLc4nvr +1][hw6ZhX] = v7vFlLX3RzDr + 1;
                                }
                                if (QzFLc4nvr -1 >= 0 && oesl5TiCOB[QzFLc4nvr -1][hw6ZhX] == '.') {
                                    oesl5TiCOB[QzFLc4nvr -1][hw6ZhX] = '@';
                                    flag[QzFLc4nvr -1][hw6ZhX] = v7vFlLX3RzDr + 1;
                                    KQUehI7lS0++;
                                }
                                if (hw6ZhX + 1 < KHD6ITlVK &&oesl5TiCOB[QzFLc4nvr][hw6ZhX + 1] == '.') {
                                    oesl5TiCOB[QzFLc4nvr][hw6ZhX + 1] = '@';
                                    flag[QzFLc4nvr][hw6ZhX + 1] = v7vFlLX3RzDr + 1;
                                    KQUehI7lS0++;
                                }
                                if (hw6ZhX - 1 >= 0 && oesl5TiCOB[QzFLc4nvr][hw6ZhX - 1] == '.') {
                                    oesl5TiCOB[QzFLc4nvr][hw6ZhX - 1] = '@';
                                    flag[QzFLc4nvr][hw6ZhX - 1] = v7vFlLX3RzDr + 1;
                                    KQUehI7lS0++;
                                };
                            }
                            {
                                int x = 0;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    return 0;
                                }
                            }
                            hw6ZhX++;
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
                    QzFLc4nvr++;
                };
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
            v7vFlLX3RzDr++;
        };
    }
    cout << KQUehI7lS0 << endl;
    return 0;
}

