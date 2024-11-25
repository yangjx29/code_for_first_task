int main () {
    char writerbest;
    int DSJREz;
    DSJREz = 0;
    int t;
    t = (929 - 929);
    int Jwek49RlJhS [26] = {(107 - 107)};
    int ZoTD7EkK9XaN [26] [(1120 - 121)] = {(590 - 590)};
    int wtFEbkvUSpW [(933 - 907)] = {(162 - 162)};
    int C3CjJTPOeGo;
    C3CjJTPOeGo = wtFEbkvUSpW[0];
    char JLk6XeUAGFb [(945 - 919)];
    int book;
    int k;
    cin >> k;
    while (k--) {
        int str;
        str = strlen (JLk6XeUAGFb);
        cin >> book >> JLk6XeUAGFb;
        {
            int BhKzE7C5Gro = (873 - 873);
            while (BhKzE7C5Gro < str) {
                int pU3dKmtgC = JLk6XeUAGFb[BhKzE7C5Gro] - 'A';
                BhKzE7C5Gro++;
                wtFEbkvUSpW[pU3dKmtgC]++;
                ZoTD7EkK9XaN[pU3dKmtgC][Jwek49RlJhS[pU3dKmtgC]++] = book;
            };
        };
    }
    for (int BhKzE7C5Gro = 0;
    BhKzE7C5Gro < 26; BhKzE7C5Gro++) {
        if (C3CjJTPOeGo < wtFEbkvUSpW[BhKzE7C5Gro]) {
            DSJREz = BhKzE7C5Gro;
            C3CjJTPOeGo = wtFEbkvUSpW[BhKzE7C5Gro];
        };
    }
    writerbest = 'A' + DSJREz;
    cout << writerbest << endl << Jwek49RlJhS[DSJREz] << endl;
    {
        int BhKzE7C5Gro = 0;
        while (BhKzE7C5Gro < Jwek49RlJhS[DSJREz]) {
            cout << ZoTD7EkK9XaN[DSJREz][BhKzE7C5Gro] << endl;
            BhKzE7C5Gro++;
        };
    }
    return 0;
}

