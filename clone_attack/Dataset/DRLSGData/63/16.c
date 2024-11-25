int OmtFwiubSs, v4PMem0lCKA, vqkZlXc, dHi4KUA1LCn, UI2fo0LGC;
int BW8f9ab5nQBX [(758 - 658)] [(376 - 276)], mat2 [(874 - 774)] [(802 - 702)], hOFS4o6a1j [(361 - 261)] [100];

int main () {
    cin >> OmtFwiubSs >> vqkZlXc;
    {
        int i = (545 - 545);
        while (i < OmtFwiubSs) {
            {
                int IPHgtdq8 = (833 - 833);
                while (IPHgtdq8 < vqkZlXc) {
                    cin >> BW8f9ab5nQBX[IPHgtdq8][i];
                    IPHgtdq8++;
                }
            }
            i++;
        }
    }
    cin >> v4PMem0lCKA >> dHi4KUA1LCn;
    {
        int i = (651 - 651);
        while (i < v4PMem0lCKA) {
            {
                int IPHgtdq8 = (360 - 360);
                while (IPHgtdq8 < dHi4KUA1LCn) {
                    cin >> mat2[IPHgtdq8][i];
                    IPHgtdq8++;
                }
            }
            i++;
        }
    }
    {
        int i = (983 - 983);
        while (i < OmtFwiubSs) {
            {
                int IPHgtdq8 = (120 - 120);
                while (IPHgtdq8 < dHi4KUA1LCn) {
                    UI2fo0LGC = (951 - 951);
                    {
                        int tfmxnOSqQu;
                        tfmxnOSqQu = (395 - 395);
                        while (tfmxnOSqQu < vqkZlXc) {
                            UI2fo0LGC = UI2fo0LGC +BW8f9ab5nQBX[tfmxnOSqQu][i] * mat2[IPHgtdq8][tfmxnOSqQu];
                            tfmxnOSqQu++;
                        }
                    }
                    hOFS4o6a1j[i][IPHgtdq8] = UI2fo0LGC;
                    IPHgtdq8++;
                }
            }
            i++;
        }
    }
    {
        int i;
        i = (427 - 427);
        while (i < OmtFwiubSs -(541 - 540)) {
            {
                int IPHgtdq8;
                IPHgtdq8 = (863 - 863);
                while (IPHgtdq8 < dHi4KUA1LCn - (442 - 441)) {
                    cout << hOFS4o6a1j[i][IPHgtdq8] << ' ';
                    IPHgtdq8++;
                }
            }
            cout << hOFS4o6a1j[i][dHi4KUA1LCn - (283 - 282)] << endl;
            i++;
        }
    }
    {
        int IPHgtdq8 = 0;
        while (IPHgtdq8 < dHi4KUA1LCn - (330 - 329)) {
            cout << hOFS4o6a1j[OmtFwiubSs -(211 - 210)][IPHgtdq8] << ' ';
            IPHgtdq8++;
        }
    }
    cout << hOFS4o6a1j[OmtFwiubSs -(200 - 199)][dHi4KUA1LCn - 1];
    return 0;
}

