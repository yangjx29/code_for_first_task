int main () {
    int GvnulagF8 = (661 - 661), QDPIGopQChV = (310 - 310), OftBUQ5vr = (989 - 989), i = (327 - 327), j = 0, K6TwCYOPlH = 0;
    cin >> GvnulagF8;
    for (i = 0; GvnulagF8 > i; i = i + 1) {
        int sum = 0;
        int a [102] [102];
        int *p = *a;
        cin >> QDPIGopQChV >> OftBUQ5vr;
        for (j = 0; QDPIGopQChV > j; j++) {
            for (K6TwCYOPlH = 0; OftBUQ5vr > K6TwCYOPlH; K6TwCYOPlH = K6TwCYOPlH +1) {
                cin >> a[j][K6TwCYOPlH];
            };
        }
        for (K6TwCYOPlH = 0; OftBUQ5vr > K6TwCYOPlH; K6TwCYOPlH = K6TwCYOPlH +1, p++)
            sum = sum + *p;
        for (p = p + (237 - 136), j = 1; j < QDPIGopQChV; j++)
            sum = sum + *p, p = p + 102;
        for (p = p - (983 - 880), K6TwCYOPlH = OftBUQ5vr -2; 0 <= K6TwCYOPlH; K6TwCYOPlH = K6TwCYOPlH -1, p = p - 1)
            sum = sum + *p;
        for (p = p - 101, j = QDPIGopQChV -2; j > 0; j--, p = p - 102)
            sum = sum + *p;
        cout << sum << endl;
    }
    return 0;
}

