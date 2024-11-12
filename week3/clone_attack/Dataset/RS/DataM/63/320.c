int main () {
    int doP8eFyAnW3 [(698 - 598)] [100], QIzak8NOmF [100] [100], fL2HdW4 [100] [100];
    int GUBqEF, q5dbmwF, x2, y2, AqdAEriRBp2o, aNubUYV, lnI18BV93os;
    cin >> GUBqEF >> q5dbmwF;
    for (AqdAEriRBp2o = (948 - 948); GUBqEF > AqdAEriRBp2o; AqdAEriRBp2o = AqdAEriRBp2o +1)
        for (aNubUYV = 0; aNubUYV < q5dbmwF; aNubUYV = aNubUYV + 1)
            cin >> doP8eFyAnW3[AqdAEriRBp2o][aNubUYV];
    cin >> x2 >> y2;
    for (AqdAEriRBp2o = 0; x2 > AqdAEriRBp2o; AqdAEriRBp2o++)
        for (aNubUYV = 0; y2 > aNubUYV; aNubUYV++)
            cin >> QIzak8NOmF[AqdAEriRBp2o][aNubUYV];
    for (AqdAEriRBp2o = 0; AqdAEriRBp2o < GUBqEF; AqdAEriRBp2o++)
        for (aNubUYV = 0; aNubUYV < y2; aNubUYV++) {
            fL2HdW4[AqdAEriRBp2o][aNubUYV] = 0;
            for (lnI18BV93os = 0; x2 > lnI18BV93os; lnI18BV93os++)
                fL2HdW4[AqdAEriRBp2o][aNubUYV] = fL2HdW4[AqdAEriRBp2o][aNubUYV] + doP8eFyAnW3[AqdAEriRBp2o][lnI18BV93os] * QIzak8NOmF[lnI18BV93os][aNubUYV];
        }
    AqdAEriRBp2o = 0;
    while (AqdAEriRBp2o < GUBqEF) {
        for (aNubUYV = 0; aNubUYV < y2 - 1; aNubUYV++)
            cout << fL2HdW4[AqdAEriRBp2o][aNubUYV] << " ";
        cout << fL2HdW4[AqdAEriRBp2o][y2 - 1] << endl;
        AqdAEriRBp2o = AqdAEriRBp2o +1;
    }
    return 0;
}

