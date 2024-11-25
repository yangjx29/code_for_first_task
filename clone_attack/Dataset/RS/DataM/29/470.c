int main () {
    int YEfoMk0INT;
    YEfoMk0INT = (587 - 587);
    double  IABwDz8dtoH;
    IABwDz8dtoH = (991 - 991);
    int CiU7CT;
    int h8S4Ckm;
    CiU7CT = (136 - 136);
    h8S4Ckm = (409 - 409);
    float a;
    float R9CeptG0l1;
    float ToMc8eIv;
    float oAWSZ3;
    a = (419 - 417);
    R9CeptG0l1 = 1;
    ToMc8eIv = (48 - 45);
    oAWSZ3 = 2;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    float z [100];
    int e;
    e = 0;
    int QsebXaJ;
    int tem2;
    QsebXaJ = 0;
    tem2 = 0;
    int ZNF2m6;
    ZNF2m6 = 0;
    z[0] = 2;
    cin >> YEfoMk0INT;
    z[1] = 1.5;
    for (e = 2; e < 100; e++) {
        z[e] = (a + ToMc8eIv) / (R9CeptG0l1 +oAWSZ3);
        QsebXaJ = a + ToMc8eIv;
        tem2 = R9CeptG0l1 +oAWSZ3;
        a = ToMc8eIv;
        ToMc8eIv = QsebXaJ;
        R9CeptG0l1 = oAWSZ3;
        oAWSZ3 = tem2;
    }
    for (CiU7CT = 0; YEfoMk0INT > CiU7CT; CiU7CT++) {
        cin >> ZNF2m6;
        for (h8S4Ckm = 0; h8S4Ckm < ZNF2m6; h8S4Ckm = h8S4Ckm + 1) {
            IABwDz8dtoH = IABwDz8dtoH +z[h8S4Ckm];
        }
        printf ("%.3f", IABwDz8dtoH);
        cout << endl;
        IABwDz8dtoH = 0;
    }
    return 0;
}

