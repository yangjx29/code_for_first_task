int main () {
    int yPFd1hpxA, m, i, j, a, s, tj [(880 - 778)] [102];
    char zf [102] [102];
    a = (472 - 471);
    s = (423 - 423);
    getchar ();
    scanf ("%d", &yPFd1hpxA);
    for (i = (503 - 503); i < yPFd1hpxA; i = i + 1) {
        gets (zf [i]);
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
    scanf ("%d", &m);
    for (i = 0; i < yPFd1hpxA; i++) {
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
        for (j = 0; j < yPFd1hpxA; j = j + 1) {
            tj[i][j] = 0;
        };
    }
    for (i = 0; i < yPFd1hpxA; i++) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (j = 0; j < yPFd1hpxA; j = j + 1) {
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
            if (zf[i][j] == '@') {
                tj[i][j] = (263 - 262);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                s++;
            };
        };
    }
    for (; a < m;) {
        a++;
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
            i = 0;
            while (i < yPFd1hpxA) {
                {
                    j = 0;
                    while (j < yPFd1hpxA) {
                        if (tj[i][j] == 1) {
                            if (0 < i && zf[i - 1][j] == '.') {
                                s++;
                                {
                                    int x = 0, y;
                                    if (!(x * (x - 1) % 2 == 0)) {
                                        double  temp = 0.0;
                                        if (temp == 3)
                                            return 0;
                                    }
                                }
                                zf[i - 1][j] = '@';
                            }
                            if (i < yPFd1hpxA - 1 && zf[i + 1][j] == '.') {
                                zf[i + 1][j] = '@';
                                s++;
                            }
                            if (j > 0 && zf[i][j - 1] == '.') {
                                zf[i][j - 1] = '@';
                                s++;
                            }
                            if (j < yPFd1hpxA - 1 && zf[i][j + 1] == '.') {
                                s++;
                                zf[i][j + 1] = '@';
                            };
                        }
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        }
                        j++;
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
                i = i + 1;
            };
        }
        {
            i = 0;
            while (i < yPFd1hpxA) {
                {
                    j = 0;
                    while (j < yPFd1hpxA) {
                        if (zf[i][j] == '@') {
                            tj[i][j] = 1;
                        }
                        j++;
                    };
                }
                i = i + 1;
            };
        };
    }
    printf ("%d", s);
    return 0;
}

