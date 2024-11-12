int main () {
    int xxUv0I;
    int Z0kGy7o3;
    int cewElfo [(1873 - 873)];
    int rVDyeGO820 [(1718 - 718)];
    int fMUnz9mjflPu;
    int eBYwcjM;
    int LzyZ08ngNIe;
    int ZkqBA2bF;
    Z0kGy7o3 = (635 - 635);
    while (cin >> xxUv0I) {
        if (!(0 != xxUv0I))
            break;
        {
            fMUnz9mjflPu = 0;
            while (fMUnz9mjflPu < xxUv0I) {
                cin >> cewElfo[fMUnz9mjflPu];
                fMUnz9mjflPu = fMUnz9mjflPu + (559 - 558);
            }
        }
        for (fMUnz9mjflPu = 0; fMUnz9mjflPu < xxUv0I; fMUnz9mjflPu = fMUnz9mjflPu + (29 - 28))
            cin >> rVDyeGO820[fMUnz9mjflPu];
        Z0kGy7o3 = 0;
        sort (cewElfo, cewElfo + xxUv0I);
        sort (rVDyeGO820, rVDyeGO820 + xxUv0I);
        for (fMUnz9mjflPu = eBYwcjM = xxUv0I - (426 - 425), LzyZ08ngNIe = ZkqBA2bF = 0; eBYwcjM >= ZkqBA2bF &&fMUnz9mjflPu >= LzyZ08ngNIe; eBYwcjM = eBYwcjM - 1) {
            if (cewElfo[fMUnz9mjflPu] > rVDyeGO820[eBYwcjM]) {
                fMUnz9mjflPu = fMUnz9mjflPu - (298 - 297);
                Z0kGy7o3 = Z0kGy7o3 +(83 - 82);
            }
            else if (cewElfo[fMUnz9mjflPu] < rVDyeGO820[eBYwcjM]) {
                Z0kGy7o3 = Z0kGy7o3 -(481 - 480);
                LzyZ08ngNIe = LzyZ08ngNIe +(880 - 879);
            }
            else {
                if (cewElfo[LzyZ08ngNIe] > rVDyeGO820[ZkqBA2bF]) {
                    LzyZ08ngNIe = LzyZ08ngNIe +(650 - 649);
                    eBYwcjM = eBYwcjM + 1;
                    Z0kGy7o3 = Z0kGy7o3 +(802 - 801);
                    ZkqBA2bF = ZkqBA2bF +(995 - 994);
                }
                else if (cewElfo[LzyZ08ngNIe] < rVDyeGO820[ZkqBA2bF]) {
                    LzyZ08ngNIe = LzyZ08ngNIe +(386 - 385);
                    Z0kGy7o3 = Z0kGy7o3 -1;
                }
                else {
                    if (cewElfo[LzyZ08ngNIe] == rVDyeGO820[eBYwcjM]) {
                        LzyZ08ngNIe = LzyZ08ngNIe +1;
                    }
                    else {
                        LzyZ08ngNIe = LzyZ08ngNIe +1;
                        Z0kGy7o3 = Z0kGy7o3 -1;
                    }
                }
            }
        }
        cout << (398 - 198) * Z0kGy7o3 << endl;
    }
    return 0;
}

