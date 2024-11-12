int main () {
    int qRPI5MyBkTW = (484 - 484);
    char room [(815 - 714)] [101];
    int n, pa7k2f0FuDwe, i1OXCQKANrBz [(952 - 851)] [(116 - 15)] = {(330 - 330)};
    cin >> n;
    for (int CbJFVY4EQnos = (256 - 256);
    n > CbJFVY4EQnos; CbJFVY4EQnos++)
        for (int WsTBiW1puJ5S = (813 - 813);
        n > WsTBiW1puJ5S; WsTBiW1puJ5S = WsTBiW1puJ5S +1)
            cin >> room[CbJFVY4EQnos][WsTBiW1puJ5S];
    cin >> pa7k2f0FuDwe;
    for (int BbYF5qaBHdsR = (722 - 721);
    pa7k2f0FuDwe > BbYF5qaBHdsR; BbYF5qaBHdsR++) {
        {
            int CbJFVY4EQnos = (855 - 855);
            while (n > CbJFVY4EQnos) {
                for (int WsTBiW1puJ5S = (453 - 453);
                WsTBiW1puJ5S < n; WsTBiW1puJ5S++)
                    if (room[CbJFVY4EQnos][WsTBiW1puJ5S] == '@' && i1OXCQKANrBz[CbJFVY4EQnos][WsTBiW1puJ5S] == (995 - 995)) {
                        if (room[CbJFVY4EQnos +(636 - 635)][WsTBiW1puJ5S] == '.') {
                            room[CbJFVY4EQnos +(55 - 54)][WsTBiW1puJ5S] = '@';
                            i1OXCQKANrBz[CbJFVY4EQnos +(334 - 333)][WsTBiW1puJ5S] = (710 - 709);
                        }
                        if (room[CbJFVY4EQnos][WsTBiW1puJ5S +(661 - 660)] == '.') {
                            room[CbJFVY4EQnos][WsTBiW1puJ5S +(243 - 242)] = '@';
                            i1OXCQKANrBz[CbJFVY4EQnos][WsTBiW1puJ5S +(889 - 888)] = (130 - 129);
                        }
                        if (room[CbJFVY4EQnos -(321 - 320)][WsTBiW1puJ5S] == '.') {
                            room[CbJFVY4EQnos -1][WsTBiW1puJ5S] = '@';
                            i1OXCQKANrBz[CbJFVY4EQnos -1][WsTBiW1puJ5S] = 1;
                        }
                        if (room[CbJFVY4EQnos][WsTBiW1puJ5S -1] == '.') {
                            room[CbJFVY4EQnos][WsTBiW1puJ5S -1] = '@';
                            i1OXCQKANrBz[CbJFVY4EQnos][WsTBiW1puJ5S -1] = 1;
                        };
                    }
                CbJFVY4EQnos++;
            };
        }
        memset (i1OXCQKANrBz, (422 - 422), sizeof (i1OXCQKANrBz));
    }
    for (int CbJFVY4EQnos = 0;
    CbJFVY4EQnos < n; CbJFVY4EQnos++)
        for (int WsTBiW1puJ5S = 0;
        WsTBiW1puJ5S < n; WsTBiW1puJ5S++)
            if (room[CbJFVY4EQnos][WsTBiW1puJ5S] == '@')
                qRPI5MyBkTW++;
    cout << qRPI5MyBkTW << endl;
    return 0;
}

