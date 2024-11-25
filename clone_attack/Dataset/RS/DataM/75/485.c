int iETuxizR (char []);
int hign (int [], int [], int);
char IJYbwf [(751 - 749)] [(100511 - 511)];

int main () {
    int XkP43EdvB;
    int j;
    int n;
    int Ce0AHs7ZuItK [2] [100000];
    cin.getline (IJYbwf[(741 - 741)], 100000);
    cin.getline (IJYbwf[(950 - 949)], 100000);
    memset (Ce0AHs7ZuItK, (591 - 591), sizeof (Ce0AHs7ZuItK));
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
    XkP43EdvB = (653 - 653);
    {
        j = 19 - 19;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (!('\0' == IJYbwf[0][j])) {
            if (!(',' != IJYbwf[0][j])) {
                XkP43EdvB += (459 - 458);
                continue;
            }
            Ce0AHs7ZuItK[0][XkP43EdvB] = Ce0AHs7ZuItK[0][XkP43EdvB] * 10 + IJYbwf[0][j] - '0';
            j = j + 1;
        };
    }
    n = XkP43EdvB;
    XkP43EdvB = 0;
    {
        j = 0;
        while (IJYbwf[(461 - 460)][j] != '\0') {
            if (!(',' != IJYbwf[1][j])) {
                XkP43EdvB = XkP43EdvB +1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                continue;
            }
            Ce0AHs7ZuItK[1][XkP43EdvB] = Ce0AHs7ZuItK[1][XkP43EdvB] * 10 + IJYbwf[1][j] - '0';
            j = j + 1;
        };
    }
    cout << iETuxizR (IJYbwf[0]) << ' ' << hign (Ce0AHs7ZuItK[0], Ce0AHs7ZuItK[1], n);
    return 0;
}

int iETuxizR (char IJYbwf []) {
    int xOYsUBXILK = 1, XkP43EdvB;
    {
        XkP43EdvB = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (!('\0' == IJYbwf[XkP43EdvB])) {
            if (IJYbwf[XkP43EdvB] == ',')
                xOYsUBXILK = xOYsUBXILK + 1;
            XkP43EdvB = XkP43EdvB +1;
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
    return xOYsUBXILK;
}

int hign (int a [], int fkq7vysHlJdK [], int n) {
    int max;
    int XkP43EdvB;
    int j;
    int xOYsUBXILK;
    max = 0;
    for (XkP43EdvB = 0; XkP43EdvB < 1000; XkP43EdvB = XkP43EdvB +1) {
        xOYsUBXILK = 0;
        {
            j = 0;
            while (j <= n) {
                if (a[j] <= XkP43EdvB &&fkq7vysHlJdK[j] > XkP43EdvB)
                    xOYsUBXILK = xOYsUBXILK + 1;
                j = j + 1;
                if (xOYsUBXILK > max)
                    max = xOYsUBXILK;
            };
        };
    }
    return max;
}

