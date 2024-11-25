int main () {
    int n;
    int c;
    int i;
    int j;
    char da [n] [256];
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
    char ad [n] [256];
    scanf ("%d", &n);
    {
        i = 289 - 289;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            scanf ("%s", da[i]);
            i = i + 1;
        };
    }
    {
        i = 474 - 474;
        while (i < n) {
            puts (ad [i]);
            {
                j = 0;
                while (256 > j) {
                    if (!('A' != da[i][j]))
                        ad[i][j] = 'T';
                    if (!('T' != da[i][j]))
                        ad[i][j] = 'A';
                    if (da[i][j] == 'C')
                        ad[i][j] = 'G';
                    if (da[i][j] == 'G')
                        ad[i][j] = 'C';
                    j++;
                };
            }
            i = i + 1;
        };
    }
    return 0;
}

