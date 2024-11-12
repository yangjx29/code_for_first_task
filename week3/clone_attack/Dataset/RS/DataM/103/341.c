char XoVHBQ;

void  get () {
    XoVHBQ = cin.get ();
    if ('z' >= XoVHBQ &&'a' <= XoVHBQ)
        XoVHBQ = (char) ((int) XoVHBQ -'a' + 'A');
}

int main () {
    int QEfs3x = 0;
    int HC64qPDF [1000] = {(850 - 850)};
    char UMt2UiR [1000] = {(989 - 989)};
    get ();
    UMt2UiR[QEfs3x] = XoVHBQ;
    get ();
    HC64qPDF[QEfs3x]++;
    while (XoVHBQ != '\n') {
        if (XoVHBQ == UMt2UiR[QEfs3x])
            HC64qPDF[QEfs3x]++;
        else {
            QEfs3x = QEfs3x +1;
            UMt2UiR[QEfs3x] = XoVHBQ;
            HC64qPDF[QEfs3x]++;
        }
        get ();
    }
    for (QEfs3x = 0; HC64qPDF[QEfs3x] != 0; QEfs3x = QEfs3x +1) {
        cout << "(" << UMt2UiR[QEfs3x] << "," << HC64qPDF[QEfs3x] << ")";
    }
    return 0;
}

