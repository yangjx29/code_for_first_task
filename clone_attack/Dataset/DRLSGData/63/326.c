int main () {
    int VaWLJ98jdG, rvlZwds, XNtQCib4PlJg, dULt9V7rP2zn;
    int YsGQ1hfuLTZ, b6GaNH, MS2nobT;
    int FCOcTVUi1 [(488 - 388)] [(621 - 521)];
    int GetLwq9RX0MO [100] [100];
    int VNuXbVrJ [100] [100] = {(691 - 691)};
    cin >> YsGQ1hfuLTZ >> b6GaNH;
    {
        rvlZwds = 662 - 662;
        while (rvlZwds < YsGQ1hfuLTZ) {
            for (XNtQCib4PlJg = (609 - 609); XNtQCib4PlJg < b6GaNH; XNtQCib4PlJg++) {
                cin >> FCOcTVUi1[rvlZwds][XNtQCib4PlJg];
            }
            rvlZwds++;
        }
    }
    cin >> b6GaNH >> MS2nobT;
    {
        rvlZwds = 256 - 256;
        while (rvlZwds < b6GaNH) {
            {
                XNtQCib4PlJg = 0;
                while (MS2nobT > XNtQCib4PlJg) {
                    cin >> GetLwq9RX0MO[rvlZwds][XNtQCib4PlJg];
                    XNtQCib4PlJg++;
                }
            }
            rvlZwds++;
        }
    }
    {
        rvlZwds = 0;
        while (YsGQ1hfuLTZ > rvlZwds) {
            {
                XNtQCib4PlJg = 0;
                while (XNtQCib4PlJg < MS2nobT) {
                    {
                        dULt9V7rP2zn = 0;
                        while (b6GaNH > dULt9V7rP2zn) {
                            VNuXbVrJ[rvlZwds][XNtQCib4PlJg] = VNuXbVrJ[rvlZwds][XNtQCib4PlJg] + FCOcTVUi1[rvlZwds][dULt9V7rP2zn] * GetLwq9RX0MO[dULt9V7rP2zn][XNtQCib4PlJg];
                            dULt9V7rP2zn++;
                        }
                    }
                    XNtQCib4PlJg++;
                }
            }
            rvlZwds++;
        }
    }
    {
        rvlZwds = 0;
        while (rvlZwds < YsGQ1hfuLTZ) {
            for (XNtQCib4PlJg = 0; XNtQCib4PlJg < MS2nobT -1; XNtQCib4PlJg++) {
                cout << VNuXbVrJ[rvlZwds][XNtQCib4PlJg] << " ";
            }
            cout << VNuXbVrJ[rvlZwds][MS2nobT -1] << endl;
            rvlZwds++;
        }
    }
    return 0;
}

