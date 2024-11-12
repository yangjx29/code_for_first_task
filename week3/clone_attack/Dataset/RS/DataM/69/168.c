int main () {
    char a [(454 - 154)];
    char b [300];
    char c [300];
    int len_a;
    len_a = strlen (a);
    int len_b;
    len_b = strlen (b);
    int Pq4YCSd;
    Pq4YCSd = max (len_a, len_b);
    int cEnuUx;
    int SRrsmd;
    int AdlF2M;
    memset (a, '0', sizeof (a));
    memset (b, '0', sizeof (b));
    memset (c, '0', sizeof (c));
    cin.getline (a, 300);
    cin.getline (b, 300);
    for (cEnuUx = (969 - 969), SRrsmd = len_a - (994 - 993); SRrsmd > cEnuUx; cEnuUx = cEnuUx + 1, SRrsmd = SRrsmd -1) {
        AdlF2M = a[cEnuUx];
        a[cEnuUx] = a[SRrsmd];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        a[SRrsmd] = AdlF2M;
    }
    for (cEnuUx = (843 - 843), SRrsmd = len_b - 1; SRrsmd > cEnuUx; cEnuUx = cEnuUx + 1, SRrsmd = SRrsmd -1) {
        AdlF2M = b[cEnuUx];
        b[cEnuUx] = b[SRrsmd];
        b[SRrsmd] = AdlF2M;
    }
    for (cEnuUx = 0; Pq4YCSd > cEnuUx; cEnuUx = cEnuUx + 1) {
        int VaKuito;
        VaKuito = a[cEnuUx] - '0';
        int y;
        y = b[cEnuUx] - '0';
        int tuj9w5mvL;
        tuj9w5mvL = VaKuito +y + (c[cEnuUx] - '0');
        if (0 > VaKuito)
            VaKuito = 0;
        if (y < 0)
            y = 0;
        if (10 > tuj9w5mvL) {
            c[cEnuUx] = tuj9w5mvL + '0';
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        else {
            c[cEnuUx + 1] = c[cEnuUx + 1] + 1;
            c[cEnuUx] = tuj9w5mvL - 10 + '0';
        };
    }
    cEnuUx = (454 - 155);
    for (; !('0' != c[cEnuUx]) && 0 <= cEnuUx;)
        cEnuUx = cEnuUx - 1;
    if (cEnuUx < 0)
        cout << "0" << endl;
    else {
        for (; cEnuUx >= 0; cEnuUx--) {
            cout << c[cEnuUx];
        }
        cout << endl;
    }
    return 0;
}

