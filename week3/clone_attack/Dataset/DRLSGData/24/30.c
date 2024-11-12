int main () {
    int Np1ojITUw6N2;
    char kvzcu8;
    int DLrS2hoVniIA;
    int U2HwxKQ;
    int q0b6jwn5;
    int pEWGSbJ;
    int ioveIFVCnmi;
    char j7jmepLl [(667 - 467)] [(509 - 309)];
    int CxEnzqDBCAp [(561 - 361)];
    int SeYMHAfRan1;
    Np1ojITUw6N2 = (410 - 410);
    q0b6jwn5 = (932 - 932);
    ioveIFVCnmi = 200;
    DLrS2hoVniIA = (170 - 170);
    for (; (kvzcu8 = cin.get ()) != '\n';) {
        if (!(' ' != kvzcu8) || !(',' != kvzcu8)) {
            if (DLrS2hoVniIA != (438 - 438)) {
                CxEnzqDBCAp[q0b6jwn5] = DLrS2hoVniIA;
                q0b6jwn5 = q0b6jwn5 + (808 - 807);
                DLrS2hoVniIA = (969 - 969);
            }
        }
        else {
            j7jmepLl[q0b6jwn5][DLrS2hoVniIA++] = kvzcu8;
        }
    }
    CxEnzqDBCAp[q0b6jwn5] = DLrS2hoVniIA;
    U2HwxKQ = q0b6jwn5;
    {
        q0b6jwn5 = (65 - 65);
        while (q0b6jwn5 <= U2HwxKQ) {
            if (ioveIFVCnmi > CxEnzqDBCAp[q0b6jwn5]) {
                ioveIFVCnmi = CxEnzqDBCAp[q0b6jwn5];
                SeYMHAfRan1 = q0b6jwn5;
            }
            if (Np1ojITUw6N2 < CxEnzqDBCAp[q0b6jwn5]) {
                Np1ojITUw6N2 = CxEnzqDBCAp[q0b6jwn5];
                pEWGSbJ = q0b6jwn5;
            }
            q0b6jwn5 = q0b6jwn5 + (858 - 857);
        }
    }
    {
        q0b6jwn5 = (520 - 520);
        while (Np1ojITUw6N2 > q0b6jwn5) {
            cout << j7jmepLl[pEWGSbJ][q0b6jwn5];
            q0b6jwn5 = q0b6jwn5 + 1;
        }
    }
    cout << endl;
    {
        q0b6jwn5 = 0;
        while (ioveIFVCnmi > q0b6jwn5) {
            cout << j7jmepLl[SeYMHAfRan1][q0b6jwn5];
            q0b6jwn5 = q0b6jwn5 + 1;
        }
    }
    cout << endl;
    return 0;
}

