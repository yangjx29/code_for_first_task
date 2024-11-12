int main () {
    int vrTpjDe;
    int AXOTsVgIB;
    vrTpjDe = 0;
    AXOTsVgIB = 0;
    int G56soTXbu [100] [100];
    int (*p) [100] = G56soTXbu;
    memset (G56soTXbu, '0', sizeof (G56soTXbu));
    cin >> vrTpjDe >> AXOTsVgIB;
    {
        int sf2mDjPwW;
        sf2mDjPwW = 0;
        while (vrTpjDe > sf2mDjPwW) {
            {
                int hGnoSMrv = 0;
                while (AXOTsVgIB > hGnoSMrv) {
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    cin >> G56soTXbu[sf2mDjPwW][hGnoSMrv];
                    hGnoSMrv++;
                }
            }
            sf2mDjPwW++;
        }
    }
    {
        int sf2mDjPwW;
        sf2mDjPwW = 0;
        while (vrTpjDe + AXOTsVgIB -1 > sf2mDjPwW) {
            if (AXOTsVgIB > sf2mDjPwW) {
                int hGnoSMrv;
                hGnoSMrv = 0;
                while (vrTpjDe >= hGnoSMrv) {
                    if (sf2mDjPwW - hGnoSMrv < AXOTsVgIB &&vrTpjDe > hGnoSMrv && hGnoSMrv >= 0 && 0 <= sf2mDjPwW - hGnoSMrv) {
                        cout << *(*(p + hGnoSMrv) + sf2mDjPwW - hGnoSMrv) << endl;
                    }
                    hGnoSMrv++;
                }
            }
            else {
                int hGnoSMrv;
                hGnoSMrv = 1;
                while (vrTpjDe > hGnoSMrv) {
                    if (sf2mDjPwW - hGnoSMrv < AXOTsVgIB &&hGnoSMrv < vrTpjDe && sf2mDjPwW - hGnoSMrv >= 0 && hGnoSMrv >= 0) {
                        cout << *(*(p + hGnoSMrv) + sf2mDjPwW - hGnoSMrv) << endl;
                    }
                    hGnoSMrv++;
                }
            }
            sf2mDjPwW++;
        }
    }
    return 0;
}

