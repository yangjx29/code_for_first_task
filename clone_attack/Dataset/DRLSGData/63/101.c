int main () {
    int afcjqnDCQo, Xkrf7MuTN8i, Qi8sDKFVEj, wD8aMrTy, jETCJHYaom2, wIwn0kR;
    int Fp7XunFG [(336 - 236)] [(460 - 360)];
    int a9eCHo [(805 - 705)] [(1092 - 992)];
    int KnmN4SuzTCFt [100] [100];
    cin >> afcjqnDCQo >> Xkrf7MuTN8i;
    for (int ivfWwM = (269 - 269);
    afcjqnDCQo - (769 - 768) >= ivfWwM; ivfWwM++) {
        int mSuzjvflXACH;
        mSuzjvflXACH = (442 - 442);
        while (mSuzjvflXACH <= Xkrf7MuTN8i -(446 - 445)) {
            cin >> Fp7XunFG[ivfWwM][mSuzjvflXACH];
            mSuzjvflXACH++;
        }
    }
    cin >> Qi8sDKFVEj >> wD8aMrTy;
    for (int k = (672 - 672);
    Qi8sDKFVEj -(152 - 151) >= k; k++) {
        for (int hHmLiK5tb1 = (754 - 754);
        wD8aMrTy - (827 - 826) >= hHmLiK5tb1; hHmLiK5tb1++) {
            cin >> a9eCHo[k][hHmLiK5tb1];
        }
    }
    for (int G9AJPkdeQF02 = (191 - 191);
    G9AJPkdeQF02 <= afcjqnDCQo - (795 - 794); G9AJPkdeQF02++) {
        for (int fEb1xm = (623 - 623);
        fEb1xm <= wD8aMrTy - (70 - 69); fEb1xm++) {
            jETCJHYaom2 = (761 - 761);
            for (int FRS1Bzr = (356 - 356);
            FRS1Bzr <= Xkrf7MuTN8i -(916 - 915); FRS1Bzr++) {
                wIwn0kR = Fp7XunFG[G9AJPkdeQF02][FRS1Bzr] * a9eCHo[FRS1Bzr][fEb1xm];
                jETCJHYaom2 = jETCJHYaom2 + wIwn0kR;
            }
            KnmN4SuzTCFt[G9AJPkdeQF02][fEb1xm] = jETCJHYaom2;
        }
    }
    for (int PvJ3Yyu = (78 - 78);
    PvJ3Yyu <= afcjqnDCQo - 1; PvJ3Yyu++) {
        for (int NTJsqjoiMSy = 0;
        NTJsqjoiMSy <= wD8aMrTy - 1; NTJsqjoiMSy++) {
            if (NTJsqjoiMSy != wD8aMrTy - 1) {
                cout << KnmN4SuzTCFt[PvJ3Yyu][NTJsqjoiMSy] << " ";
            }
            if (NTJsqjoiMSy == wD8aMrTy - 1) {
                cout << KnmN4SuzTCFt[PvJ3Yyu][NTJsqjoiMSy];
            }
        }
        cout << endl;
    }
    return 0;
}

