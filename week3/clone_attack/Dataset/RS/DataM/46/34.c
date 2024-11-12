int main () {
    int i6g3UJOGmwf;
    int PGrZv8kFSzo;
    int AUCQAn5Iqb;
    i6g3UJOGmwf = 1;
    PGrZv8kFSzo = 1;
    AUCQAn5Iqb = 0;
    const  int PDlGizpf [4] = {(339 - 338), (873 - 873), -(415 - 414), (544 - 544)};
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
    const  int zDuUIJ3bwG0P [(968 - 964)] = {(675 - 675), (828 - 827), (761 - 761), -(906 - 905)};
    int Xtw1UNLOYiMR, uUONEq50Tl, Q4d9Ck16JiwD [(206 - 105)] [(690 - 589)], impeQW5Y [101] [101];
    cin >> Xtw1UNLOYiMR >> uUONEq50Tl;
    {
        int ZQ9TVd = 1;
        while (ZQ9TVd <= Xtw1UNLOYiMR) {
            {
                int LGduqMbiZTsn = 1;
                while (uUONEq50Tl >= LGduqMbiZTsn) {
                    cin >> Q4d9Ck16JiwD[ZQ9TVd][LGduqMbiZTsn];
                    LGduqMbiZTsn = LGduqMbiZTsn +1;
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
            ZQ9TVd = ZQ9TVd +1;
        };
    }
    {
        int ZQ9TVd = (592 - 592);
        while (Xtw1UNLOYiMR +1 >= ZQ9TVd) {
            {
                int LGduqMbiZTsn = 0;
                while (LGduqMbiZTsn <= uUONEq50Tl + 1) {
                    impeQW5Y[ZQ9TVd][LGduqMbiZTsn] = 1;
                    LGduqMbiZTsn = LGduqMbiZTsn +1;
                };
            }
            ZQ9TVd++;
        };
    }
    {
        int ZQ9TVd = 1;
        while (ZQ9TVd <= Xtw1UNLOYiMR) {
            {
                int LGduqMbiZTsn = 1;
                while (LGduqMbiZTsn <= uUONEq50Tl) {
                    impeQW5Y[ZQ9TVd][LGduqMbiZTsn] = 0;
                    LGduqMbiZTsn++;
                };
            }
            ZQ9TVd++;
        };
    }
    {
        int ZQ9TVd = 1;
        while (ZQ9TVd <= Xtw1UNLOYiMR *uUONEq50Tl) {
            ZQ9TVd++;
            cout << Q4d9Ck16JiwD[i6g3UJOGmwf][PGrZv8kFSzo] << endl;
            impeQW5Y[i6g3UJOGmwf][PGrZv8kFSzo] = 1;
            if (impeQW5Y[i6g3UJOGmwf + zDuUIJ3bwG0P[AUCQAn5Iqb]][PGrZv8kFSzo +PDlGizpf[AUCQAn5Iqb]] == 0) {
                i6g3UJOGmwf = i6g3UJOGmwf + zDuUIJ3bwG0P[AUCQAn5Iqb];
                PGrZv8kFSzo = PGrZv8kFSzo +PDlGizpf[AUCQAn5Iqb];
            }
            else {
                AUCQAn5Iqb++;
                if (AUCQAn5Iqb == 4)
                    AUCQAn5Iqb = 0;
                i6g3UJOGmwf = i6g3UJOGmwf + zDuUIJ3bwG0P[AUCQAn5Iqb];
                PGrZv8kFSzo += PDlGizpf[AUCQAn5Iqb];
            };
        };
    }
    return 0;
}

