int main () {
    int QkEcKBq;
    QkEcKBq = 0;
    char tMdzV9Nk [100] [100];
    char bIb3EU [100] [100];
    int eFArc9;
    int psNKLl, yU6SRf28 [100] [100];
    int zFGOy6X9 [] = {1, 0, -1, 0}, z1Ms5eEZ9a [] = {0, 1, 0, -1};
    memset (bIb3EU, -1, sizeof (bIb3EU));
    memset (yU6SRf28, -1, sizeof (yU6SRf28));
    cin >> eFArc9;
    for (int TH9X7YBzp = 1;
    eFArc9 >= TH9X7YBzp; TH9X7YBzp = TH9X7YBzp +1) {
        for (int nLtmqvhBs2yU = 1;
        eFArc9 >= nLtmqvhBs2yU; nLtmqvhBs2yU = nLtmqvhBs2yU + 1) {
            cin >> tMdzV9Nk[TH9X7YBzp][nLtmqvhBs2yU];
            if (!('.' != tMdzV9Nk[TH9X7YBzp][nLtmqvhBs2yU]))
                bIb3EU[TH9X7YBzp][nLtmqvhBs2yU] = 0;
            else if (!('@' != tMdzV9Nk[TH9X7YBzp][nLtmqvhBs2yU]))
                bIb3EU[TH9X7YBzp][nLtmqvhBs2yU] = 1;
            else if (!('#' != tMdzV9Nk[TH9X7YBzp][nLtmqvhBs2yU]))
                bIb3EU[TH9X7YBzp][nLtmqvhBs2yU] = -1;
            yU6SRf28[TH9X7YBzp][nLtmqvhBs2yU] = bIb3EU[TH9X7YBzp][nLtmqvhBs2yU];
        }
    }
    cin >> psNKLl;
    for (int TH9X7YBzp = 1;
    psNKLl > TH9X7YBzp; TH9X7YBzp++) {
        for (int nLtmqvhBs2yU = 1;
        nLtmqvhBs2yU <= eFArc9; nLtmqvhBs2yU = nLtmqvhBs2yU + 1) {
            for (int SYj5PNpkVgls = 1;
            eFArc9 >= SYj5PNpkVgls; SYj5PNpkVgls = SYj5PNpkVgls +1) {
                if (bIb3EU[nLtmqvhBs2yU][SYj5PNpkVgls] == 1) {
                    for (int Kjtpi8ZQK = 0;
                    Kjtpi8ZQK < 4; Kjtpi8ZQK++) {
                        if (yU6SRf28[nLtmqvhBs2yU + zFGOy6X9[Kjtpi8ZQK]][SYj5PNpkVgls +z1Ms5eEZ9a[Kjtpi8ZQK]] != -1)
                            yU6SRf28[nLtmqvhBs2yU + zFGOy6X9[Kjtpi8ZQK]][SYj5PNpkVgls +z1Ms5eEZ9a[Kjtpi8ZQK]] = 1;
                    }
                }
            }
        }
        for (int nLtmqvhBs2yU = 1;
        nLtmqvhBs2yU <= eFArc9; nLtmqvhBs2yU++) {
            for (int SYj5PNpkVgls = 1;
            SYj5PNpkVgls <= eFArc9; SYj5PNpkVgls++) {
                bIb3EU[nLtmqvhBs2yU][SYj5PNpkVgls] = yU6SRf28[nLtmqvhBs2yU][SYj5PNpkVgls];
            }
        }
    }
    for (int TH9X7YBzp = 1;
    TH9X7YBzp <= eFArc9; TH9X7YBzp++) {
        for (int nLtmqvhBs2yU = 1;
        nLtmqvhBs2yU <= eFArc9; nLtmqvhBs2yU++) {
            if (yU6SRf28[TH9X7YBzp][nLtmqvhBs2yU] == 1)
                QkEcKBq = QkEcKBq +1;
        }
    }
    cout << QkEcKBq;
    return 0;
}

