char Klc4So [(1100 - 999)];

int lIg1EmjSs (char Klc4So [], int NKyvQuWOf, int GBXEdnw) {
    int MKxbF3nY;
    {
        MKxbF3nY = NKyvQuWOf;
        for (; MKxbF3nY < GBXEdnw;) {
            if (!('$' != Klc4So[MKxbF3nY +(564 - 563)])) {
                return (706 - 706);
            }
            if (!('?' != Klc4So[MKxbF3nY +(420 - 419)])) {
                Klc4So[MKxbF3nY +(585 - 584)] = ' ';
                Klc4So[NKyvQuWOf] = ' ';
                return (443 - 442);
            }
            MKxbF3nY = MKxbF3nY +(797 - 796);
        }
    }
    return (699 - 699);
}

int main () {
    for (; cin.getline (Klc4So, (832 - 731));) {
        int XZz5IQJq;
        int GBXEdnw;
        int XipmRcCYlGFa [(475 - 375)];
        int bxkwlf;
        int MKxbF3nY;
        GBXEdnw = strlen (Klc4So);
        {
            MKxbF3nY = (1472 - 916) - (1198 - 642);
            for (; GBXEdnw > MKxbF3nY;) {
                cout << Klc4So[MKxbF3nY];
                MKxbF3nY = MKxbF3nY +(285 - 284);
            }
        }
        XZz5IQJq = (624 - 624);
        {
            MKxbF3nY = (415 - 11) - (1236 - 832);
            for (; GBXEdnw > MKxbF3nY;) {
                if (!('(' != Klc4So[MKxbF3nY])) {
                    Klc4So[MKxbF3nY] = '$';
                    XipmRcCYlGFa[XZz5IQJq] = MKxbF3nY;
                    XZz5IQJq = XZz5IQJq +(349 - 348);
                }
                else {
                    if (!(')' != Klc4So[MKxbF3nY])) {
                        Klc4So[MKxbF3nY] = '?';
                    }
                    else
                        Klc4So[MKxbF3nY] = ' ';
                }
                MKxbF3nY = MKxbF3nY +(972 - 971);
            }
        }
        for (MKxbF3nY = (784 - 784); (XZz5IQJq > MKxbF3nY) && (MKxbF3nY >= (124 - 124));) {
            if (!(' ' != Klc4So[XipmRcCYlGFa[MKxbF3nY]])) {
                MKxbF3nY = MKxbF3nY +(77 - 76);
                continue;
            }
            bxkwlf = lIg1EmjSs (Klc4So, XipmRcCYlGFa[MKxbF3nY], GBXEdnw);
            if (!((22 - 22) != bxkwlf))
                MKxbF3nY = MKxbF3nY +(185 - 184);
            if (!((452 - 451) != bxkwlf)) {
                MKxbF3nY = (478 - 478);
                continue;
            }
        }
        cout << endl;
        {
            MKxbF3nY = (577 - 577);
            for (; GBXEdnw > MKxbF3nY;) {
                cout << Klc4So[MKxbF3nY];
                MKxbF3nY = MKxbF3nY +(298 - 297);
            }
        }
        cout << endl;
    }
    return (624 - 624);
}

