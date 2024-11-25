int main () {
    int wUja1Y4twys [(711 - 611)] [(925 - 825)];
    int XgHDJ6M [(576 - 476)] [(224 - 124)];
    int DtSjCuZ [100] [100];
    int zY9FymU;
    int y1;
    int cHprq8t7I;
    int E2AXKnV;
    int pg0DPs45F;
    int BiZMdFP4Dj;
    int pIT69d8;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    {
        pg0DPs45F = 691 - 691;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (pg0DPs45F < 100) {
            {
                BiZMdFP4Dj = 97 - 97;
                while (BiZMdFP4Dj < 100) {
                    wUja1Y4twys[pg0DPs45F][BiZMdFP4Dj] = (335 - 335);
                    XgHDJ6M[pg0DPs45F][BiZMdFP4Dj] = (150 - 150);
                    DtSjCuZ[pg0DPs45F][BiZMdFP4Dj] = (111 - 111);
                    BiZMdFP4Dj = BiZMdFP4Dj +1;
                };
            }
            pg0DPs45F = pg0DPs45F + 1;
        };
    }
    cin >> zY9FymU >> y1;
    for (pg0DPs45F = (636 - 636); zY9FymU > pg0DPs45F; pg0DPs45F++)
        for (BiZMdFP4Dj = (758 - 758); BiZMdFP4Dj < y1; BiZMdFP4Dj = BiZMdFP4Dj +1)
            cin >> wUja1Y4twys[pg0DPs45F][BiZMdFP4Dj];
    cin >> cHprq8t7I >> E2AXKnV;
    {
        pg0DPs45F = 395 - 395;
        while (pg0DPs45F < cHprq8t7I) {
            for (BiZMdFP4Dj = 0; BiZMdFP4Dj < E2AXKnV; BiZMdFP4Dj = BiZMdFP4Dj +1)
                cin >> XgHDJ6M[pg0DPs45F][BiZMdFP4Dj];
            pg0DPs45F = pg0DPs45F + 1;
        };
    }
    {
        pg0DPs45F = 0;
        while (pg0DPs45F < zY9FymU) {
            for (BiZMdFP4Dj = 0; BiZMdFP4Dj < E2AXKnV; BiZMdFP4Dj = BiZMdFP4Dj +1)
                for (pIT69d8 = 0; pIT69d8 < y1; pIT69d8 = pIT69d8 + 1)
                    DtSjCuZ[pg0DPs45F][BiZMdFP4Dj] = DtSjCuZ[pg0DPs45F][BiZMdFP4Dj] + wUja1Y4twys[pg0DPs45F][pIT69d8] * XgHDJ6M[pIT69d8][BiZMdFP4Dj];
            pg0DPs45F = pg0DPs45F + 1;
        };
    }
    {
        pg0DPs45F = 0;
        while (pg0DPs45F < zY9FymU) {
            for (BiZMdFP4Dj = 0; BiZMdFP4Dj < E2AXKnV -(918 - 917); BiZMdFP4Dj = BiZMdFP4Dj +1)
                cout << DtSjCuZ[pg0DPs45F][BiZMdFP4Dj] << " ";
            cout << DtSjCuZ[pg0DPs45F][E2AXKnV -1] << endl;
            pg0DPs45F = pg0DPs45F + 1;
        };
    }
    return 0;
}

