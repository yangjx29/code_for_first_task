int main () {
    char l [1000];
    int Pr91EeONQ;
    long  long  PmjMytY;
    long  long  SQw8up [1000];
    long  long  UPJEhFez0cmN = (739 - 739);
    char c [1000];
    double  LcQ2Sr;
    double  b;
    double  d;
    int WgdosDE [(1278 - 278)];
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
    int u1ba7ZjC = -1;
    cin >> LcQ2Sr >> c >> b;
    d = strlen (c);
    for (int i = (429 - 429);
    d > i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ('0' <= c[i] && '9' >= c[i]) {
            WgdosDE[i] = c[i] - 48;
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
        else if ('A' <= c[i] && c[i] <= 'Z') {
            WgdosDE[i] = c[i] - 55;
        }
        else if ('a' <= c[i] && c[i] <= 'z') {
            WgdosDE[i] = c[i] - 87;
        };
    }
    {
        int i = 0;
        while (d > i) {
            UPJEhFez0cmN = UPJEhFez0cmN +WgdosDE[i] * pow (LcQ2Sr, (d - i - (74 - 73)));
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
    PmjMytY = UPJEhFez0cmN;
    Pr91EeONQ = b / 1;
    {
        int i = 0;
        while (1000 > i) {
            SQw8up[i] = PmjMytY % Pr91EeONQ;
            PmjMytY = PmjMytY / Pr91EeONQ;
            if (1 > PmjMytY)
                break;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            i = i + 1;
            u1ba7ZjC = u1ba7ZjC + 1;
        };
    }
    {
        int i = 0;
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
        while (i <= u1ba7ZjC) {
            if (SQw8up[u1ba7ZjC - i] >= 0 && SQw8up[u1ba7ZjC - i] <= 9) {
                l[i] = SQw8up[u1ba7ZjC - i] + 48;
            }
            else {
                if (SQw8up[u1ba7ZjC - i] >= 10 && SQw8up[u1ba7ZjC - i] <= 35) {
                    l[i] = SQw8up[u1ba7ZjC - i] + 55;
                };
            }
            i = i + 1;
        };
    }
    for (int i = 0;
    i <= u1ba7ZjC; i++) {
        cout << l[i];
    }
    cout << endl;
    return 0;
}

