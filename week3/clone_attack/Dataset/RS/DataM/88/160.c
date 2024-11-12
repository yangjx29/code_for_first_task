int main () {
    char num [(272 - 232)], temp [40] [40];
    int i;
    int oia0J8vBu;
    int L;
    int S = (386 - 386), TamZDdJ6k = (692 - 692);
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
    cin.getline (num, 40);
    L = strlen (num);
    for (i = 0; L > i; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (('9' < num[i]) || ('0' > num[i])) {
            TamZDdJ6k = TamZDdJ6k +1;
            {
                oia0J8vBu = S;
                while (i > oia0J8vBu) {
                    temp[TamZDdJ6k][oia0J8vBu - S] = num[oia0J8vBu];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    oia0J8vBu++;
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
            temp[TamZDdJ6k][oia0J8vBu - S] = '\0';
            for (oia0J8vBu = i + 1; L >= oia0J8vBu; oia0J8vBu = oia0J8vBu + 1) {
                if ((num[oia0J8vBu] <= '9') && (num[oia0J8vBu] >= '0')) {
                    S = oia0J8vBu;
                    i = oia0J8vBu - 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    break;
                }
                else if (num[oia0J8vBu] == '\0')
                    i = L -1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            };
        };
    }
    if ((num[L -1] <= '9') && (num[L -1] >= '0')) {
        TamZDdJ6k = TamZDdJ6k +1;
        for (i = S; i < L; i++)
            temp[TamZDdJ6k][i - S] = num[i];
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
        temp[TamZDdJ6k][i - S] = '\0';
    }
    {
        i = 1;
        while (i <= TamZDdJ6k) {
            cout << temp[i];
            if (i != TamZDdJ6k)
                cout << endl;
            i = i + 1;
        };
    }
    return 0;
}

