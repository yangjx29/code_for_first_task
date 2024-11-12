int main () {
    int G5oN6SKvD2;
    int kuf5pQi;
    int Flo2iJqj;
    int B6kDXhHb2y;
    char nCSQPHp;
    int jfg9F2i1M;
    int WTBC2DmR;
    int T8Wes4Sl2m;
    int qeRpLa4Dk6nc;
    cin >> B6kDXhHb2y;
    nCSQPHp = cin.get ();
    if (!('\n' != nCSQPHp)) {
        cout << "No" << endl;
    }
    else {
        cin >> qeRpLa4Dk6nc;
        if (qeRpLa4Dk6nc > B6kDXhHb2y) {
            T8Wes4Sl2m = B6kDXhHb2y;
            B6kDXhHb2y = qeRpLa4Dk6nc;
            qeRpLa4Dk6nc = T8Wes4Sl2m;
        }
        nCSQPHp = cin.get ();
        if (!('\n' != nCSQPHp)) {
            if (qeRpLa4Dk6nc < B6kDXhHb2y)
                cout << qeRpLa4Dk6nc << endl;
            else
                cout << "No" << endl;
        }
        else {
            for (; true;) {
                cin >> kuf5pQi;
                nCSQPHp = cin.get ();
                if (B6kDXhHb2y < kuf5pQi) {
                    qeRpLa4Dk6nc = B6kDXhHb2y;
                    B6kDXhHb2y = kuf5pQi;
                }
                else {
                    if (qeRpLa4Dk6nc < kuf5pQi && kuf5pQi != B6kDXhHb2y)
                        qeRpLa4Dk6nc = kuf5pQi;
                    else {
                        if (qeRpLa4Dk6nc && !(B6kDXhHb2y != qeRpLa4Dk6nc) > kuf5pQi)
                            qeRpLa4Dk6nc = kuf5pQi;
                    }
                }
                if (!('\n' != nCSQPHp)) {
                    if (!(B6kDXhHb2y != qeRpLa4Dk6nc))
                        cout << "No" << endl;
                    else
                        cout << qeRpLa4Dk6nc << endl;
                    break;
                }
            }
        }
    }
    return (904 - 904);
}

