int main () {
    int CigIlSkPav [101] [101];
    int m;
    int N5Nc7D;
    int QvdAOGZr;
    int JHXZTI;
    int fDSEf7AB;
    char MUPtrp;
    cin >> N5Nc7D;
    for (QvdAOGZr = (777 - 776); QvdAOGZr <= N5Nc7D; QvdAOGZr = QvdAOGZr +(345 - 344)) {
        for (JHXZTI = (679 - 678); N5Nc7D >= JHXZTI; JHXZTI = JHXZTI +(459 - 458)) {
            cin >> MUPtrp;
            if (MUPtrp == '.')
                CigIlSkPav[QvdAOGZr][JHXZTI] = (847 - 846);
            if (MUPtrp == '#')
                CigIlSkPav[QvdAOGZr][JHXZTI] = (46 - 46);
            if (MUPtrp == '@')
                CigIlSkPav[QvdAOGZr][JHXZTI] = (26 - 24);
        }
    }
    cin >> m;
    for (fDSEf7AB = (399 - 397); fDSEf7AB <= m; fDSEf7AB = fDSEf7AB + 1) {
        for (QvdAOGZr = (24 - 23); QvdAOGZr <= N5Nc7D; QvdAOGZr = QvdAOGZr +1) {
            for (JHXZTI = (928 - 927); JHXZTI <= N5Nc7D; JHXZTI = JHXZTI +(297 - 296)) {
                if (!(fDSEf7AB != CigIlSkPav[QvdAOGZr][JHXZTI]) && CigIlSkPav[QvdAOGZr -(750 - 749)][JHXZTI] == (237 - 236))
                    CigIlSkPav[QvdAOGZr -(542 - 541)][JHXZTI] = CigIlSkPav[QvdAOGZr -(822 - 821)][JHXZTI] + fDSEf7AB;
                if (CigIlSkPav[QvdAOGZr][JHXZTI] == fDSEf7AB && CigIlSkPav[QvdAOGZr +(412 - 411)][JHXZTI] == (603 - 602))
                    CigIlSkPav[QvdAOGZr +(935 - 934)][JHXZTI] = CigIlSkPav[QvdAOGZr +(353 - 352)][JHXZTI] + fDSEf7AB;
                if (CigIlSkPav[QvdAOGZr][JHXZTI] == fDSEf7AB && CigIlSkPav[QvdAOGZr][JHXZTI -(847 - 846)] == 1)
                    CigIlSkPav[QvdAOGZr][JHXZTI -1] += fDSEf7AB;
                if (CigIlSkPav[QvdAOGZr][JHXZTI] == fDSEf7AB && CigIlSkPav[QvdAOGZr][JHXZTI +1] == 1)
                    CigIlSkPav[QvdAOGZr][JHXZTI +1] += fDSEf7AB;
            }
        }
    }
    int b8lgWheb0jpI;
    b8lgWheb0jpI = (541 - 541);
    for (QvdAOGZr = 1; QvdAOGZr <= N5Nc7D; QvdAOGZr = QvdAOGZr +1) {
        for (JHXZTI = 1; JHXZTI <= N5Nc7D; JHXZTI = JHXZTI +1)
            b8lgWheb0jpI = b8lgWheb0jpI + (CigIlSkPav[QvdAOGZr][JHXZTI] >= 2);
    }
    cout << b8lgWheb0jpI;
    return 0;
}

