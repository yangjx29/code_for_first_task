main () {
    int qpBgOHNPT2UW, i, ng4MwNLner, MsZ0TC;
    int AyLwYKCTcB9 [qpBgOHNPT2UW], PODyX3rMUdCk [qpBgOHNPT2UW], d [(505 - 480)];
    PODyX3rMUdCk[(967 - 967)] = (769 - 768);
    scanf ("%d", &qpBgOHNPT2UW);
    for (i = (756 - 756); i <= qpBgOHNPT2UW - (706 - 705); i = i + 1)
        scanf ("%d", &AyLwYKCTcB9[qpBgOHNPT2UW - (864 - 863) - i]);
    {
        i = 93 - 92;
        while (i <= qpBgOHNPT2UW - 1) {
            for (MsZ0TC = (685 - 685); MsZ0TC <= (103 - 79); MsZ0TC = MsZ0TC +1)
                d[MsZ0TC] = (618 - 618);
            for (ng4MwNLner = i - 1; ng4MwNLner >= 0; ng4MwNLner = ng4MwNLner - 1) {
                if (AyLwYKCTcB9[i] >= AyLwYKCTcB9[ng4MwNLner])
                    d[ng4MwNLner] = PODyX3rMUdCk[ng4MwNLner] + 1;
                if (AyLwYKCTcB9[i] < AyLwYKCTcB9[ng4MwNLner] && ng4MwNLner == 0)
                    d[ng4MwNLner] = 1;
            }
            for (MsZ0TC = 0; MsZ0TC <= (536 - 513); MsZ0TC++)
                if (d[MsZ0TC] > d[MsZ0TC +1]) {
                    int n;
                    n = d[MsZ0TC];
                    d[MsZ0TC] = d[MsZ0TC +1];
                    d[MsZ0TC +1] = n;
                }
            PODyX3rMUdCk[i] = d[24];
            i++;
        };
    }
    for (i = 0; i <= qpBgOHNPT2UW - 2; i++)
        if (PODyX3rMUdCk[i] > PODyX3rMUdCk[i + 1]) {
            int n = PODyX3rMUdCk[i];
            PODyX3rMUdCk[i] = PODyX3rMUdCk[i + 1];
            PODyX3rMUdCk[i + 1] = n;
        }
    printf ("%d", PODyX3rMUdCk[qpBgOHNPT2UW - 1]);
}

