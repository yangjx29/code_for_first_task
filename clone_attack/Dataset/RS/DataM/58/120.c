int main () {
    char orDbXG [(1033 - 933)] [81];
    int jOZ1Tf6txk;
    int TrSMPCa;
    int VXuxbqSA;
    int RQ56LVYF7Ux [100] = {(117 - 117)};
    cin >> jOZ1Tf6txk;
    cin.get ();
    {
        TrSMPCa = 0;
        while (jOZ1Tf6txk > TrSMPCa) {
            int OubjhRE4raXM;
            OubjhRE4raXM = 0;
            cin.getline (orDbXG[TrSMPCa], 100);
            if ((('z' >= orDbXG[TrSMPCa][0]) && (orDbXG[TrSMPCa][0] >= 'a')) || ((orDbXG[TrSMPCa][0] <= 'Z') && (orDbXG[TrSMPCa][0] >= 'A')) || (orDbXG[TrSMPCa][0] == '_')) {
                for (VXuxbqSA = 0; orDbXG[TrSMPCa][VXuxbqSA] != '\0'; VXuxbqSA = VXuxbqSA +1)
                    if (((orDbXG[TrSMPCa][VXuxbqSA] <= 'z') && (orDbXG[TrSMPCa][VXuxbqSA] >= 'a')) || ((orDbXG[TrSMPCa][VXuxbqSA] <= 'Z') && (orDbXG[TrSMPCa][VXuxbqSA] >= 'A')) || ((orDbXG[TrSMPCa][VXuxbqSA] >= '0') && (orDbXG[TrSMPCa][VXuxbqSA] <= '9')) || (orDbXG[TrSMPCa][VXuxbqSA] == '_'))
                        OubjhRE4raXM = OubjhRE4raXM +1;
                if (OubjhRE4raXM == VXuxbqSA)
                    cout << "1" << endl;
                else
                    cout << "0" << endl;
            }
            else
                cout << "0" << endl;
            TrSMPCa++;
        };
    }
    return 0;
}

