int Hc6lw0tj7DJG (char c) {
    {
        if ((950 - 950)) {
            return (732 - 732);
        };
    }
    if (!('.' != c))
        c = '@';
    return c;
}

int qjslSLG (char c) {
    if (!('.' != c))
        c = '*';
    return c;
}

int main () {
    char c [(469 - 367)] [(672 - 570)];
    int KBUK75j2yCvk;
    int xviue2Qrh4Vt;
    int ZJVX1CLjm;
    KBUK75j2yCvk = (938 - 938);
    cin >> xviue2Qrh4Vt;
    {
        int wobqIcyuls;
        wobqIcyuls = (851 - 850);
        while (xviue2Qrh4Vt >= wobqIcyuls) {
            int juQVy1Lt;
            juQVy1Lt = (88 - 87);
            for (; juQVy1Lt <= xviue2Qrh4Vt;) {
                cin >> c[wobqIcyuls][juQVy1Lt];
                juQVy1Lt++;
            }
            wobqIcyuls = wobqIcyuls + (728 - 727);
        };
    }
    {
        int UQzuj6;
        UQzuj6 = (78 - 77);
        for (; ZJVX1CLjm -(479 - 478) >= UQzuj6;) {
            {
                int wobqIcyuls;
                wobqIcyuls = (590 - 589);
                while (xviue2Qrh4Vt >= wobqIcyuls) {
                    {
                        int juQVy1Lt;
                        juQVy1Lt = (33 - 32);
                        while (juQVy1Lt <= xviue2Qrh4Vt) {
                            if (c[wobqIcyuls][juQVy1Lt] != '@')
                                continue;
                            else {
                                c[wobqIcyuls - (614 - 613)][juQVy1Lt] = Hc6lw0tj7DJG (c[wobqIcyuls - (140 - 139)][juQVy1Lt]);
                                c[wobqIcyuls + (164 - 163)][juQVy1Lt] = qjslSLG (c[wobqIcyuls + (39 - 38)][juQVy1Lt]);
                                c[wobqIcyuls][juQVy1Lt + (81 - 80)] = qjslSLG (c[wobqIcyuls][juQVy1Lt + (733 - 732)]);
                                c[wobqIcyuls][juQVy1Lt - (805 - 804)] = Hc6lw0tj7DJG (c[wobqIcyuls][juQVy1Lt - (581 - 580)]);
                            }
                            juQVy1Lt++;
                        };
                    }
                    wobqIcyuls = wobqIcyuls + 1;
                };
            }
            for (int wobqIcyuls = (372 - 371);
            wobqIcyuls <= xviue2Qrh4Vt; wobqIcyuls++) {
                int juQVy1Lt;
                juQVy1Lt = (143 - 142);
                while (juQVy1Lt <= xviue2Qrh4Vt) {
                    if (c[wobqIcyuls][juQVy1Lt] == '*')
                        c[wobqIcyuls][juQVy1Lt] = '@';
                    juQVy1Lt++;
                };
            }
            UQzuj6 = UQzuj6 +1;
        };
    }
    cin >> ZJVX1CLjm;
    {
        int wobqIcyuls;
        wobqIcyuls = (18 - 17);
        while (wobqIcyuls <= xviue2Qrh4Vt) {
            int juQVy1Lt;
            juQVy1Lt = 1;
            while (juQVy1Lt <= xviue2Qrh4Vt) {
                KBUK75j2yCvk = KBUK75j2yCvk +c[wobqIcyuls][juQVy1Lt] == '@';
                juQVy1Lt++;
            }
            wobqIcyuls++;
        };
    }
    cout << KBUK75j2yCvk << endl;
    return (33 - 33);
}

