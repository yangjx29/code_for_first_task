int main () {
    char JAFPzClS [105] [105], OXwKvFDMr9 [105] [105];
    int yxst6U;
    int WZlxLipCVOde;
    int cPlSHwsGe5;
    int Xx2g0Z7cfz4G;
    int j;
    int dhA2PblfYXmC;
    yxst6U = 0;
    memset (JAFPzClS, '#', sizeof (JAFPzClS));
    cin >> WZlxLipCVOde;
    for (Xx2g0Z7cfz4G = (542 - 541); WZlxLipCVOde >= Xx2g0Z7cfz4G; Xx2g0Z7cfz4G = Xx2g0Z7cfz4G +1)
        for (j = (114 - 113); WZlxLipCVOde >= j; j = j + 1)
            cin >> JAFPzClS[Xx2g0Z7cfz4G][j];
    cin >> cPlSHwsGe5;
    for (dhA2PblfYXmC = 1; cPlSHwsGe5 > dhA2PblfYXmC; dhA2PblfYXmC++) {
        memcpy (OXwKvFDMr9, JAFPzClS, sizeof (JAFPzClS));
        {
            Xx2g0Z7cfz4G = 1;
            while (WZlxLipCVOde >= Xx2g0Z7cfz4G) {
                for (j = 1; j <= WZlxLipCVOde; j++) {
                    if (!('@' != JAFPzClS[Xx2g0Z7cfz4G][j])) {
                        if (!('.' != JAFPzClS[Xx2g0Z7cfz4G -1][j]))
                            OXwKvFDMr9[Xx2g0Z7cfz4G -1][j] = '@';
                        if (JAFPzClS[Xx2g0Z7cfz4G +1][j] == '.')
                            OXwKvFDMr9[Xx2g0Z7cfz4G +1][j] = '@';
                        if (JAFPzClS[Xx2g0Z7cfz4G][j - 1] == '.')
                            OXwKvFDMr9[Xx2g0Z7cfz4G][j - 1] = '@';
                        if (JAFPzClS[Xx2g0Z7cfz4G][j + 1] == '.')
                            OXwKvFDMr9[Xx2g0Z7cfz4G][j + 1] = '@';
                    };
                }
                Xx2g0Z7cfz4G++;
            };
        }
        memcpy (JAFPzClS, OXwKvFDMr9, sizeof (OXwKvFDMr9));
    }
    for (Xx2g0Z7cfz4G = 1; Xx2g0Z7cfz4G <= WZlxLipCVOde; Xx2g0Z7cfz4G++)
        for (j = 1; j <= WZlxLipCVOde; j++)
            if (JAFPzClS[Xx2g0Z7cfz4G][j] == '@')
                yxst6U++;
    cout << yxst6U;
    return 0;
}

