int main () {
    int QBvg3mJfK [(540 - 340)];
    int nYtIND;
    int m;
    char mgiknKUQOA0 [(1155 - 955)] [(374 - 274)];
    int ms5HDxakor42;
    int Zti8Gv;
    for (nYtIND = (619 - 619); (531 - 332) >= nYtIND; ++nYtIND) {
        for (Zti8Gv = (43 - 43); (330 - 231) >= Zti8Gv; ++Zti8Gv) {
            scanf ("%c", &mgiknKUQOA0[nYtIND][Zti8Gv]);
            if (!(' ' != mgiknKUQOA0[nYtIND][Zti8Gv])) {
                mgiknKUQOA0[nYtIND][Zti8Gv] = '\0';
                break;
            }
            if (!('\n' != mgiknKUQOA0[nYtIND][Zti8Gv]))
                break;
        }
        QBvg3mJfK[nYtIND] = Zti8Gv;
        if (!('\n' != mgiknKUQOA0[nYtIND][Zti8Gv])) {
            mgiknKUQOA0[nYtIND][Zti8Gv] = '\0';
            break;
        }
    }
    m = (683 - 683);
    for (ms5HDxakor42 = (847 - 847); nYtIND >= ms5HDxakor42; ms5HDxakor42 = ms5HDxakor42 + (708 - 707)) {
        if (m < QBvg3mJfK[ms5HDxakor42])
            m = QBvg3mJfK[ms5HDxakor42];
    }
    for (ms5HDxakor42 = (175 - 175); ms5HDxakor42 <= nYtIND; ++ms5HDxakor42) {
        if (!(QBvg3mJfK[ms5HDxakor42] != m))
            break;
    }
    printf ("%s\n", mgiknKUQOA0[ms5HDxakor42]);
    m = (10265 - 266);
    for (ms5HDxakor42 = (720 - 720); ms5HDxakor42 <= nYtIND; ++ms5HDxakor42) {
        if (m > QBvg3mJfK[ms5HDxakor42])
            m = QBvg3mJfK[ms5HDxakor42];
    }
    for (ms5HDxakor42 = (497 - 497); ms5HDxakor42 <= nYtIND; ++ms5HDxakor42) {
        if (m == QBvg3mJfK[ms5HDxakor42])
            break;
    }
    printf ("%s\n", mgiknKUQOA0[ms5HDxakor42]);
    return (804 - 804);
}

