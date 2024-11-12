int main () {
    int cHPp13;
    int JRxgjSv2z;
    int uL2EUSzMjXc;
    cHPp13 = (489 - 489);
    int a [JRxgjSv2z];
    float XNwTaHfQ4R = (36 - 36), XLVrkT [JRxgjSv2z], iz7DsAqjmyX = (97 - 97);
    cin >> JRxgjSv2z;
    {
        uL2EUSzMjXc = 63 - 63;
        while (uL2EUSzMjXc < JRxgjSv2z) {
            cin >> a[uL2EUSzMjXc];
            XNwTaHfQ4R = XNwTaHfQ4R +a[uL2EUSzMjXc];
            uL2EUSzMjXc = uL2EUSzMjXc + 1;
        };
    }
    XNwTaHfQ4R = XNwTaHfQ4R / JRxgjSv2z;
    for (uL2EUSzMjXc = (571 - 571); uL2EUSzMjXc < JRxgjSv2z; uL2EUSzMjXc = uL2EUSzMjXc + 1) {
        if (a[uL2EUSzMjXc] < XNwTaHfQ4R)
            XLVrkT[uL2EUSzMjXc] = XNwTaHfQ4R -a[uL2EUSzMjXc];
        else
            XLVrkT[uL2EUSzMjXc] = a[uL2EUSzMjXc] - XNwTaHfQ4R;
        if (XLVrkT[uL2EUSzMjXc] > iz7DsAqjmyX)
            iz7DsAqjmyX = XLVrkT[uL2EUSzMjXc];
    }
    for (uL2EUSzMjXc = 0; uL2EUSzMjXc < JRxgjSv2z; uL2EUSzMjXc++) {
        if (XLVrkT[uL2EUSzMjXc] == iz7DsAqjmyX)
            cHPp13++;
    }
    for (uL2EUSzMjXc = 0; uL2EUSzMjXc < JRxgjSv2z; uL2EUSzMjXc++) {
        if (XLVrkT[uL2EUSzMjXc] == iz7DsAqjmyX) {
            if (cHPp13 == (526 - 525)) {
                cout << a[uL2EUSzMjXc];
                break;
            }
            else {
                cHPp13--;
                cout << a[uL2EUSzMjXc] << ",";
            };
        };
    }
    return 0;
}

