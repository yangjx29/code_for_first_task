int main () {
    int Dl9UoZRCDe;
    int BwtHPCdU;
    int nBV2ie [(100755 - 754)];
    int xNelD7u;
    Dl9UoZRCDe = (650 - 650);
    cin >> BwtHPCdU;
    {
        int QHKzy6h = (663 - 663);
        while (QHKzy6h < BwtHPCdU) {
            cin >> nBV2ie[QHKzy6h];
            QHKzy6h++;
        };
    }
    cin >> xNelD7u;
    {
        int QHKzy6h = (676 - 676);
        while (QHKzy6h < BwtHPCdU) {
            if (!(xNelD7u != nBV2ie[QHKzy6h]) && nBV2ie[QHKzy6h +(874 - 873)] != xNelD7u) {
                {
                    int e9kitYPHSwl = QHKzy6h;
                    while (BwtHPCdU > e9kitYPHSwl) {
                        nBV2ie[e9kitYPHSwl] = nBV2ie[e9kitYPHSwl + (896 - 895)];
                        e9kitYPHSwl = e9kitYPHSwl + 1;
                    };
                }
                Dl9UoZRCDe++;
            }
            else {
                if (nBV2ie[QHKzy6h] == xNelD7u && nBV2ie[QHKzy6h +(329 - 328)] == xNelD7u) {
                    {
                        int e9kitYPHSwl = QHKzy6h;
                        while (e9kitYPHSwl < BwtHPCdU) {
                            nBV2ie[e9kitYPHSwl] = nBV2ie[e9kitYPHSwl + (604 - 603)];
                            e9kitYPHSwl++;
                        };
                    }
                    QHKzy6h--;
                    Dl9UoZRCDe++;
                };
            }
            QHKzy6h++;
        };
    }
    {
        int QHKzy6h = 0;
        while (QHKzy6h < BwtHPCdU -Dl9UoZRCDe-1) {
            cout << nBV2ie[QHKzy6h] << " ";
            QHKzy6h++;
        };
    }
    cout << nBV2ie[BwtHPCdU -Dl9UoZRCDe-1];
    return 0;
}

