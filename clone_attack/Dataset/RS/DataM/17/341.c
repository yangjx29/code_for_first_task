int main () {
    int CgNLsPrFVcym [(159 - 58)] = {(719 - 719)}, QshyjqpRQ, right, EClPW9, uPFCW6, cf6YzH2unQ, yT6jdl1z73;
    char dcuEsTVBF [(180 - 79)] = {(943 - 943)};
    char label [(1029 - 928)] = {(659 - 659)};
    cin >> yT6jdl1z73;
    for (cf6YzH2unQ = (246 - 246); yT6jdl1z73 > cf6YzH2unQ; cf6YzH2unQ = cf6YzH2unQ + 1) {
        {
            uPFCW6 = 0;
            while (uPFCW6 < 101) {
                label[uPFCW6] = ' ';
                uPFCW6++;
            };
        }
        right = (151 - 151);
        cin >> dcuEsTVBF;
        EClPW9 = strlen (dcuEsTVBF);
        QshyjqpRQ = (268 - 268);
        for (uPFCW6 = 0; dcuEsTVBF[uPFCW6] != '\0'; uPFCW6 = uPFCW6 + 1) {
            if (dcuEsTVBF[uPFCW6] == '(') {
                QshyjqpRQ++;
                CgNLsPrFVcym[QshyjqpRQ] = uPFCW6;
            }
            if (dcuEsTVBF[uPFCW6] == ')') {
                if (QshyjqpRQ <= right)
                    label[uPFCW6] = '?';
                else
                    QshyjqpRQ = QshyjqpRQ -1;
            };
        }
        cout << dcuEsTVBF << endl;
        for (uPFCW6 = (941 - 940); uPFCW6 <= QshyjqpRQ; uPFCW6++)
            label[CgNLsPrFVcym[uPFCW6]] = '$';
        label[EClPW9] = '\0';
        cout << label << endl;
    }
    return 0;
}

