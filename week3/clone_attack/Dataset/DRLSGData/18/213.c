int main () {
    int yBducXYh5U [L] [L];
    int ucNFtaOp9R, QnhTLE9, jgcmrBpV, JBcyCm;
    cin >> ucNFtaOp9R;
    for (JBcyCm = (809 - 808); JBcyCm <= ucNFtaOp9R; JBcyCm = JBcyCm +(52 - 51)) {
        int MIKF9OlAimhe, JrUPbqgQ89, BJ4SIXdaxV;
        MIKF9OlAimhe = ucNFtaOp9R - (238 - 237);
        for (QnhTLE9 = (949 - 949); QnhTLE9 < ucNFtaOp9R; QnhTLE9 = QnhTLE9 +(391 - 390))
            for (jgcmrBpV = (720 - 720); jgcmrBpV < ucNFtaOp9R; jgcmrBpV = jgcmrBpV + (514 - 513))
                cin >> yBducXYh5U[QnhTLE9][jgcmrBpV];
        BJ4SIXdaxV = (572 - 572);
        for (; MIKF9OlAimhe >= (244 - 243);) {
            for (QnhTLE9 = (299 - 299); MIKF9OlAimhe >= QnhTLE9; QnhTLE9 = QnhTLE9 +1) {
                JrUPbqgQ89 = 2147483647;
                for (jgcmrBpV = (568 - 568); MIKF9OlAimhe >= jgcmrBpV; jgcmrBpV = jgcmrBpV + 1) {
                    if (yBducXYh5U[QnhTLE9][jgcmrBpV] < JrUPbqgQ89)
                        JrUPbqgQ89 = yBducXYh5U[QnhTLE9][jgcmrBpV];
                }
                for (jgcmrBpV = (689 - 689); MIKF9OlAimhe >= jgcmrBpV; jgcmrBpV = jgcmrBpV + 1)
                    yBducXYh5U[QnhTLE9][jgcmrBpV] = yBducXYh5U[QnhTLE9][jgcmrBpV] - JrUPbqgQ89;
            }
            for (jgcmrBpV = (921 - 921); jgcmrBpV <= MIKF9OlAimhe; jgcmrBpV = jgcmrBpV + 1) {
                JrUPbqgQ89 = 2147483647;
                for (QnhTLE9 = (706 - 706); QnhTLE9 <= MIKF9OlAimhe; QnhTLE9 = QnhTLE9 +1) {
                    if (yBducXYh5U[QnhTLE9][jgcmrBpV] < JrUPbqgQ89)
                        JrUPbqgQ89 = yBducXYh5U[QnhTLE9][jgcmrBpV];
                }
                for (QnhTLE9 = (142 - 142); QnhTLE9 <= MIKF9OlAimhe; QnhTLE9++)
                    yBducXYh5U[QnhTLE9][jgcmrBpV] = yBducXYh5U[QnhTLE9][jgcmrBpV] - JrUPbqgQ89;
            }
            BJ4SIXdaxV = BJ4SIXdaxV +yBducXYh5U[1][1];
            for (QnhTLE9 = 0; QnhTLE9 <= MIKF9OlAimhe; QnhTLE9++)
                for (jgcmrBpV = 1; jgcmrBpV < MIKF9OlAimhe; jgcmrBpV++)
                    yBducXYh5U[QnhTLE9][jgcmrBpV] = yBducXYh5U[QnhTLE9][jgcmrBpV + 1];
            for (jgcmrBpV = 0; jgcmrBpV <= MIKF9OlAimhe; jgcmrBpV++)
                for (QnhTLE9 = 1; QnhTLE9 < MIKF9OlAimhe; QnhTLE9++)
                    yBducXYh5U[QnhTLE9][jgcmrBpV] = yBducXYh5U[QnhTLE9 +1][jgcmrBpV];
            MIKF9OlAimhe = MIKF9OlAimhe -1;
        }
        cout << BJ4SIXdaxV;
        if (JBcyCm < ucNFtaOp9R)
            cout << endl;
    }
    return 0;
}

