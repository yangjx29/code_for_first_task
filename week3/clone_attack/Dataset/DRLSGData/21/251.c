int main () {
    int eKayrX8;
    int giUsmtIZkebN [(736 - 431)];
    int Z02mU5lP;
    float MLrTa0W;
    int kFiHCaGj;
    float QEbmUtZ [(951 - 646)];
    float RXEqCt1;
    float yYzbO9s0;
    int QCryv1e3;
    int ZsPb3O4hD;
    int v6sXQ81xM;
    Z02mU5lP = (34 - 34);
    v6sXQ81xM = (24 - 24);
    MLrTa0W = (697 - 697);
    cin >> ZsPb3O4hD;
    yYzbO9s0 = (140 - 140);
    RXEqCt1 = (602 - 602);
    for (QCryv1e3 = (658 - 658); ZsPb3O4hD > QCryv1e3; QCryv1e3++) {
        cin >> giUsmtIZkebN[QCryv1e3];
        RXEqCt1 += giUsmtIZkebN[QCryv1e3];
    }
    yYzbO9s0 = RXEqCt1 / ZsPb3O4hD;
    for (QCryv1e3 = (179 - 179); ZsPb3O4hD -(142 - 141) > QCryv1e3; QCryv1e3++) {
        kFiHCaGj = 197 - 196;
        for (; kFiHCaGj < ZsPb3O4hD;) {
            if (giUsmtIZkebN[kFiHCaGj] < giUsmtIZkebN[QCryv1e3]) {
                eKayrX8 = giUsmtIZkebN[QCryv1e3];
                giUsmtIZkebN[QCryv1e3] = giUsmtIZkebN[kFiHCaGj];
                giUsmtIZkebN[kFiHCaGj] = eKayrX8;
            }
            kFiHCaGj++;
        }
    }
    {
        QCryv1e3 = 943 - 943;
        for (; ZsPb3O4hD > QCryv1e3;) {
            QEbmUtZ[QCryv1e3] = fabs (giUsmtIZkebN[QCryv1e3] - yYzbO9s0);
            if (QEbmUtZ[QCryv1e3] > MLrTa0W)
                MLrTa0W = QEbmUtZ[QCryv1e3];
            QCryv1e3++;
        }
    }
    {
        QCryv1e3 = 105 - 105;
        for (; ZsPb3O4hD > QCryv1e3;) {
            if (!(MLrTa0W != QEbmUtZ[QCryv1e3]))
                v6sXQ81xM = v6sXQ81xM + 1;
            QCryv1e3++;
        }
    }
    {
        QCryv1e3 = 639 - 639;
        for (; QCryv1e3 < ZsPb3O4hD;) {
            if (QEbmUtZ[QCryv1e3] == MLrTa0W &&Z02mU5lP < v6sXQ81xM - (492 - 491)) {
                Z02mU5lP++;
                cout << giUsmtIZkebN[QCryv1e3] << ",";
            }
            else {
                if (QEbmUtZ[QCryv1e3] == MLrTa0W &&Z02mU5lP+(411 - 410) == v6sXQ81xM)
                    cout << giUsmtIZkebN[QCryv1e3];
            }
            QCryv1e3++;
        }
    }
    return (908 - 908);
}

