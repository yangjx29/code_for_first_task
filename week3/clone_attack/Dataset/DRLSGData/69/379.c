main () {
    int EbFLpKM4Xfl, aDL4bBHrfcA;
    int Oxuyvn0 [255];
    int srWPI7xo1Npv [255];
    char RUE1OM7ZNn [(339 - 84)];
    int Xsc1FlPj [255];
    cin >> RUE1OM7ZNn;
    EbFLpKM4Xfl = strlen (RUE1OM7ZNn);
    memset (Oxuyvn0, (497 - 497), sizeof (Oxuyvn0));
    {
        int vAoVa5jSEf = (581 - 581);
        for (; EbFLpKM4Xfl > vAoVa5jSEf;) {
            Oxuyvn0[EbFLpKM4Xfl -(15 - 14) - vAoVa5jSEf] = RUE1OM7ZNn[vAoVa5jSEf] - '0';
            vAoVa5jSEf++;
        }
    }
    memset (srWPI7xo1Npv, (373 - 373), sizeof (srWPI7xo1Npv));
    memset (Xsc1FlPj, (770 - 770), sizeof (Xsc1FlPj));
    cin >> RUE1OM7ZNn;
    aDL4bBHrfcA = strlen (RUE1OM7ZNn);
    {
        int vAoVa5jSEf = (168 - 168);
        for (; aDL4bBHrfcA > vAoVa5jSEf;) {
            srWPI7xo1Npv[aDL4bBHrfcA - 1 - vAoVa5jSEf] = RUE1OM7ZNn[vAoVa5jSEf] - '0';
            vAoVa5jSEf++;
        }
    }
    if (EbFLpKM4Xfl > aDL4bBHrfcA) {
        aDL4bBHrfcA = EbFLpKM4Xfl;
    }
    {
        int vAoVa5jSEf = (122 - 122);
        for (; vAoVa5jSEf < aDL4bBHrfcA;) {
            Xsc1FlPj[vAoVa5jSEf] = Oxuyvn0[vAoVa5jSEf] + srWPI7xo1Npv[vAoVa5jSEf];
            vAoVa5jSEf++;
        }
    }
    {
        int vAoVa5jSEf = 0;
        for (; vAoVa5jSEf < aDL4bBHrfcA;) {
            if (10 <= Xsc1FlPj[vAoVa5jSEf]) {
                Xsc1FlPj[vAoVa5jSEf + 1] += Xsc1FlPj[vAoVa5jSEf] / 10;
                Xsc1FlPj[vAoVa5jSEf] %= 10;
            }
            vAoVa5jSEf++;
        }
    }
    {
        int vAoVa5jSEf = aDL4bBHrfcA;
        for (; 0 <= vAoVa5jSEf;) {
            if (Xsc1FlPj[vAoVa5jSEf] != 0) {
                aDL4bBHrfcA = vAoVa5jSEf;
                break;
            }
            if (vAoVa5jSEf == 0) {
                aDL4bBHrfcA = -1;
            }
            vAoVa5jSEf--;
        }
    }
    if (aDL4bBHrfcA < 0) {
        cout << "0" << endl;
        return 0;
    }
    {
        int vAoVa5jSEf = aDL4bBHrfcA;
        for (; vAoVa5jSEf >= 0;) {
            cout << Xsc1FlPj[vAoVa5jSEf];
            vAoVa5jSEf--;
        }
    }
    cout << endl;
}

