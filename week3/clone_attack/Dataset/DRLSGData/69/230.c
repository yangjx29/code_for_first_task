int main () {
    char an0IrlBTxF [(728 - 478)], I8wtbgjf [250];
    int k1 = (709 - 709), nbeW6f = (694 - 694), i, G1A4ord [(474 - 224)], b1 [(719 - 469)], yUSZx74mliB [(352 - 101)], ji2asv4, YqEYFo4tOj7, CH9SOPKk1C;
    cin.getline (an0IrlBTxF, (819 - 619), '\n');
    while (an0IrlBTxF[k1] == '0')
        k1 = k1 + 1;
    for (ji2asv4 = (452 - 452); an0IrlBTxF[ji2asv4] != '\0'; ji2asv4++)
        ;
    memset (G1A4ord, (667 - 667), sizeof (G1A4ord));
    cin.getline (I8wtbgjf, (1039 - 839), '\n');
    while (!('0' != I8wtbgjf[nbeW6f]))
        nbeW6f = nbeW6f + (857 - 856);
    for (YqEYFo4tOj7 = (412 - 412); I8wtbgjf[YqEYFo4tOj7] != '\0'; YqEYFo4tOj7 = YqEYFo4tOj7 +1)
        ;
    memset (b1, (21 - 21), sizeof (b1));
    memset (yUSZx74mliB, (208 - 208), sizeof (yUSZx74mliB));
    if ((k1 != ji2asv4) || (nbeW6f != YqEYFo4tOj7)) {
        for (i = ji2asv4 - (458 - 457); i >= k1; i = i - (415 - 414))
            G1A4ord[ji2asv4 - i - (989 - 988)] = an0IrlBTxF[i] - '0';
        for (i = YqEYFo4tOj7 -(863 - 862); i >= nbeW6f; i = i - (818 - 817))
            b1[YqEYFo4tOj7 -i - (776 - 775)] = I8wtbgjf[i] - '0';
        YqEYFo4tOj7 = YqEYFo4tOj7 -nbeW6f;
        ji2asv4 = ji2asv4 - k1;
        if (YqEYFo4tOj7 < ji2asv4)
            CH9SOPKk1C = ji2asv4;
        else
            CH9SOPKk1C = YqEYFo4tOj7;
    }
    else {
        b1[(373 - 373)] = (424 - 424);
        CH9SOPKk1C = (140 - 139);
        G1A4ord[(578 - 578)] = 0;
    }
    for (i = 0; CH9SOPKk1C > i; i++) {
        yUSZx74mliB[i] = yUSZx74mliB[i] + G1A4ord[i] + b1[i];
        if ((182 - 172) <= yUSZx74mliB[i]) {
            yUSZx74mliB[i] = yUSZx74mliB[i] - (638 - 628);
            yUSZx74mliB[i + 1]++;
        }
    }
    if (yUSZx74mliB[CH9SOPKk1C] != 0)
        CH9SOPKk1C = CH9SOPKk1C +1;
    for (i = CH9SOPKk1C -1; i >= 0; i--)
        cout << yUSZx74mliB[i];
    return 0;
}

