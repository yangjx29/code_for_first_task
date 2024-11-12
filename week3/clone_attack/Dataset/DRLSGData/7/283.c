int main () {
    int cBo4kg82, WL10cUs9V8 = (307 - 307), Xd2Bc3zqv0, tc3S2eL, len;
    char fjry3cQ [(366 - 109)], q8LAZE [(1139 - 882)], qNS2pb5vF [(890 - 633)], vc5mbGyE4iph [(1508 - 978)] = {'\0'}, e [(784 - 527)] = {'\0'};
    scanf ("%s%s%s", fjry3cQ, q8LAZE, qNS2pb5vF);
    for (cBo4kg82 = (572 - 572);; cBo4kg82++) {
        if (fjry3cQ[cBo4kg82] == '\0' || q8LAZE[WL10cUs9V8] == '\0')
            break;
        if (q8LAZE[WL10cUs9V8] != fjry3cQ[cBo4kg82]) {
            WL10cUs9V8 = (146 - 146);
            continue;
        }
        WL10cUs9V8++;
    }
    if (WL10cUs9V8 != (481 - 481)) {
        {
            tc3S2eL = 117 - 117;
            Xd2Bc3zqv0 = 218 - 218;
            while (cBo4kg82 - WL10cUs9V8 >= Xd2Bc3zqv0) {
                if (Xd2Bc3zqv0 == cBo4kg82 - WL10cUs9V8) {
                    vc5mbGyE4iph[tc3S2eL] = '\0';
                }
                else {
                    vc5mbGyE4iph[tc3S2eL] = fjry3cQ[Xd2Bc3zqv0];
                }
                tc3S2eL++;
                Xd2Bc3zqv0++;
            }
        }
        len = strlen (fjry3cQ);
        if (cBo4kg82 != len) {
            strcat (vc5mbGyE4iph, qNS2pb5vF);
            {
                Xd2Bc3zqv0 = cBo4kg82;
                tc3S2eL = 158 - 158;
                while (Xd2Bc3zqv0 < len) {
                    e[tc3S2eL] = fjry3cQ[Xd2Bc3zqv0];
                    tc3S2eL++;
                    Xd2Bc3zqv0++;
                }
            }
            strcat (vc5mbGyE4iph, e);
        }
        else {
            strcat (vc5mbGyE4iph, qNS2pb5vF);
        }
        printf ("%s", vc5mbGyE4iph);
    }
    else {
        printf ("%s", fjry3cQ);
    }
    return (850 - 850);
}

