int main () {
    int QlhPL2GKy [(423 - 323)] [(429 - 329)];
    int Y1qF5yZ [(172 - 72)], zjhT5Q, ZSd1qAtX5jsU, pwsS4B2FJQ, USRgZ0, DZMlOn, F4GDtV, zPmjct;
    cin >> zjhT5Q;
    for (ZSd1qAtX5jsU = (835 - 835); zjhT5Q > ZSd1qAtX5jsU; ZSd1qAtX5jsU++)
        Y1qF5yZ[ZSd1qAtX5jsU] = (628 - 628);
    for (ZSd1qAtX5jsU = (955 - 955); zjhT5Q > ZSd1qAtX5jsU; ZSd1qAtX5jsU++) {
        for (pwsS4B2FJQ = (542 - 542); zjhT5Q > pwsS4B2FJQ; pwsS4B2FJQ++)
            for (USRgZ0 = (407 - 407); zjhT5Q > USRgZ0; USRgZ0++)
                cin >> QlhPL2GKy[pwsS4B2FJQ][USRgZ0];
        for (pwsS4B2FJQ = (595 - 595); zjhT5Q - (372 - 371) > pwsS4B2FJQ; pwsS4B2FJQ++) {
            for (USRgZ0 = (535 - 535); USRgZ0 < zjhT5Q - pwsS4B2FJQ; USRgZ0++) {
                F4GDtV = QlhPL2GKy[USRgZ0][(743 - 743)];
                for (DZMlOn = (46 - 46); DZMlOn < zjhT5Q - pwsS4B2FJQ; DZMlOn++)
                    if (QlhPL2GKy[USRgZ0][DZMlOn] < F4GDtV)
                        F4GDtV = QlhPL2GKy[USRgZ0][DZMlOn];
                for (DZMlOn = 0; zjhT5Q - pwsS4B2FJQ > DZMlOn; DZMlOn++)
                    QlhPL2GKy[USRgZ0][DZMlOn] = QlhPL2GKy[USRgZ0][DZMlOn] - F4GDtV;
            }
            for (USRgZ0 = 0; zjhT5Q - pwsS4B2FJQ > USRgZ0; USRgZ0++) {
                F4GDtV = QlhPL2GKy[0][USRgZ0];
                for (DZMlOn = 0; zjhT5Q - pwsS4B2FJQ > DZMlOn; DZMlOn++)
                    if (F4GDtV > QlhPL2GKy[DZMlOn][USRgZ0])
                        F4GDtV = QlhPL2GKy[DZMlOn][USRgZ0];
                for (DZMlOn = 0; zjhT5Q - pwsS4B2FJQ > DZMlOn; DZMlOn++)
                    QlhPL2GKy[DZMlOn][USRgZ0] = QlhPL2GKy[DZMlOn][USRgZ0] - F4GDtV;
            }
            Y1qF5yZ[ZSd1qAtX5jsU] = Y1qF5yZ[ZSd1qAtX5jsU] + QlhPL2GKy[(705 - 704)][(912 - 911)];
            for (USRgZ0 = 0; zjhT5Q - pwsS4B2FJQ > USRgZ0; USRgZ0++)
                for (DZMlOn = 1; zjhT5Q - pwsS4B2FJQ - 1 > DZMlOn; DZMlOn++)
                    QlhPL2GKy[USRgZ0][DZMlOn] = QlhPL2GKy[USRgZ0][DZMlOn +1];
            for (USRgZ0 = 0; zjhT5Q - pwsS4B2FJQ - 1 > USRgZ0; USRgZ0++)
                for (DZMlOn = 1; zjhT5Q - pwsS4B2FJQ - 1 > DZMlOn; DZMlOn++)
                    QlhPL2GKy[DZMlOn][USRgZ0] = QlhPL2GKy[DZMlOn +1][USRgZ0];
        }
    }
    for (ZSd1qAtX5jsU = 0; ZSd1qAtX5jsU < zjhT5Q; ZSd1qAtX5jsU++)
        cout << Y1qF5yZ[ZSd1qAtX5jsU] << endl;
    return 0;
}

