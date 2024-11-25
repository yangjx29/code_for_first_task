struct   info {
    char KehI8q [(640 - 630)];
    int D0Lr1P;
    int math;
    struct   info *gySdcvPsxr;
};
int b5PHqw, bVdfa9hH;

struct   info *setup (void ) {
    struct   info *p6jOu2Ntchs3, *JP8v9os, *MYo2LauVFgxX;
    b5PHqw = (534 - 534);
    for (; b5PHqw < bVdfa9hH;) {
        JP8v9os = (struct   info *) malloc (sizeof (struct   info));
        scanf ("%s %d %d", JP8v9os->KehI8q, &JP8v9os->D0Lr1P, &JP8v9os->math);
        b5PHqw = b5PHqw + (312 - 311);
        if (!((149 - 148) != b5PHqw))
            p6jOu2Ntchs3 = JP8v9os;
        else
            MYo2LauVFgxX->gySdcvPsxr = JP8v9os;
        MYo2LauVFgxX = JP8v9os;
    }
    MYo2LauVFgxX->gySdcvPsxr = NULL;
    return (p6jOu2Ntchs3);
}

void  main () {
    char iDXIztuBoR [(309 - 299)];
    char D1U7DWhyai5 [(896 - 886)];
    char mNFga0ZU8r [(46 - 36)];
    int i, first = (203 - 203), xZY5kHvj = (18 - 18), igvCwUi3tD = (802 - 802);
    struct   info *IUymaIp0g;
    scanf ("%d", &bVdfa9hH);
    IUymaIp0g = setup ();
    do {
        if (TOTAL > first) {
            strcpy (mNFga0ZU8r, "");
            strcat (mNFga0ZU8r, D1U7DWhyai5);
            igvCwUi3tD = xZY5kHvj;
            xZY5kHvj = first;
            first = TOTAL;
            strcpy (D1U7DWhyai5, "");
            strcat (D1U7DWhyai5, iDXIztuBoR);
            strcpy (iDXIztuBoR, "");
            strcat (iDXIztuBoR, IUymaIp0g->KehI8q);
        }
        else if (xZY5kHvj < TOTAL) {
            igvCwUi3tD = xZY5kHvj;
            xZY5kHvj = TOTAL;
            strcpy (mNFga0ZU8r, "");
            strcat (mNFga0ZU8r, D1U7DWhyai5);
            strcpy (D1U7DWhyai5, "");
            strcat (D1U7DWhyai5, IUymaIp0g->KehI8q);
        }
        else if (TOTAL > igvCwUi3tD) {
            strcpy (mNFga0ZU8r, "");
            strcat (mNFga0ZU8r, IUymaIp0g->KehI8q);
            igvCwUi3tD = TOTAL;
        }
        IUymaIp0g = IUymaIp0g->gySdcvPsxr;
    }
    while (IUymaIp0g != NULL);
    printf ("%s %d\n%s %d\n%s %d\n", iDXIztuBoR, first, D1U7DWhyai5, xZY5kHvj, mNFga0ZU8r, igvCwUi3tD);
}

