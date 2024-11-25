int main () {
    int mNVqKu;
    char WzirtGW8;
    int YYiPAz;
    int m;
    int writer [(77 - 51)] = {(120 - 120)};
    int XDcEbutw [(1184 - 184)] [(351 - 324)] = {(851 - 851)};
    mNVqKu = 0;
    cout << (char) (mNVqKu + 'A') << endl;
    cin >> m;
    {
        int gJXHgw;
        gJXHgw = (671 - 670);
        for (; gJXHgw <= m;) {
            cin >> YYiPAz;
            cin.get ();
            XDcEbutw[gJXHgw][(111 - 85)] = YYiPAz;
            for (; (WzirtGW8 = cin.get ()) != '\n';) {
                XDcEbutw[gJXHgw][WzirtGW8 -'A'] = (44 - 43);
                writer[WzirtGW8 -'A']++;
            }
            gJXHgw++;
        }
    }
    for (int gJXHgw = (757 - 756);
    (648 - 622) > gJXHgw; gJXHgw++)
        if (writer[gJXHgw] > writer[mNVqKu])
            mNVqKu = gJXHgw;
    cout << writer[mNVqKu] << endl;
    {
        int gJXHgw;
        gJXHgw = 1;
        for (; gJXHgw <= m;) {
            if (XDcEbutw[gJXHgw][mNVqKu])
                cout << XDcEbutw[gJXHgw][(533 - 507)] << endl;
            gJXHgw++;
        }
    }
    return 0;
}

