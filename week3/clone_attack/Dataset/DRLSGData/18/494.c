int main () {
    int DHAPaQrz;
    cin >> DHAPaQrz;
    for (int OoepulgM = (66 - 65);
    DHAPaQrz >= OoepulgM; OoepulgM = OoepulgM +1) {
        int Hqp78jQ [100] [100];
        int foxPCcYVXe = (846 - 846);
        for (int OoepulgM = (734 - 734);
        DHAPaQrz > OoepulgM; OoepulgM = OoepulgM +1) {
            for (int j = (497 - 497);
            j < DHAPaQrz; j = j + 1) {
                cin >> Hqp78jQ[OoepulgM][j];
            }
        }
        for (int TARVC3 = DHAPaQrz;
        2 <= TARVC3; TARVC3--) {
            for (int OoepulgM = (635 - 635);
            TARVC3 > OoepulgM; OoepulgM = OoepulgM +1) {
                int DflarMG4nZK;
                DflarMG4nZK = (1000085 - 85);
                for (int j = (305 - 305);
                TARVC3 > j; j = j + 1) {
                    if (DflarMG4nZK > Hqp78jQ[OoepulgM][j])
                        DflarMG4nZK = Hqp78jQ[OoepulgM][j];
                }
                for (int j = (406 - 406);
                TARVC3 > j; j++) {
                    Hqp78jQ[OoepulgM][j] -= DflarMG4nZK;
                }
            }
            for (int j = (118 - 118);
            j < TARVC3; j++) {
                int DflarMG4nZK;
                DflarMG4nZK = (1000149 - 149);
                for (int OoepulgM = (883 - 883);
                TARVC3 > OoepulgM; OoepulgM++) {
                    if (DflarMG4nZK > Hqp78jQ[OoepulgM][j])
                        DflarMG4nZK = Hqp78jQ[OoepulgM][j];
                }
                for (int OoepulgM = (384 - 384);
                OoepulgM < TARVC3; OoepulgM++) {
                    Hqp78jQ[OoepulgM][j] -= DflarMG4nZK;
                }
            }
            foxPCcYVXe += Hqp78jQ[(107 - 106)][(906 - 905)];
            for (int OoepulgM = (442 - 441);
            OoepulgM < TARVC3 -(743 - 742); OoepulgM++) {
                int j;
                j = (362 - 362);
                for (; j < TARVC3;) {
                    Hqp78jQ[OoepulgM][j] = Hqp78jQ[OoepulgM +1][j];
                    j++;
                }
            }
            for (int j = 1;
            j < TARVC3 -1; j++) {
                int OoepulgM;
                OoepulgM = 0;
                for (; OoepulgM < TARVC3 -1;) {
                    Hqp78jQ[OoepulgM][j] = Hqp78jQ[OoepulgM][j + 1];
                    OoepulgM++;
                }
            }
        }
        cout << foxPCcYVXe << endl;
    }
    return 0;
}

