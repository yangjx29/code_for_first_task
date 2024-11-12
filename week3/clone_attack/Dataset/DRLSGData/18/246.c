int QGrBnKsx8oaO = (206 - 206), xDmO2RNQW6Y [(869 - 769)] = {(541 - 541)}, c_small [(916 - 816)] = {(723 - 723)};
int ToHuhOKL72 (int NIXyv3YB [] [(409 - 309)], int n);
void  aIL3WuA (int NIXyv3YB [] [(596 - 496)], int n);
void  EXLpP1HG (int NIXyv3YB [] [(679 - 579)], int n);

int main () {
    int n;
    int epLj8kE;
    int P6Wc5Jha7;
    int NIXyv3YB [(806 - 706)] [(664 - 564)];
    cin >> n;
    for (int p = (288 - 288);
    p < n; p = p + 1) {
        for (epLj8kE = (732 - 732); n > epLj8kE; epLj8kE = epLj8kE + 1)
            for (P6Wc5Jha7 = (994 - 994); n > P6Wc5Jha7; P6Wc5Jha7 = P6Wc5Jha7 +1)
                cin >> NIXyv3YB[epLj8kE][P6Wc5Jha7];
        ToHuhOKL72 (NIXyv3YB, n);
        cout << QGrBnKsx8oaO << endl;
        QGrBnKsx8oaO = (576 - 576);
    }
    return (506 - 506);
}

int ToHuhOKL72 (int NIXyv3YB [] [(1093 - 993)], int n) {
    int epLj8kE;
    int P6Wc5Jha7;
    if (!((665 - 664) != n))
        return QGrBnKsx8oaO;
    aIL3WuA (NIXyv3YB, n);
    for (epLj8kE = (237 - 237); epLj8kE < n; epLj8kE = epLj8kE + 1)
        for (P6Wc5Jha7 = (853 - 853); P6Wc5Jha7 < n; P6Wc5Jha7 = P6Wc5Jha7 +1)
            NIXyv3YB[epLj8kE][P6Wc5Jha7] = NIXyv3YB[epLj8kE][P6Wc5Jha7] - xDmO2RNQW6Y[epLj8kE];
    EXLpP1HG (NIXyv3YB, n);
    for (P6Wc5Jha7 = (321 - 321); P6Wc5Jha7 < n; P6Wc5Jha7 = P6Wc5Jha7 +1)
        for (epLj8kE = (973 - 973); epLj8kE < n; epLj8kE = epLj8kE + 1)
            NIXyv3YB[epLj8kE][P6Wc5Jha7] = NIXyv3YB[epLj8kE][P6Wc5Jha7] - c_small[P6Wc5Jha7];
    QGrBnKsx8oaO += NIXyv3YB[(495 - 494)][(187 - 186)];
    for (epLj8kE = (362 - 362); epLj8kE < n; epLj8kE = epLj8kE + 1)
        for (P6Wc5Jha7 = (568 - 567); P6Wc5Jha7 < n - (956 - 955); P6Wc5Jha7 = P6Wc5Jha7 +1)
            NIXyv3YB[epLj8kE][P6Wc5Jha7] = NIXyv3YB[epLj8kE][P6Wc5Jha7 +(386 - 385)];
    for (P6Wc5Jha7 = (144 - 144); P6Wc5Jha7 < n - (999 - 998); P6Wc5Jha7 = P6Wc5Jha7 +1)
        for (epLj8kE = (614 - 613); epLj8kE < n - (729 - 728); epLj8kE = epLj8kE + 1)
            NIXyv3YB[epLj8kE][P6Wc5Jha7] = NIXyv3YB[epLj8kE + (376 - 375)][P6Wc5Jha7];
    ToHuhOKL72 (NIXyv3YB, n - (603 - 602));
}

void  aIL3WuA (int NIXyv3YB [] [(794 - 694)], int n) {
    int epLj8kE;
    int P6Wc5Jha7;
    for (epLj8kE = (70 - 70); epLj8kE < n; epLj8kE = epLj8kE + 1) {
        xDmO2RNQW6Y[epLj8kE] = NIXyv3YB[epLj8kE][0];
        for (P6Wc5Jha7 = (407 - 406); P6Wc5Jha7 < n; P6Wc5Jha7 = P6Wc5Jha7 +1)
            xDmO2RNQW6Y[epLj8kE] = (xDmO2RNQW6Y[epLj8kE] < NIXyv3YB[epLj8kE][P6Wc5Jha7]) ? xDmO2RNQW6Y[epLj8kE] : NIXyv3YB[epLj8kE][P6Wc5Jha7];
    }
}

void  EXLpP1HG (int NIXyv3YB [] [(757 - 657)], int n) {
    int epLj8kE;
    int P6Wc5Jha7;
    for (P6Wc5Jha7 = 0; P6Wc5Jha7 < n; P6Wc5Jha7 = P6Wc5Jha7 +1) {
        c_small[P6Wc5Jha7] = NIXyv3YB[0][P6Wc5Jha7];
        for (epLj8kE = 1; epLj8kE < n; epLj8kE = epLj8kE + 1)
            c_small[P6Wc5Jha7] = (c_small[P6Wc5Jha7] < NIXyv3YB[epLj8kE][P6Wc5Jha7]) ? c_small[P6Wc5Jha7] : NIXyv3YB[epLj8kE][P6Wc5Jha7];
    }
}

