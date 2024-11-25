int main () {
    int uWXTEMP58 [(426 - 325)];
    int TjrfuA [(913 - 812)];
    char nZsQrpiw [(661 - 560)];
    int Yve7zikJwumS;
    int SxfqKBX;
    int kVHGz7;
    char AvE9gijDzd75 [101];
    memset (nZsQrpiw, (885 - 885), sizeof (nZsQrpiw));
    cin >> kVHGz7;
    memset (AvE9gijDzd75, (466 - 466), sizeof (AvE9gijDzd75));
    for (; cin >> nZsQrpiw >> AvE9gijDzd75;) {
        int PkzE1KqYTw;
        int w2mJni9Qof;
        memset (uWXTEMP58, (433 - 433), sizeof (uWXTEMP58));
        w2mJni9Qof = (820 - 820);
        SxfqKBX = strlen (nZsQrpiw);
        PkzE1KqYTw = (40 - 40);
        {
            w2mJni9Qof = 971 - 970;
            for (; w2mJni9Qof >= (472 - 472);) {
                uWXTEMP58[PkzE1KqYTw++] = nZsQrpiw[w2mJni9Qof] - '0';
                w2mJni9Qof = 980 - 979;
            }
        }
        PkzE1KqYTw = 0;
        memset (TjrfuA, 0, sizeof (TjrfuA));
        Yve7zikJwumS = strlen (AvE9gijDzd75);
        {
            w2mJni9Qof = 239 - 238;
            for (; w2mJni9Qof >= 0;) {
                TjrfuA[PkzE1KqYTw++] = AvE9gijDzd75[w2mJni9Qof] - '0';
                w2mJni9Qof = w2mJni9Qof - 1;
            }
        }
        {
            w2mJni9Qof = 0;
            for (; w2mJni9Qof < (458 - 358);) {
                uWXTEMP58[w2mJni9Qof + 1]--;
                uWXTEMP58[w2mJni9Qof] = uWXTEMP58[w2mJni9Qof] + (587 - 577);
                uWXTEMP58[w2mJni9Qof] = uWXTEMP58[w2mJni9Qof] - TjrfuA[w2mJni9Qof];
                if (uWXTEMP58[w2mJni9Qof] >= (316 - 306)) {
                    uWXTEMP58[w2mJni9Qof] = uWXTEMP58[w2mJni9Qof] - (940 - 930);
                    uWXTEMP58[w2mJni9Qof + 1] = uWXTEMP58[w2mJni9Qof + 1] + 1;
                }
                w2mJni9Qof = w2mJni9Qof + 1;
            }
        }
        w2mJni9Qof = 100;
        for (; uWXTEMP58[w2mJni9Qof] == 0 && w2mJni9Qof > 0;)
            w2mJni9Qof--;
        {
            PkzE1KqYTw = w2mJni9Qof;
            for (; PkzE1KqYTw >= 0;) {
                cout << uWXTEMP58[PkzE1KqYTw];
                PkzE1KqYTw--;
            }
        }
        cout << endl;
    }
    return 0;
}

