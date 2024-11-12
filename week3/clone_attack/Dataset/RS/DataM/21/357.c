int main () {
    int qc3tiB = 0;
    int KE36uOq5 [350];
    int vfH5rF7, nJw5r9mLjoC, j, m, QdyXLh02cruS;
    scanf ("%d", &vfH5rF7);
    for (nJw5r9mLjoC = 0; vfH5rF7 > nJw5r9mLjoC; nJw5r9mLjoC++) {
        scanf ("%d", &KE36uOq5[nJw5r9mLjoC]);
        qc3tiB += KE36uOq5[nJw5r9mLjoC];
        KE36uOq5[nJw5r9mLjoC] *= vfH5rF7;
    }
    for (nJw5r9mLjoC = 0; nJw5r9mLjoC < vfH5rF7; nJw5r9mLjoC++)
        for (j = nJw5r9mLjoC + 1; j < vfH5rF7; j++)
            if (KE36uOq5[nJw5r9mLjoC] > KE36uOq5[j]) {
                QdyXLh02cruS = KE36uOq5[nJw5r9mLjoC];
                KE36uOq5[nJw5r9mLjoC] = KE36uOq5[j];
                KE36uOq5[j] = QdyXLh02cruS;
            }
    if (qc3tiB - KE36uOq5[0] > KE36uOq5[vfH5rF7 - 1] - qc3tiB)
        m = qc3tiB - KE36uOq5[0];
    else
        m = KE36uOq5[vfH5rF7 - 1] - qc3tiB;
    {
        QdyXLh02cruS = 0;
        nJw5r9mLjoC = 0;
        while (nJw5r9mLjoC < vfH5rF7) {
            if (qc3tiB - KE36uOq5[nJw5r9mLjoC] == m || KE36uOq5[nJw5r9mLjoC] - qc3tiB == m) {
                if (QdyXLh02cruS)
                    ;
                QdyXLh02cruS = 1;
                printf ("%d", KE36uOq5[nJw5r9mLjoC] / vfH5rF7);
            }
            nJw5r9mLjoC++;
        };
    }
    return 0;
}

