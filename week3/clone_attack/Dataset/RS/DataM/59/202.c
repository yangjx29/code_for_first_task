int main () {
    char a [105] [105];
    char b [105] [105];
    int Jqa6m8X9j;
    int s;
    int krJkEp;
    int i;
    int j;
    int m;
    Jqa6m8X9j = 0;
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
    s = 0;
    getchar ();
    scanf ("%d", &krJkEp);
    scanf ("%d", &m);
    for (i = 0; i < krJkEp; i = i + 1) {
        gets (a [i]);
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
    for (i = 0; i <= krJkEp; i = i + 1)
        a[i][krJkEp] = a[krJkEp][i] = '#';
    for (j = 0; j <= krJkEp; j = j + 1) {
        Jqa6m8X9j = 0;
        while (Jqa6m8X9j <= krJkEp) {
            b[j][Jqa6m8X9j] = a[j][Jqa6m8X9j];
            Jqa6m8X9j = Jqa6m8X9j +1;
        };
    }
    for (i = 1; i < m; i = i + 1) {
        for (j = 0; j < krJkEp; j = j + 1) {
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
            for (Jqa6m8X9j = 0; Jqa6m8X9j < krJkEp; Jqa6m8X9j = Jqa6m8X9j +1) {
                if (a[j][Jqa6m8X9j] == '.') {
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
                    if (a[j][Jqa6m8X9j +1] == '@' || a[j + 1][Jqa6m8X9j] == '@')
                        b[j][Jqa6m8X9j] = '@';
                    else {
                        if (Jqa6m8X9j != 0)
                            if (a[j][Jqa6m8X9j -1] == '@')
                                b[j][Jqa6m8X9j] = '@';
                        if (i != 0)
                            if (a[j - 1][Jqa6m8X9j] == '@')
                                b[j][Jqa6m8X9j] = '@';
                    };
                }
                else
                    b[j][Jqa6m8X9j] = a[j][Jqa6m8X9j];
            };
        }
        for (j = 0; j < krJkEp; j++) {
            Jqa6m8X9j = 0;
            while (Jqa6m8X9j < krJkEp) {
                a[j][Jqa6m8X9j] = b[j][Jqa6m8X9j];
                Jqa6m8X9j = Jqa6m8X9j +1;
            };
        };
    }
    for (i = 0; i < krJkEp; i++)
        for (j = 0; j < krJkEp; j++) {
            if (a[i][j] == '@')
                s = s + 1;
        }
    printf ("%d", s);
    return 0;
}

