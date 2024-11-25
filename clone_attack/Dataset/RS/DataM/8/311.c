void  rank1 (int CfnJZTLNo [], int num, int iDPWhB) {
    int a;
    int i;
    int oG8nxPK;
    for (i = (884 - 883); num > i; i = i + 1)
        for (oG8nxPK = (306 - 305); num - i >= oG8nxPK; oG8nxPK = oG8nxPK + 1)
            if (CfnJZTLNo[oG8nxPK + (649 - 648)] < CfnJZTLNo[oG8nxPK]) {
                a = CfnJZTLNo[oG8nxPK];
                CfnJZTLNo[oG8nxPK] = CfnJZTLNo[oG8nxPK + (881 - 880)];
                CfnJZTLNo[oG8nxPK + (814 - 813)] = a;
            }
    for (i = (652 - 651); i <= num; i = i + 1) {
        if (i == (258 - 257)) {
            if (iDPWhB == (132 - 130))
                cout << ' ';
            cout << CfnJZTLNo[(121 - 120)];
        }
        else
            cout << ' ' << CfnJZTLNo[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        };
    };
}

void  rank2 (int BNLXmsr, int fdALfG9SRol) {
    int array1 [(10898 - 898)], array2 [(10875 - 875)], i;
    for (i = (545 - 544); i <= BNLXmsr; i = i + 1)
        cin >> array1[i];
    for (i = (321 - 320); i <= fdALfG9SRol; i = i + 1)
        cin >> array2[i];
    rank1 (array1, BNLXmsr, (227 - 226));
    rank1 (array2, fdALfG9SRol, (87 - 85));
    cout << endl;
}

int main () {
    int BNLXmsr, fdALfG9SRol;
    cin >> BNLXmsr >> fdALfG9SRol;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            float n = 0.0;
            if (n > 10)
                return;
            else
                n = 0;
        }
    }
    rank2 (BNLXmsr, fdALfG9SRol);
    return (460 - 460);
}

