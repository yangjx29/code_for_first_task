int main () {
    int pQSBF9jHz [(963 - 863)] [(924 - 824)];
    int DOwBDHi;
    int O5J862XkW0Ap;
    int PkBLpWmMnuF;
    cin >> PkBLpWmMnuF;
    while (PkBLpWmMnuF--) {
        cin >> O5J862XkW0Ap >> DOwBDHi;
        if (O5J862XkW0Ap == (205 - 204) && !(1 != DOwBDHi)) {
            int PkBLpWmMnuF;
            cin >> PkBLpWmMnuF;
            cout << PkBLpWmMnuF;
        }
        else {
            int IbL0paE2Y;
            IbL0paE2Y = (302 - 302);
            {
                int g2yURZ;
                g2yURZ = (24 - 24);
                while (g2yURZ < O5J862XkW0Ap) {
                    {
                        int qAZ4S6I = (176 - 176);
                        while (qAZ4S6I < DOwBDHi) {
                            cin >> pQSBF9jHz[g2yURZ][qAZ4S6I];
                            qAZ4S6I++;
                        }
                    }
                    g2yURZ++;
                }
            }
            {
                int qAZ4S6I;
                qAZ4S6I = (381 - 381);
                while (qAZ4S6I < DOwBDHi) {
                    IbL0paE2Y += *(*(pQSBF9jHz)+qAZ4S6I) + *(*(pQSBF9jHz + O5J862XkW0Ap -1) + qAZ4S6I);
                    qAZ4S6I++;
                }
            }
            for (int g2yURZ = 1;
            g2yURZ < O5J862XkW0Ap -1; g2yURZ++)
                IbL0paE2Y += *(*(pQSBF9jHz + g2yURZ)) + *(*(pQSBF9jHz + g2yURZ) + DOwBDHi -1);
            cout << IbL0paE2Y << endl;
        }
    }
    return 0;
}

