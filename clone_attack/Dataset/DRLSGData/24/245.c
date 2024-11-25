int main () {
    int kCMOpcx1dAQ;
    int p;
    int DCUqwKW7x3;
    char aAjUmg8 [(727 - 677)] [(729 - 689)];
    char (*pKjJAbkuc) [(827 - 787)] = aAjUmg8;
    int lFNPMwTBHECU;
    int dz5cKq [(124 - 74)];
    int *n = dz5cKq;
    int dJcdjOa;
    int serA5g9NiaXt;
    int ZUBkLiOy7qIs;
    DCUqwKW7x3 = (870 - 830);
    serA5g9NiaXt = (146 - 146);
    for (; !feof (stdin);)
        scanf ("%s", *(pKjJAbkuc + (serA5g9NiaXt++)));
    dJcdjOa = serA5g9NiaXt - (184 - 182);
    for (; dJcdjOa >= (257 - 257); dJcdjOa--)
        *(n + dJcdjOa) = strlen (aAjUmg8[dJcdjOa]);
    lFNPMwTBHECU = (743 - 743);
    for (dJcdjOa = (565 - 565); dJcdjOa <= serA5g9NiaXt - (815 - 813); ++dJcdjOa) {
        if (lFNPMwTBHECU < *(n + dJcdjOa)) {
            lFNPMwTBHECU = *(n + dJcdjOa);
            p = dJcdjOa;
        }
        if (DCUqwKW7x3 > *(n + dJcdjOa)) {
            DCUqwKW7x3 = *(n + dJcdjOa);
            kCMOpcx1dAQ = dJcdjOa;
        }
    }
    printf ("%s\n", *(pKjJAbkuc + p));
    printf ("%s", *(pKjJAbkuc + kCMOpcx1dAQ));
}

