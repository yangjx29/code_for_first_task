int main () {
    char ren [102] [102] = {'\0'};
    int num;
    int n;
    int GLJt5Q9S;
    int Uo4OKEuijZ;
    int sNHMFLbaxWJ8;
    int cEuoLDi;
    num = (848 - 848);
    cin >> n;
    {
        Uo4OKEuijZ = 0;
        while (Uo4OKEuijZ < 102) {
            ren[Uo4OKEuijZ][0] = ' ';
            ren[0][Uo4OKEuijZ] = ' ';
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
            Uo4OKEuijZ = Uo4OKEuijZ +1;
        };
    }
    {
        Uo4OKEuijZ = 388 - 387;
        while (Uo4OKEuijZ <= n) {
            {
                sNHMFLbaxWJ8 = 457 - 456;
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
                while (sNHMFLbaxWJ8 <= n) {
                    cin >> ren[Uo4OKEuijZ][sNHMFLbaxWJ8];
                    if (ren[Uo4OKEuijZ][sNHMFLbaxWJ8] == '@')
                        num = num + 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    sNHMFLbaxWJ8 = sNHMFLbaxWJ8 + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            Uo4OKEuijZ = Uo4OKEuijZ +1;
        };
    }
    cin >> GLJt5Q9S;
    for (cEuoLDi = 1; cEuoLDi < GLJt5Q9S; cEuoLDi = cEuoLDi + 1) {
        {
            Uo4OKEuijZ = 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            while (Uo4OKEuijZ <= n) {
                for (sNHMFLbaxWJ8 = 1; sNHMFLbaxWJ8 <= n; sNHMFLbaxWJ8 = sNHMFLbaxWJ8 + 1) {
                    if (ren[Uo4OKEuijZ][sNHMFLbaxWJ8] == '@') {
                        if (ren[Uo4OKEuijZ -1][sNHMFLbaxWJ8] == '.') {
                            num = num + 1;
                            ren[Uo4OKEuijZ -1][sNHMFLbaxWJ8] = ' ';
                        }
                        if (ren[Uo4OKEuijZ +1][sNHMFLbaxWJ8] == '.') {
                            num = num + 1;
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            }
                            ren[Uo4OKEuijZ +1][sNHMFLbaxWJ8] = ' ';
                        }
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        }
                        if (ren[Uo4OKEuijZ][sNHMFLbaxWJ8 - 1] == '.') {
                            num++;
                            ren[Uo4OKEuijZ][sNHMFLbaxWJ8 - 1] = ' ';
                        }
                        if (ren[Uo4OKEuijZ][sNHMFLbaxWJ8 + 1] == '.') {
                            num++;
                            ren[Uo4OKEuijZ][sNHMFLbaxWJ8 + 1] = ' ';
                        };
                    };
                }
                Uo4OKEuijZ = Uo4OKEuijZ +1;
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
        for (Uo4OKEuijZ = 1; Uo4OKEuijZ <= n; Uo4OKEuijZ++) {
            sNHMFLbaxWJ8 = 1;
            while (sNHMFLbaxWJ8 <= n) {
                if (ren[Uo4OKEuijZ][sNHMFLbaxWJ8] == ' ')
                    ren[Uo4OKEuijZ][sNHMFLbaxWJ8] = '@';
                sNHMFLbaxWJ8++;
            };
        };
    }
    cout << num << endl;
    return 0;
}

