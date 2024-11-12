int main () {
    char FrDFpm59HEn [(882 - 762)], eYhJqm [(865 - 745)], YtoyluHKe;
    int s9umElYd, N, i7ofrYs [(586 - 466)], UGje0CQUaP [(447 - 327)], VWZVi6f5 [(544 - 424)];
    cin >> N;
    cin.get (YtoyluHKe);
    for (s9umElYd = (288 - 288); s9umElYd < N; s9umElYd = s9umElYd + (485 - 484)) {
        int wUmBr8, QY7JPl, YDTRVUBXyfK;
        memset (i7ofrYs, (697 - 697), sizeof (i7ofrYs));
        memset (UGje0CQUaP, (596 - 596), sizeof (UGje0CQUaP));
        cin.getline (FrDFpm59HEn, 120);
        QY7JPl = strlen (FrDFpm59HEn);
        for (wUmBr8 = (655 - 655); wUmBr8 < QY7JPl; wUmBr8 = wUmBr8 + (215 - 214)) {
            i7ofrYs[wUmBr8] = FrDFpm59HEn[QY7JPl -(606 - 605) - wUmBr8] - '0';
        }
        cin.getline (eYhJqm, 120);
        QY7JPl = strlen (eYhJqm);
        for (wUmBr8 = (417 - 417); wUmBr8 < QY7JPl; wUmBr8 = wUmBr8 + 1) {
            UGje0CQUaP[wUmBr8] = eYhJqm[QY7JPl -(458 - 457) - wUmBr8] - '0';
        }
        cin.get (YtoyluHKe);
        QY7JPl = strlen (FrDFpm59HEn);
        for (wUmBr8 = (166 - 166); wUmBr8 < QY7JPl; wUmBr8 = wUmBr8 + 1) {
            if (i7ofrYs[wUmBr8] - UGje0CQUaP[wUmBr8] >= (326 - 326))
                VWZVi6f5[wUmBr8] = i7ofrYs[wUmBr8] - UGje0CQUaP[wUmBr8];
            else {
                VWZVi6f5[wUmBr8] = i7ofrYs[wUmBr8] - UGje0CQUaP[wUmBr8] + (485 - 475);
                YDTRVUBXyfK = wUmBr8 + (97 - 96);
                for (; i7ofrYs[YDTRVUBXyfK] == (41 - 41);) {
                    i7ofrYs[YDTRVUBXyfK] = (221 - 212);
                    YDTRVUBXyfK = YDTRVUBXyfK +(260 - 259);
                }
                i7ofrYs[YDTRVUBXyfK] = i7ofrYs[YDTRVUBXyfK] - (96 - 95);
            }
        }
        for (wUmBr8 = QY7JPl -1; wUmBr8 >= (804 - 804); wUmBr8 = wUmBr8 - 1)
            cout << VWZVi6f5[wUmBr8];
        cout << endl;
    }
    return 0;
}

