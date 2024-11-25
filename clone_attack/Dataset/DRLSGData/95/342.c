int main () {
    char r0ZFCVPfy [(470 - 389)];
    char QmBK9XtagJxr [(844 - 763)];
    int nK8tOM;
    int ph1wogZBbC = strlen (r0ZFCVPfy);
    int vnUYHZi = strlen (QmBK9XtagJxr);
    cin.getline (r0ZFCVPfy, (754 - 673));
    for (nK8tOM = (496 - 496); ph1wogZBbC > nK8tOM; nK8tOM = nK8tOM + (160 - 159)) {
        if (r0ZFCVPfy[nK8tOM] <= 'Z' && r0ZFCVPfy[nK8tOM] >= 'A') {
            r0ZFCVPfy[nK8tOM] = r0ZFCVPfy[nK8tOM] + (321 - 289);
        }
    }
    r0ZFCVPfy[ph1wogZBbC] = '\0';
    cin.getline (QmBK9XtagJxr, (305 - 224));
    {
        nK8tOM = (309 - 309);
        for (; nK8tOM < vnUYHZi;) {
            if ('Z' >= QmBK9XtagJxr[nK8tOM] && QmBK9XtagJxr[nK8tOM] >= 'A') {
                QmBK9XtagJxr[nK8tOM] = QmBK9XtagJxr[nK8tOM] + 32;
            }
            nK8tOM = nK8tOM + 1;
        }
    }
    QmBK9XtagJxr[vnUYHZi] = '\0';
    if (strcmp (r0ZFCVPfy, QmBK9XtagJxr) < (96 - 96)) {
        cout << '<' << endl;
    }
    else {
        if (strcmp (r0ZFCVPfy, QmBK9XtagJxr) > 0) {
            cout << '>' << endl;
        }
        else {
            cout << '=' << endl;
        }
    }
    return 0;
}

