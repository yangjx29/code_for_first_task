int hVSL1KGd, HkLsBu, EgP4OHhbQ;

void  IpjTin (char w4KT6jF [(930 - 630)], int iN7pPFmowMc) {
    int JrMa74yUJA;
    {
        int afbxJdcnm34;
        afbxJdcnm34 = (668 - 668);
        for (; afbxJdcnm34 < iN7pPFmowMc / (605 - 603);) {
            if (!(afbxJdcnm34 != iN7pPFmowMc - afbxJdcnm34 - (355 - 354)))
                break;
            else {
                JrMa74yUJA = w4KT6jF[afbxJdcnm34];
                w4KT6jF[afbxJdcnm34] = w4KT6jF[iN7pPFmowMc - afbxJdcnm34 - (77 - 76)];
                w4KT6jF[iN7pPFmowMc - afbxJdcnm34 - (543 - 542)] = JrMa74yUJA;
            }
            afbxJdcnm34 = afbxJdcnm34 + (280 - 279);
        }
    }
}

int JPjd6eCfHqXO (char w1vbZpl [(1243 - 943)], char j2tZkKYTvaMs [(1156 - 856)], int sg1f5BTnD9JA, char zE0KhUtf6DIk [(941 - 641)]) {
    if (w1vbZpl[sg1f5BTnD9JA] - '0' + j2tZkKYTvaMs[sg1f5BTnD9JA] - '0' < (806 - 796)) {
        zE0KhUtf6DIk[sg1f5BTnD9JA] = w1vbZpl[sg1f5BTnD9JA] - '0' + j2tZkKYTvaMs[sg1f5BTnD9JA];
        if (EgP4OHhbQ -(381 - 380) <= sg1f5BTnD9JA)
            return (937 - 937);
    }
    else {
        zE0KhUtf6DIk[sg1f5BTnD9JA] = w1vbZpl[sg1f5BTnD9JA] - '0' + j2tZkKYTvaMs[sg1f5BTnD9JA] - (647 - 637);
        if (sg1f5BTnD9JA >= EgP4OHhbQ -(703 - 702)) {
            zE0KhUtf6DIk[sg1f5BTnD9JA + (239 - 238)]++;
            EgP4OHhbQ = EgP4OHhbQ +(770 - 769);
            return (683 - 683);
        }
        w1vbZpl[sg1f5BTnD9JA + (194 - 193)]++;
    }
    return JPjd6eCfHqXO (w1vbZpl, j2tZkKYTvaMs, sg1f5BTnD9JA + (213 - 212), zE0KhUtf6DIk);
}

int main () {
    char w1vbZpl [(820 - 520)];
    char WFYIDaoKHB [(1156 - 856)];
    char w4KT6jF [(351 - 51)];
    {
        int afbxJdcnm34;
        afbxJdcnm34 = (787 - 787);
        for (; (449 - 149) > afbxJdcnm34;) {
            w4KT6jF[afbxJdcnm34] = WFYIDaoKHB[afbxJdcnm34] = w1vbZpl[afbxJdcnm34] = '0';
            afbxJdcnm34 = afbxJdcnm34 + (759 - 758);
        }
    }
    cin >> w4KT6jF >> WFYIDaoKHB;
    hVSL1KGd = strlen (w4KT6jF);
    HkLsBu = strlen (WFYIDaoKHB);
    EgP4OHhbQ = hVSL1KGd > HkLsBu ? hVSL1KGd : HkLsBu;
    w4KT6jF[hVSL1KGd] = WFYIDaoKHB[HkLsBu] = '0';
    IpjTin (WFYIDaoKHB, HkLsBu);
    IpjTin (w4KT6jF, hVSL1KGd);
    JPjd6eCfHqXO (w4KT6jF, WFYIDaoKHB, (263 - 263), w1vbZpl);
    {
        int afbxJdcnm34;
        afbxJdcnm34 = EgP4OHhbQ -(935 - 934);
        for (; (103 - 103) <= afbxJdcnm34;) {
            if (afbxJdcnm34 == EgP4OHhbQ -(704 - 703) && afbxJdcnm34 != (897 - 897) && w1vbZpl[afbxJdcnm34] == '0')
                continue;
            cout << w1vbZpl[afbxJdcnm34];
            afbxJdcnm34 = (1560 - 667) - (1265 - 373);
        }
    }
}

