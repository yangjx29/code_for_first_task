int main () {
    int G12SEJKXF;
    char Vbnv0OHB [max] [max];
    int emiLN9b;
    int zGQxHqNEMw = 0;
    cin >> emiLN9b;
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
    {
        int i = (661 - 661);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (emiLN9b > i) {
            for (int Z6eoXcrG9m3v = 0;
            emiLN9b > Z6eoXcrG9m3v; Z6eoXcrG9m3v = Z6eoXcrG9m3v +1)
                cin >> Vbnv0OHB[i][Z6eoXcrG9m3v];
            i++;
        };
    }
    for (int i = 0;
    G12SEJKXF -1 > i; i = i + 1) {
        for (int Z6eoXcrG9m3v = 0;
        emiLN9b > Z6eoXcrG9m3v; Z6eoXcrG9m3v++)
            for (int k = 0;
            emiLN9b > k; k = k + 1)
                if (!('@' != Vbnv0OHB[Z6eoXcrG9m3v][k])) {
                    if (0 < Z6eoXcrG9m3v &&!('.' != Vbnv0OHB[Z6eoXcrG9m3v -1][k]))
                        Vbnv0OHB[Z6eoXcrG9m3v -1][k] = '%';
                    if (emiLN9b - 1 > Z6eoXcrG9m3v &&!('.' != Vbnv0OHB[Z6eoXcrG9m3v +1][k]))
                        Vbnv0OHB[Z6eoXcrG9m3v +1][k] = '%';
                    if (0 < k && !('.' != Vbnv0OHB[Z6eoXcrG9m3v][k - 1]))
                        Vbnv0OHB[Z6eoXcrG9m3v][k - 1] = '%';
                    if (emiLN9b - 1 > k && Vbnv0OHB[Z6eoXcrG9m3v][k + 1] == '.')
                        Vbnv0OHB[Z6eoXcrG9m3v][k + 1] = '%';
                }
        {
            int Z6eoXcrG9m3v = 0;
            while (Z6eoXcrG9m3v < emiLN9b) {
                for (int k = 0;
                k < emiLN9b; k++)
                    if (Vbnv0OHB[Z6eoXcrG9m3v][k] == '%')
                        Vbnv0OHB[Z6eoXcrG9m3v][k] = '@';
                Z6eoXcrG9m3v++;
            };
        };
    }
    for (int i = 0;
    i < emiLN9b; i = i + 1)
        for (int Z6eoXcrG9m3v = 0;
        Z6eoXcrG9m3v < emiLN9b; Z6eoXcrG9m3v++)
            if (Vbnv0OHB[i][Z6eoXcrG9m3v] == '@')
                zGQxHqNEMw++;
    cout << zGQxHqNEMw;
    cin >> G12SEJKXF;
}

