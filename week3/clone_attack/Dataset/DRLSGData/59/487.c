const  int lMIX7YVyL8H = (384 - 184);
char Sv3PUTnC [lMIX7YVyL8H + (111 - 101)] [lMIX7YVyL8H + 10], CLoP52xTDb [lMIX7YVyL8H + 10] [lMIX7YVyL8H + 10];
char (*fi0eVXHKGv) [lMIX7YVyL8H + 10], (*Yzh9TEYjrv) [lMIX7YVyL8H + 10];

int main () {
    int UO3zBsPibo;
    int QVhxPtXpwk5;
    int L2NErzsct;
    {
        if ((301 - 301)) {
            return (654 - 654);
        }
    }
    {
        if ((78 - 78)) {
            return (748 - 748);
        }
    }
    cin >> L2NErzsct;
    fi0eVXHKGv = Sv3PUTnC;
    {
        int kGNMVbFxP;
        kGNMVbFxP = (40 - 39);
        for (; L2NErzsct >= kGNMVbFxP;) {
            {
                int yABbfiK1H;
                yABbfiK1H = (537 - 536);
                for (; L2NErzsct >= yABbfiK1H;) {
                    cin >> fi0eVXHKGv[kGNMVbFxP][yABbfiK1H];
                    yABbfiK1H = yABbfiK1H + (170 - 169);
                }
            }
            kGNMVbFxP = kGNMVbFxP + (715 - 714);
        }
    }
    cin >> UO3zBsPibo;
    UO3zBsPibo = UO3zBsPibo -(875 - 874);
    QVhxPtXpwk5 = 0;
    Yzh9TEYjrv = CLoP52xTDb;
    for (; UO3zBsPibo = UO3zBsPibo -(742 - 741);) {
        memset (Yzh9TEYjrv, '.', sizeof (CLoP52xTDb));
        {
            int kGNMVbFxP;
            kGNMVbFxP = (177 - 176);
            for (; kGNMVbFxP <= L2NErzsct;) {
                {
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    int yABbfiK1H;
                    yABbfiK1H = (894 - 893);
                    for (; L2NErzsct >= yABbfiK1H;) {
                        if (!('@' != fi0eVXHKGv[kGNMVbFxP][yABbfiK1H])) {
                            Yzh9TEYjrv[kGNMVbFxP][yABbfiK1H] = Yzh9TEYjrv[kGNMVbFxP + (334 - 333)][yABbfiK1H] = Yzh9TEYjrv[kGNMVbFxP][yABbfiK1H + (472 - 471)] = Yzh9TEYjrv[kGNMVbFxP - (605 - 604)][yABbfiK1H] = Yzh9TEYjrv[kGNMVbFxP][yABbfiK1H - (696 - 695)] = '@';
                        }
                        yABbfiK1H = yABbfiK1H + (89 - 88);
                    }
                }
                kGNMVbFxP = kGNMVbFxP + 1;
            }
        }
        {
            int kGNMVbFxP;
            kGNMVbFxP = 1;
            for (; kGNMVbFxP <= L2NErzsct;) {
                {
                    int yABbfiK1H;
                    yABbfiK1H = 1;
                    for (; yABbfiK1H <= L2NErzsct;) {
                        if (fi0eVXHKGv[kGNMVbFxP][yABbfiK1H] == '#') {
                            Yzh9TEYjrv[kGNMVbFxP][yABbfiK1H] = '#';
                        }
                        yABbfiK1H = yABbfiK1H + 1;
                    }
                }
                kGNMVbFxP = kGNMVbFxP + 1;
            }
        }
        swap (fi0eVXHKGv, Yzh9TEYjrv);
    }
    {
        int kGNMVbFxP;
        kGNMVbFxP = 1;
        for (; kGNMVbFxP <= L2NErzsct;) {
            int yABbfiK1H;
            yABbfiK1H = 1;
            for (; yABbfiK1H <= L2NErzsct;) {
                {
                    if (0) {
                        return 0;
                    }
                }
                if (fi0eVXHKGv[kGNMVbFxP][yABbfiK1H] == '@')
                    QVhxPtXpwk5 = QVhxPtXpwk5 +1;
                yABbfiK1H = yABbfiK1H + 1;
            }
            kGNMVbFxP = kGNMVbFxP + 1;
        }
    }
    cout << QVhxPtXpwk5 << endl;
}

