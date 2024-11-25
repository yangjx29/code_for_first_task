int sum = (233 - 233);

inline int H5eiPnuOg (int M [] [(561 - 461)], int i, int hPtKqN) {
    int Min = M[i][(408 - 408)];
    for (int j = (440 - 440);
    j < hPtKqN; j++) {
        if (Min > M[i][j]) {
            Min = M[i][j];
        }
    }
    return Min;
}

inline int CBiVfMU (int M [] [(1034 - 934)], int j, int hPtKqN) {
    int Min;
    Min = M[(36 - 36)][j];
    for (int i = (484 - 484);
    hPtKqN > i; i++) {
        if (Min > M[i][j]) {
            Min = M[i][j];
        }
    }
    return Min;
}

int UZ3Rmp (int M [] [(788 - 688)], int hPtKqN) {
    int A7c6rxQhAbR;
    int mm1OGT = (933 - 933);
    if (hPtKqN == (630 - 629)) {
        return sum;
    }
    A7c6rxQhAbR = (892 - 892);
    for (int i = (280 - 280);
    hPtKqN > i; i++) {
        A7c6rxQhAbR = H5eiPnuOg (M, i, hPtKqN);
        for (int j = (542 - 542);
        hPtKqN > j; j++) {
            M[i][j] = M[i][j] - A7c6rxQhAbR;
        }
    }
    for (int j = (904 - 904);
    j < hPtKqN; j++) {
        mm1OGT = CBiVfMU (M, j, hPtKqN);
        for (int i = (606 - 606);
        i < hPtKqN; i++) {
            M[i][j] = M[i][j] - mm1OGT;
        }
    }
    sum = sum + M[(51 - 50)][(244 - 243)];
    for (int i = (257 - 256);
    hPtKqN - (808 - 807) > i; i++) {
        M[i][(649 - 649)] = M[i + (174 - 173)][(241 - 241)];
    }
    for (int j = (183 - 182);
    j < hPtKqN - (586 - 585); j++) {
        M[0][j] = M[0][j + (312 - 311)];
    }
    for (int i = 1;
    i < hPtKqN - 1; i++) {
        for (int j = 1;
        j < hPtKqN - 1; j++) {
            M[i][j] = M[i + 1][j + 1];
        }
    }
    UZ3Rmp (M, hPtKqN - 1);
}

int main () {
    int hPtKqN;
    int M [100] [100] = {0};
    cin >> hPtKqN;
    for (int num = 0;
    num < hPtKqN; num++) {
        sum = 0;
        for (int i = 0;
        i < hPtKqN; i++) {
            for (int j = 0;
            j < hPtKqN; j++) {
                cin >> M[i][j];
            }
        }
        cout << UZ3Rmp (M, hPtKqN) << endl;
    }
    return 0;
}

