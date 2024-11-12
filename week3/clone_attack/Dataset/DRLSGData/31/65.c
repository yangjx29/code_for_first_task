char HUXzQePuhl4 [] = {"end"};

struct   student {
    char jKjywOud6 [(1033 - 933)];
    char mOhDfq [(442 - 342)];
    char PJbGO38P5hQ;
    int TxiYfNgka5K;
    char Rh6tlio [(100216 - 216)];
    char mh5S9eaGt [(1097 - 997)];
    struct   student *CSYfb4zI;
};
struct   student *VxpUDTQsWR () {
    struct   student *sFfH72JhdY;
    struct   student *ZHY8RLA;
    struct   student *pi1Auga;
    ZHY8RLA = (struct   student *) malloc (Len);
    scanf ("%s %s %c %d %s %s", ZHY8RLA->jKjywOud6, ZHY8RLA->mOhDfq, &ZHY8RLA->PJbGO38P5hQ, &ZHY8RLA->TxiYfNgka5K, ZHY8RLA->Rh6tlio, ZHY8RLA->mh5S9eaGt);
    ZHY8RLA->CSYfb4zI = NULL;
    pi1Auga = ZHY8RLA;
    ZHY8RLA = (struct   student *) malloc (Len);
    {
        for (; true;) {
            scanf ("%s", ZHY8RLA->jKjywOud6);
            if (!strcmp (ZHY8RLA->jKjywOud6, HUXzQePuhl4))
                break;
            else {
                scanf ("%s %c %d %s %s", ZHY8RLA->mOhDfq, &ZHY8RLA->PJbGO38P5hQ, &ZHY8RLA->TxiYfNgka5K, ZHY8RLA->Rh6tlio, ZHY8RLA->mh5S9eaGt);
                ZHY8RLA->CSYfb4zI = pi1Auga;
                pi1Auga = ZHY8RLA;
                ZHY8RLA = (struct   student *) malloc (Len);
            }
        }
    }
    sFfH72JhdY = pi1Auga;
    return (sFfH72JhdY);
}

void  main () {
    struct   student *RXQRhS;
    RXQRhS = VxpUDTQsWR ();
    do {
        printf ("%s %s %c %d %s %s\n", RXQRhS->jKjywOud6, RXQRhS->mOhDfq, RXQRhS->PJbGO38P5hQ, RXQRhS->TxiYfNgka5K, RXQRhS->Rh6tlio, RXQRhS->mh5S9eaGt);
        RXQRhS = RXQRhS->CSYfb4zI;
    }
    while (RXQRhS != NULL);
}

