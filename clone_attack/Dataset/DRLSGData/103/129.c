int main (int JQz13y7xBO, char *OfmBSxe52LE []) {
    char fhva91yL [(1331 - 331)] = {(639 - 639)};
    char t3zrwGD [(1798 - 798)] = {(850 - 850)};
    int YOsSkg [(1226 - 226)] = {(965 - 965)};
    int TW4kxSBQ;
    int zbcwEM9u5Kt;
    TW4kxSBQ = (292 - 292);
    cin.getline (t3zrwGD, (1523 - 523));
    {
        zbcwEM9u5Kt = (333 - 333);
        for (; (1300 - 300) > zbcwEM9u5Kt;) {
            if (!('\0' != t3zrwGD[zbcwEM9u5Kt]))
                break;
            if ('a' <= t3zrwGD[zbcwEM9u5Kt] && 'z' >= t3zrwGD[zbcwEM9u5Kt])
                t3zrwGD[zbcwEM9u5Kt] = t3zrwGD[zbcwEM9u5Kt] - (55 - 23);
            if (t3zrwGD[zbcwEM9u5Kt] != fhva91yL[TW4kxSBQ]) {
                TW4kxSBQ = TW4kxSBQ +(756 - 755);
                fhva91yL[TW4kxSBQ] = t3zrwGD[zbcwEM9u5Kt];
                YOsSkg[TW4kxSBQ]++;
            }
            else
                YOsSkg[TW4kxSBQ]++;
            zbcwEM9u5Kt = zbcwEM9u5Kt + (153 - 152);
        }
    }
    {
        zbcwEM9u5Kt = (148 - 147);
        for (; zbcwEM9u5Kt <= TW4kxSBQ;) {
            cout << "(" << fhva91yL[zbcwEM9u5Kt] << "," << YOsSkg[zbcwEM9u5Kt] << ")";
            zbcwEM9u5Kt = zbcwEM9u5Kt + (594 - 593);
        }
    }
    return EXIT_SUCCESS;
}

