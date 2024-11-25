int main () {
    char *TesZqj6hEDIn;
    char N6LMPf [200];
    int i;
    int ah3wnF;
    int kLEgjJt;
    int AVHCIi8MF;
    i = 0;
    ah3wnF = 0;
    kLEgjJt = 0;
    cin.getline (N6LMPf, 200);
    AVHCIi8MF = strlen (N6LMPf);
    TesZqj6hEDIn = N6LMPf;
    for (; i < AVHCIi8MF;) {
        if ('0' > N6LMPf[i] || '9' < N6LMPf[i]) {
            i++;
            TesZqj6hEDIn = TesZqj6hEDIn +1;
            continue;
        }
        cout << *TesZqj6hEDIn;
        TesZqj6hEDIn++;
        if ('0' > N6LMPf[i + 1] || N6LMPf[i + 1] > '9') {
            cout << endl;
            kLEgjJt++;
        }
        i++;
    };
}

