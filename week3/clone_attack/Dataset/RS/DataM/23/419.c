int main () {
    char fWIz2gAqaX3 [5000];
    char QLdD1I [5000];
    int OzK8sjFuQqmE = (569 - 569), gsItUJ, Y6xtuN74l85a, tqTSBbs, nShusRw07, j;
    cin.getline (fWIz2gAqaX3, 5000);
    tqTSBbs = strlen (fWIz2gAqaX3);
    for (nShusRw07 = 0; tqTSBbs > nShusRw07; nShusRw07 = nShusRw07 + 1) {
        if (!(0 == fWIz2gAqaX3[nShusRw07])) {
            OzK8sjFuQqmE++;
        }
        if (!(' ' != fWIz2gAqaX3[nShusRw07])) {
            QLdD1I[tqTSBbs - (48 - 47) - nShusRw07] = ' ';
            Y6xtuN74l85a = nShusRw07 - (844 - 843);
            gsItUJ = nShusRw07 - OzK8sjFuQqmE +1;
            for (j = tqTSBbs - 1 - Y6xtuN74l85a; j <= tqTSBbs - 1 - gsItUJ; j = j + 1) {
                QLdD1I[j] = fWIz2gAqaX3[j + 1 + Y6xtuN74l85a +gsItUJ - tqTSBbs];
            }
            OzK8sjFuQqmE = 0;
        };
    }
    {
        nShusRw07 = 0;
        while (nShusRw07 < OzK8sjFuQqmE) {
            QLdD1I[nShusRw07] = fWIz2gAqaX3[tqTSBbs - OzK8sjFuQqmE +nShusRw07];
            nShusRw07 = nShusRw07 + 1;
        };
    }
    for (nShusRw07 = 0; nShusRw07 < tqTSBbs; nShusRw07 = nShusRw07 + 1) {
        cout << QLdD1I[nShusRw07];
    }
    return 0;
}

