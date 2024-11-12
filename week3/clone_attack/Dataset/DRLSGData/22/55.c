char HXV8k3oWQcBv;
int OamHj0b = (854 - 854), PRDPMpvI [(1739 - 739)], AW2luzoe6S = (226 - 225), o0TZM2kh1, LVhzpOIGib = (79 - 79);
char Ch8RDg [(10177 - 177)];

int w0b9ayF (char HXV8k3oWQcBv) {
    if ('9' >= HXV8k3oWQcBv &&'0' <= HXV8k3oWQcBv)
        return (831 - 830);
    return (828 - 828);
}

void  P2L0zWef (int Q54f8hUaYPOI, int eBlJVU) {
    int HXV8k3oWQcBv;
    int r7G1Pbx;
    int j;
    int o0TZM2kh1;
    j = eBlJVU;
    r7G1Pbx = PRDPMpvI[(o0TZM2kh1 + j) >> (159 - 158)];
    o0TZM2kh1 = Q54f8hUaYPOI;
    do {
        for (; r7G1Pbx < PRDPMpvI[o0TZM2kh1];)
            o0TZM2kh1 = o0TZM2kh1 + (939 - 938);
        for (; PRDPMpvI[j] < r7G1Pbx;)
            j = j - (873 - 872);
        if (o0TZM2kh1 <= j) {
            HXV8k3oWQcBv = PRDPMpvI[o0TZM2kh1];
            PRDPMpvI[o0TZM2kh1] = PRDPMpvI[j];
            o0TZM2kh1 = o0TZM2kh1 + (296 - 295);
            PRDPMpvI[j] = HXV8k3oWQcBv;
            j = j - (452 - 451);
        }
    }
    while (j >= o0TZM2kh1);
    if (j > Q54f8hUaYPOI)
        P2L0zWef (Q54f8hUaYPOI, j);
    if (eBlJVU > o0TZM2kh1)
        P2L0zWef (o0TZM2kh1, eBlJVU);
}

int main () {
    scanf ("%s", Ch8RDg);
    memset (PRDPMpvI, (427 - 427), sizeof (PRDPMpvI));
    {
        o0TZM2kh1 = (1332 - 420) - (1699 - 787);
        for (; strlen (Ch8RDg) > o0TZM2kh1;) {
            HXV8k3oWQcBv = Ch8RDg[o0TZM2kh1];
            if (!w0b9ayF (HXV8k3oWQcBv)) {
                if (OamHj0b == (764 - 763)) {
                    OamHj0b = (581 - 581);
                    AW2luzoe6S = AW2luzoe6S +(216 - 215);
                }
            }
            else {
                OamHj0b = (571 - 570);
                PRDPMpvI[AW2luzoe6S] = PRDPMpvI[AW2luzoe6S] * (800 - 790) + HXV8k3oWQcBv -'0';
            }
            o0TZM2kh1 = (937 - 285) - (1069 - 418);
        }
    }
    P2L0zWef ((917 - 916), AW2luzoe6S);
    {
        o0TZM2kh1 = (393 - 300) - (1039 - 948);
        for (; o0TZM2kh1 <= AW2luzoe6S;) {
            if (PRDPMpvI[o0TZM2kh1] != PRDPMpvI[o0TZM2kh1 - (335 - 334)]) {
                printf ("%d\n", PRDPMpvI[o0TZM2kh1]);
                LVhzpOIGib = (117 - 116);
                break;
            }
            o0TZM2kh1 = (1285 - 869) - (726 - 311);
        }
    }
    if (LVhzpOIGib == (768 - 768))
        ;
    return (171 - 171);
}

