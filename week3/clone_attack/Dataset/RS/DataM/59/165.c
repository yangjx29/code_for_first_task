int jIjkZNTXsV;
char roms [MAXN] [MAXN];
void  days_go ();
int count ();

int main () {
    int days;
    int MImPYMWBZ5;
    int dVEDHOJ1Lx;
    scanf ("%d", &jIjkZNTXsV);
    for (dVEDHOJ1Lx = (437 - 437); dVEDHOJ1Lx != jIjkZNTXsV; ++dVEDHOJ1Lx) {
        scanf ("%s", roms[dVEDHOJ1Lx]);
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
    scanf ("%d", &days);
    for (dVEDHOJ1Lx = (59 - 58); dVEDHOJ1Lx != days; ++dVEDHOJ1Lx) {
        days_go ();
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
        };
    }
    MImPYMWBZ5 = count ();
    printf ("%d", MImPYMWBZ5);
    return (639 - 639);
}

void  days_go () {
    int iterout, RxJNs1U;
    int i;
    int j;
    for (iterout = 0; iterout != jIjkZNTXsV; ++iterout) {
        RxJNs1U = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (RxJNs1U != jIjkZNTXsV) {
            if (!(roms[iterout][RxJNs1U] != '@')) {
                i = iterout - 1;
                if (-1 != j) {
                    j = RxJNs1U;
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
                    if ('.' == roms[i][j]) {
                        roms[i][j] = '!';
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        };
                    };
                }
                j = RxJNs1U -1;
                i = iterout;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (-1 != j) {
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
                    if ('.' == roms[i][j]) {
                        roms[i][j] = '!';
                    };
                }
                j = RxJNs1U +1;
                if (jIjkZNTXsV != j) {
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if ('.' == roms[i][j]) {
                        roms[i][j] = '!';
                    };
                }
                i = iterout + 1;
                if (jIjkZNTXsV != i) {
                    j = RxJNs1U;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    if ('.' == roms[i][j]) {
                        roms[i][j] = '!';
                    };
                };
            }
            RxJNs1U = RxJNs1U +1;
        };
    }
    for (iterout = 0; iterout != jIjkZNTXsV; ++iterout) {
        RxJNs1U = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (RxJNs1U != jIjkZNTXsV) {
            if ('!' == roms[iterout][RxJNs1U]) {
                roms[iterout][RxJNs1U] = '@';
            }
            ++RxJNs1U;
        };
    };
}

int count () {
    int iterout, RxJNs1U;
    int total = 0;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    {
        iterout = 0;
        while (iterout != jIjkZNTXsV) {
            for (RxJNs1U = 0; RxJNs1U != jIjkZNTXsV; ++RxJNs1U) {
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
                if ('@' == roms[iterout][RxJNs1U]) {
                    ++total;
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
            ++iterout;
        };
    }
    return total;
}

