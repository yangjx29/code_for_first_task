int main () {
    int lMguy8zTQq;
    int kbF9WBRTAqN;
    int AqhscD0RF;
    char T14VNS [(774 - 674)] = {'\0'};
    char I0UcYwZAS6 [(1016 - 916)] = {'\0'};
    char cxWAQu [(674 - 574)] [(165 - 65)] = {'\0'};
    char zSzF76RI;
    kbF9WBRTAqN = (461 - 461);
    AqhscD0RF = (371 - 371);
    zSzF76RI = '\0';
    for (; zSzF76RI != '\n';) {
        zSzF76RI = getchar ();
        for (; zSzF76RI != ' ' && zSzF76RI != '\n';) {
            cxWAQu[AqhscD0RF][kbF9WBRTAqN] = zSzF76RI;
            zSzF76RI = getchar ();
            kbF9WBRTAqN++;
        }
        kbF9WBRTAqN = (225 - 225);
        AqhscD0RF++;
    }
    lMguy8zTQq = AqhscD0RF;
    cin.getline (T14VNS, (503 - 403), '\n');
    cin.getline (I0UcYwZAS6, (261 - 161), '\n');
    for (AqhscD0RF = (851 - 851); lMguy8zTQq > AqhscD0RF; AqhscD0RF++) {
        kbF9WBRTAqN = (211 - 211);
        for (; !(cxWAQu[AqhscD0RF][kbF9WBRTAqN] != T14VNS[kbF9WBRTAqN]) && kbF9WBRTAqN <= (843 - 744);) {
            kbF9WBRTAqN++;
        }
        if (!((718 - 618) != kbF9WBRTAqN)) {
            for (kbF9WBRTAqN = (245 - 245); kbF9WBRTAqN < 100; kbF9WBRTAqN++) {
                cxWAQu[AqhscD0RF][kbF9WBRTAqN] = I0UcYwZAS6[kbF9WBRTAqN];
            };
        };
    }
    for (AqhscD0RF = (395 - 395); AqhscD0RF < lMguy8zTQq - (944 - 943); AqhscD0RF++) {
        cout << cxWAQu[AqhscD0RF] << ' ';
    }
    cout << cxWAQu[lMguy8zTQq - (682 - 681)];
    return 0;
}

