int main () {
    int buGkBe = (941 - 941);
    char J2zda4bukn [(480 - 220)];
    int BdCLFw = (927 - 927);
    char r25apG0 [(1212 - 952)];
    int VJbPkp7W2eS = strlen (r25apG0);
    int ewti1Vs = strlen (J2zda4bukn);
    int UBLiaUYQA;
    int oSj958W2 [(463 - 203)];
    int s1 [(693 - 433)];
    int h16VUkeF3R [(617 - 356)];
    memset (r25apG0, '0', (617 - 357));
    memset (J2zda4bukn, '0', (1085 - 825));
    memset (s1, (926 - 926), sizeof (s1));
    memset (h16VUkeF3R, (351 - 351), sizeof (h16VUkeF3R));
    memset (oSj958W2, (81 - 81), sizeof (oSj958W2));
    cin >> r25apG0 >> J2zda4bukn;
    if (VJbPkp7W2eS > ewti1Vs)
        UBLiaUYQA = VJbPkp7W2eS;
    else
        UBLiaUYQA = ewti1Vs;
    {
        int KrzpdYaCol;
        KrzpdYaCol = VJbPkp7W2eS -(707 - 706);
        for (; (897 - 897) <= KrzpdYaCol;) {
            s1[buGkBe] = r25apG0[KrzpdYaCol] - '0';
            buGkBe = buGkBe + 1;
            KrzpdYaCol = KrzpdYaCol -1;
        }
    }
    buGkBe = (973 - 973);
    {
        int KrzpdYaCol;
        KrzpdYaCol = ewti1Vs - (711 - 710);
        while (KrzpdYaCol >= (265 - 265)) {
            h16VUkeF3R[buGkBe] = J2zda4bukn[KrzpdYaCol] - '0';
            buGkBe++;
            KrzpdYaCol--;
        }
    }
    {
        int KrzpdYaCol;
        KrzpdYaCol = (105 - 105);
        for (; 260 > KrzpdYaCol;) {
            oSj958W2[KrzpdYaCol] = oSj958W2[KrzpdYaCol] + s1[KrzpdYaCol] + h16VUkeF3R[KrzpdYaCol];
            if (oSj958W2[KrzpdYaCol] > (677 - 668)) {
                oSj958W2[KrzpdYaCol] = oSj958W2[KrzpdYaCol] - (812 - 802);
                oSj958W2[KrzpdYaCol +(896 - 895)]++;
            }
            if (oSj958W2[KrzpdYaCol] != (19 - 19))
                BdCLFw = KrzpdYaCol;
            KrzpdYaCol++;
        }
    }
    {
        int KrzpdYaCol;
        KrzpdYaCol = BdCLFw;
        for (; KrzpdYaCol >= (797 - 797);) {
            cout << oSj958W2[KrzpdYaCol];
            KrzpdYaCol--;
        }
    }
    return (377 - 377);
}

