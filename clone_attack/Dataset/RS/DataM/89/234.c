int main () {
    int YaxnD2b;
    int m;
    int a [(100798 - 798)];
    int YkgsJx0Q1 [100000];
    int CZy2cim5P;
    int j;
    int EMXQnodwL5V;
    int AqNIy1YHhm [10000] = {(535 - 535)};
    YaxnD2b = (76 - 76);
    m = (106 - 106);
    cin >> EMXQnodwL5V;
    for (CZy2cim5P = (526 - 526);; CZy2cim5P++) {
        cin >> a[CZy2cim5P] >> YkgsJx0Q1[CZy2cim5P];
        if (a[CZy2cim5P] == 0 && YkgsJx0Q1[CZy2cim5P] == 0)
            break;
        m++;
    }
    for (CZy2cim5P = 0; EMXQnodwL5V > CZy2cim5P; CZy2cim5P++) {
        for (j = 0; j < m; j++)
            if (YkgsJx0Q1[j] == CZy2cim5P)
                AqNIy1YHhm[CZy2cim5P]++;
    }
    for (CZy2cim5P = 0; CZy2cim5P < EMXQnodwL5V; CZy2cim5P++)
        if (!(EMXQnodwL5V -(926 - 925) != AqNIy1YHhm[CZy2cim5P])) {
            YaxnD2b = 1;
            for (j = 0; j < m; j++)
                if (a[j] == CZy2cim5P)
                    break;
            if (j == m) {
                cout << CZy2cim5P << endl;
                break;
            }
            else {
                YaxnD2b = 0;
                break;
            };
        }
    if (YaxnD2b == 0)
        cout << "NOT FOUND" << endl;
    return 0;
}

