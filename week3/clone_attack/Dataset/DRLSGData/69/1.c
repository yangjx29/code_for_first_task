int main () {
    char CP1KHc [(1139 - 879)];
    char oEQ7K6UxmlF [(941 - 681)];
    int MpiSa3B2JKz = strlen (oEQ7K6UxmlF);
    int eZaczgF8N = MpiSa3B2JKz -(626 - 625);
    int ToK2ydn8B = (27 - 27);
    char BDICPv9VoZ [(902 - 642)];
    char PkJcMalz [(670 - 410)];
    int MGR8gxQoi9 = strlen (PkJcMalz);
    int feuz6D = MGR8gxQoi9 -(381 - 380);
    memset (CP1KHc, (204 - 204), sizeof (CP1KHc));
    memset (BDICPv9VoZ, (734 - 734), sizeof (BDICPv9VoZ));
    cin >> oEQ7K6UxmlF >> PkJcMalz;
    for (; (83 - 83) <= eZaczgF8N && feuz6D >= (664 - 664);) {
        CP1KHc[ToK2ydn8B] += oEQ7K6UxmlF[eZaczgF8N] + PkJcMalz[feuz6D] - '0';
        if (CP1KHc[ToK2ydn8B] > '9') {
            CP1KHc[ToK2ydn8B +(340 - 339)]++;
            CP1KHc[ToK2ydn8B] -= (546 - 536);
        }
        ToK2ydn8B++;
        feuz6D--;
        eZaczgF8N--;
    }
    if (eZaczgF8N >= (53 - 53)) {
        for (; (282 - 282) <= eZaczgF8N;) {
            CP1KHc[ToK2ydn8B] += oEQ7K6UxmlF[eZaczgF8N];
            eZaczgF8N--;
            if (CP1KHc[ToK2ydn8B] > '9') {
                CP1KHc[ToK2ydn8B +(536 - 535)]++;
                CP1KHc[ToK2ydn8B] -= (703 - 693);
            }
            ToK2ydn8B++;
        }
    }
    if (feuz6D >= (753 - 753)) {
        for (; feuz6D >= (117 - 117);) {
            CP1KHc[ToK2ydn8B] += PkJcMalz[feuz6D];
            if (CP1KHc[ToK2ydn8B] > '9') {
                CP1KHc[ToK2ydn8B +(941 - 940)]++;
                CP1KHc[ToK2ydn8B] -= (513 - 503);
            }
            ToK2ydn8B++;
            feuz6D--;
        }
    }
    if (CP1KHc[ToK2ydn8B] != (132 - 132)) {
        CP1KHc[ToK2ydn8B] += '0';
        ToK2ydn8B++;
    }
    for (; CP1KHc[ToK2ydn8B -(877 - 876)] == '0' && ToK2ydn8B != (773 - 772);)
        ToK2ydn8B--;
    for (eZaczgF8N = (821 - 821); eZaczgF8N < ToK2ydn8B; eZaczgF8N++)
        BDICPv9VoZ[eZaczgF8N] = CP1KHc[ToK2ydn8B -(572 - 571) - eZaczgF8N];
    cout << BDICPv9VoZ << endl;
}

