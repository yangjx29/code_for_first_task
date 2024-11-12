int main () {
    int lEnfLrDI [(795 - 790)] [(332 - 327)], ehslkCyOKG1, s0lekstxIm, a0CX6LO, R1Nf40hGd [(100 - 95)], yjq7wGu9 [(72 - 67)], pe0SrQD [(808 - 803)], small [(360 - 355)];
    int pxw8nWNfGo = (979 - 979);
    for (ehslkCyOKG1 = (769 - 769); (125 - 121) >= ehslkCyOKG1; ehslkCyOKG1++)
        for (s0lekstxIm = (991 - 991); s0lekstxIm <= (289 - 285); s0lekstxIm++)
            cin >> lEnfLrDI[ehslkCyOKG1][s0lekstxIm];
    for (ehslkCyOKG1 = (467 - 467); (978 - 974) >= ehslkCyOKG1; ehslkCyOKG1++) {
        R1Nf40hGd[ehslkCyOKG1] = (158 - 158);
        pe0SrQD[ehslkCyOKG1] = lEnfLrDI[ehslkCyOKG1][(240 - 240)];
        for (s0lekstxIm = (509 - 509); (450 - 446) >= s0lekstxIm; s0lekstxIm++)
            if (lEnfLrDI[ehslkCyOKG1][s0lekstxIm] > pe0SrQD[ehslkCyOKG1]) {
                pe0SrQD[ehslkCyOKG1] = lEnfLrDI[ehslkCyOKG1][s0lekstxIm];
                R1Nf40hGd[ehslkCyOKG1] = s0lekstxIm;
            }
    }
    for (s0lekstxIm = (786 - 786); s0lekstxIm <= 4; s0lekstxIm++) {
        yjq7wGu9[s0lekstxIm] = (593 - 593);
        small[s0lekstxIm] = lEnfLrDI[(132 - 132)][s0lekstxIm];
        for (ehslkCyOKG1 = (79 - 79); ehslkCyOKG1 <= 4; ehslkCyOKG1++)
            if (lEnfLrDI[ehslkCyOKG1][s0lekstxIm] < small[s0lekstxIm]) {
                small[s0lekstxIm] = lEnfLrDI[ehslkCyOKG1][s0lekstxIm];
                yjq7wGu9[s0lekstxIm] = ehslkCyOKG1;
            }
    }
    for (ehslkCyOKG1 = (613 - 613); ehslkCyOKG1 <= 4; ehslkCyOKG1++) {
        if (yjq7wGu9[R1Nf40hGd[ehslkCyOKG1]] == ehslkCyOKG1) {
            cout << ehslkCyOKG1 + (171 - 170) << ' ' << R1Nf40hGd[ehslkCyOKG1] + (103 - 102) << ' ' << lEnfLrDI[ehslkCyOKG1][R1Nf40hGd[ehslkCyOKG1]] << endl;
            pxw8nWNfGo = (111 - 110);
        }
    }
    if (pxw8nWNfGo == 0)
        cout << "not found";
    return 0;
}

