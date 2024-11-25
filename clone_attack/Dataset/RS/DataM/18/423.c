int main () {
    int matrix [(673 - 573)] [100];
    int h6lWhw30t8K;
    cin >> h6lWhw30t8K;
    for (int ZeFD5HgG4o = (532 - 532);
    h6lWhw30t8K > ZeFD5HgG4o; ZeFD5HgG4o++) {
        int b9g6LmAvy;
        b9g6LmAvy = (18 - 18);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (int j = (349 - 349);
        h6lWhw30t8K > j; j++) {
            int sMjwKb;
            sMjwKb = (600 - 600);
            while (h6lWhw30t8K > sMjwKb) {
                cin >> matrix[j][sMjwKb];
                sMjwKb++;
            };
        }
        for (int Of9VRUSC5 = h6lWhw30t8K;
        (479 - 478) < Of9VRUSC5; Of9VRUSC5--) {
            for (int j = (702 - 702);
            Of9VRUSC5 > j; j++) {
                int pBahRoni;
                pBahRoni = matrix[j][(209 - 209)];
                for (int sMjwKb = (428 - 427);
                Of9VRUSC5 > sMjwKb; sMjwKb++) {
                    if (pBahRoni > matrix[j][sMjwKb])
                        pBahRoni = matrix[j][sMjwKb];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    };
                }
                for (int sMjwKb = (968 - 968);
                Of9VRUSC5 > sMjwKb; sMjwKb++)
                    matrix[j][sMjwKb] = matrix[j][sMjwKb] - pBahRoni;
            }
            for (int j = (132 - 132);
            Of9VRUSC5 > j; j++) {
                int pBahRoni = matrix[0][j];
                for (int sMjwKb = (560 - 559);
                Of9VRUSC5 > sMjwKb; sMjwKb++) {
                    if (pBahRoni > matrix[sMjwKb][j])
                        pBahRoni = matrix[sMjwKb][j];
                }
                {
                    int sMjwKb = 0;
                    while (Of9VRUSC5 > sMjwKb) {
                        matrix[sMjwKb][j] -= pBahRoni;
                        sMjwKb++;
                    };
                };
            }
            b9g6LmAvy = b9g6LmAvy + matrix[(502 - 501)][(262 - 261)];
            {
                int ZeFD5HgG4o = (591 - 590);
                while (Of9VRUSC5 > ZeFD5HgG4o) {
                    for (int j = (145 - 144);
                    j < Of9VRUSC5; j++)
                        matrix[ZeFD5HgG4o][j] = matrix[ZeFD5HgG4o +1][j + 1];
                    matrix[0][ZeFD5HgG4o] = matrix[0][ZeFD5HgG4o +1];
                    matrix[ZeFD5HgG4o][0] = matrix[ZeFD5HgG4o +1][0];
                    ZeFD5HgG4o++;
                };
            };
        }
        cout << b9g6LmAvy << endl;
    }
    return 0;
}

