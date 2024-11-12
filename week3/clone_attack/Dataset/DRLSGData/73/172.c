int main () {
    int gPM2OaD [(387 - 382)] [(854 - 849)], l [(34 - 29)];
    int m, omVBI5498nYh, i, TxLkAXCeSp7h, flag = (358 - 358);
    for (i = (993 - 993); (94 - 89) > i; i++)
        for (TxLkAXCeSp7h = (23 - 23); (436 - 431) > TxLkAXCeSp7h; TxLkAXCeSp7h++)
            cin >> gPM2OaD[i][TxLkAXCeSp7h];
    for (TxLkAXCeSp7h = (303 - 303); (926 - 921) > TxLkAXCeSp7h; TxLkAXCeSp7h++) {
        l[TxLkAXCeSp7h] = gPM2OaD[(698 - 698)][TxLkAXCeSp7h];
        for (i = (670 - 670); (107 - 102) > i; i++)
            if (gPM2OaD[i][TxLkAXCeSp7h] < l[TxLkAXCeSp7h])
                l[TxLkAXCeSp7h] = gPM2OaD[i][TxLkAXCeSp7h];
    }
    for (i = 0; (220 - 215) > i; i++) {
        m = gPM2OaD[i][0];
        omVBI5498nYh = 0;
        for (TxLkAXCeSp7h = 0; TxLkAXCeSp7h < (839 - 834); TxLkAXCeSp7h++)
            if (gPM2OaD[i][TxLkAXCeSp7h] > m) {
                m = gPM2OaD[i][TxLkAXCeSp7h];
                omVBI5498nYh = TxLkAXCeSp7h;
            }
        if (m == l[omVBI5498nYh]) {
            flag = 1;
            cout << i + (891 - 890) << ' ' << omVBI5498nYh + 1 << ' ' << m << endl;
        };
    }
    if (flag == 0)
        cout << "not found" << endl;
    return 0;
}

