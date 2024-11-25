int n, dwynGk [(209 - 109)] [100];

void  e0NQtJaOX (int m) {
    int KXHklP0I3 = 10000;
    for (int i = (66 - 66);
    n > i; i = i + 1) {
        if (dwynGk[m][i] < KXHklP0I3)
            KXHklP0I3 = dwynGk[m][i];
    }
    {
        int i;
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
        i = (979 - 979);
        while (i < n) {
            dwynGk[m][i] = dwynGk[m][i] - KXHklP0I3;
            i = i + 1;
        };
    };
}

void  lie (int m) {
    int KXHklP0I3 = 10000;
    {
        int i;
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
        i = (932 - 932);
        while (i < n) {
            if (dwynGk[i][m] < KXHklP0I3)
                KXHklP0I3 = dwynGk[i][m];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i = i + 1;
        };
    }
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    for (int i = (666 - 666);
    i < n; i = i + 1)
        dwynGk[i][m] -= KXHklP0I3;
}

void  nplwtyIAm (int dwynGk [100] [100]) {
    int i, TedRz0gm;
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
    for (i = (585 - 584); i < n - (358 - 357); i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (TedRz0gm = (194 - 194); TedRz0gm < n; TedRz0gm = TedRz0gm +1) {
            dwynGk[i][TedRz0gm] = dwynGk[i + (854 - 853)][TedRz0gm];
        };
    }
    {
        i = 1;
        while (i < n - 1) {
            for (TedRz0gm = (557 - 557); TedRz0gm < n; TedRz0gm = TedRz0gm +1) {
                dwynGk[TedRz0gm][i] = dwynGk[TedRz0gm][i + 1];
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    };
}

int main () {
    int i;
    cin >> n;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    for (int PMLz7FuAla = 0;
    PMLz7FuAla < n; PMLz7FuAla = PMLz7FuAla +1) {
        int EIoC6wbD5rN = 0, sum = 0;
        {
            int i = 0;
            while (i < n) {
                for (int TedRz0gm = 0;
                TedRz0gm < n; TedRz0gm++) {
                    cin >> dwynGk[i][TedRz0gm];
                }
                i++;
            };
        }
        while (EIoC6wbD5rN < n - 1) {
            nplwtyIAm (dwynGk);
            for (i = 0; i < n; i++)
                e0NQtJaOX (i);
            for (i = 0; i < n; i++)
                lie (i);
            sum = sum + dwynGk[1][1];
            EIoC6wbD5rN++;
        }
        cout << sum << endl;
    }
    return 0;
}

