int ovdzT3cCukV (char c) {
    if (c == '.')
        c = '@';
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
    return c;
}

int thioBXJ3fnI (char c) {
    if (c == '.')
        c = '*';
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    return c;
}

int main () {
    int HDNZbcHf4hW, m, mg4mFhMaTtA = 0;
    char c [102] [102];
    cin >> HDNZbcHf4hW;
    {
        int i = (862 - 861);
        while (i <= HDNZbcHf4hW) {
            for (int POch9LC = 1;
            HDNZbcHf4hW >= POch9LC; POch9LC = POch9LC +1)
                cin >> c[i][POch9LC];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    cin >> m;
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
    for (int GXaVhm0pzH = 1;
    GXaVhm0pzH <= m - 1; GXaVhm0pzH = GXaVhm0pzH +1) {
        for (int i = 1;
        i <= HDNZbcHf4hW; i = i + 1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            for (int POch9LC = 1;
            POch9LC <= HDNZbcHf4hW; POch9LC++) {
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
                if (c[i][POch9LC] != '@')
                    continue;
                else {
                    c[i - 1][POch9LC] = ovdzT3cCukV (c[i - 1][POch9LC]);
                    c[i + 1][POch9LC] = thioBXJ3fnI (c[i + 1][POch9LC]);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    c[i][POch9LC +1] = thioBXJ3fnI (c[i][POch9LC +1]);
                    c[i][POch9LC -1] = ovdzT3cCukV (c[i][POch9LC -1]);
                };
            };
        }
        for (int i = 1;
        i <= HDNZbcHf4hW; i = i + 1) {
            int POch9LC = 1;
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
            while (POch9LC <= HDNZbcHf4hW) {
                if (c[i][POch9LC] == '*')
                    c[i][POch9LC] = '@';
                POch9LC = POch9LC +1;
            };
        };
    }
    for (int i = 1;
    i <= HDNZbcHf4hW; i = i + 1) {
        for (int POch9LC = 1;
        POch9LC <= HDNZbcHf4hW; POch9LC++) {
            mg4mFhMaTtA = mg4mFhMaTtA + c[i][POch9LC] == '@';
        };
    }
    cout << mg4mFhMaTtA << endl;
    return 0;
}

