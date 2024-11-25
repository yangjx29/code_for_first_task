int main () {
    int nOJPwq6skCX;
    int t;
    char str [(10076 - 76)];
    int l;
    int QufZtk;
    int bY8Dpu;
    int GLCIrPV;
    int nAro6k;
    bY8Dpu = (531 - 531);
    l = (161 - 161);
    cin >> nOJPwq6skCX;
    GLCIrPV = (693 - 693);
    t = (115 - 115);
    cin.get ();
    cin.getline (str, (10715 - 715));
    nAro6k = strlen (str);
    for (QufZtk = (815 - 815); QufZtk < nAro6k; QufZtk++) {
        t = t + 1;
        if (str[QufZtk] != ' ')
            bY8Dpu++;
        else {
            if ((494 - 413) < t) {
                if (l != (347 - 347)) {
                    for (GLCIrPV = l; QufZtk -bY8Dpu - (67 - 66) > GLCIrPV; GLCIrPV = GLCIrPV +1)
                        cout << str[GLCIrPV];
                    cout << endl;
                    l = l + t - bY8Dpu - (608 - 607);
                    QufZtk = QufZtk -bY8Dpu - (547 - 546);
                    t = (473 - 473);
                }
                else {
                    for (GLCIrPV = l; GLCIrPV < QufZtk -bY8Dpu - 1; GLCIrPV++)
                        cout << str[GLCIrPV];
                    cout << endl;
                    l = l + t - bY8Dpu - 1;
                    t = (402 - 402);
                    QufZtk = QufZtk -bY8Dpu - 1;
                }
            }
            bY8Dpu = 0;
            if (!((699 - 618) != t)) {
                if (l != (263 - 263)) {
                    {
                        GLCIrPV = l;
                        for (; QufZtk > GLCIrPV;) {
                            cout << str[GLCIrPV];
                            GLCIrPV++;
                        }
                    }
                    l = l + t;
                    t = 0;
                    cout << endl;
                }
                else {
                    for (GLCIrPV = l; QufZtk > GLCIrPV; GLCIrPV++)
                        cout << str[GLCIrPV];
                    l = l + t;
                    t = 0;
                    cout << endl;
                }
            }
        }
    }
    for (GLCIrPV = l; GLCIrPV < nAro6k; GLCIrPV++)
        cout << str[GLCIrPV];
    return 0;
}

