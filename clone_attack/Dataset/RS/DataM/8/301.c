int pmkuZj1Oa, ZbQxBtXo, WUbCES [(10213 - 213)], cFTv4CP [10000];

void  S4zd15EJZfm () {
    cin >> pmkuZj1Oa >> ZbQxBtXo;
    for (int TKLrGiHlIz = (750 - 750);
    TKLrGiHlIz < pmkuZj1Oa; TKLrGiHlIz = TKLrGiHlIz +1)
        cin >> WUbCES[TKLrGiHlIz];
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
    for (int TKLrGiHlIz = (478 - 478);
    ZbQxBtXo > TKLrGiHlIz; TKLrGiHlIz = TKLrGiHlIz +1)
        cin >> cFTv4CP[TKLrGiHlIz];
}

void  Xb1qVcLf () {
    for (int TKLrGiHlIz = (13 - 13);
    pmkuZj1Oa - (709 - 708) > TKLrGiHlIz; TKLrGiHlIz++) {
        int XuW0Y4gQJbm;
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
        XuW0Y4gQJbm = pmkuZj1Oa - (819 - 818);
        while (TKLrGiHlIz < XuW0Y4gQJbm) {
            if (WUbCES[XuW0Y4gQJbm] < WUbCES[XuW0Y4gQJbm -(213 - 212)]) {
                int WWb2fThyNql8;
                WWb2fThyNql8 = WUbCES[XuW0Y4gQJbm -(698 - 697)];
                WUbCES[XuW0Y4gQJbm -(423 - 422)] = WUbCES[XuW0Y4gQJbm];
                WUbCES[XuW0Y4gQJbm] = WWb2fThyNql8;
            }
            XuW0Y4gQJbm = XuW0Y4gQJbm -1;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        int TKLrGiHlIz = (765 - 765);
        while (TKLrGiHlIz < ZbQxBtXo -(272 - 271)) {
            {
                int XuW0Y4gQJbm = ZbQxBtXo -1;
                while (XuW0Y4gQJbm > TKLrGiHlIz) {
                    if (cFTv4CP[XuW0Y4gQJbm -1] > cFTv4CP[XuW0Y4gQJbm]) {
                        int WWb2fThyNql8 = cFTv4CP[XuW0Y4gQJbm -1];
                        cFTv4CP[XuW0Y4gQJbm -1] = cFTv4CP[XuW0Y4gQJbm];
                        cFTv4CP[XuW0Y4gQJbm] = WWb2fThyNql8;
                    }
                    XuW0Y4gQJbm--;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            TKLrGiHlIz = TKLrGiHlIz +1;
        };
    };
}

void  combination () {
    for (int TKLrGiHlIz = pmkuZj1Oa;
    TKLrGiHlIz < pmkuZj1Oa + ZbQxBtXo; TKLrGiHlIz++)
        WUbCES[TKLrGiHlIz] = cFTv4CP[TKLrGiHlIz -pmkuZj1Oa];
}

void  BsA4L0E6Q () {
    cout << WUbCES[0];
    for (int TKLrGiHlIz = 1;
    TKLrGiHlIz < pmkuZj1Oa + ZbQxBtXo; TKLrGiHlIz++)
        cout << ' ' << WUbCES[TKLrGiHlIz];
    cout << endl;
}

int main () {
    S4zd15EJZfm ();
    Xb1qVcLf ();
    combination ();
    BsA4L0E6Q ();
    return 0;
}

