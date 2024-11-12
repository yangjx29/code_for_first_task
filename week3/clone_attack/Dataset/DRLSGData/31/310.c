struct   student {
    char pLqlYTSJOfNH [9];
    char l459XvdkDj [(453 - 433)];
    char Ywa6ncGrZ;
    int Y2PDjX;
    float A7LxzFuhKX;
    char jCmuphBjg3k [20];
    struct   student *eLkmey;
};
void  main () {
    int f9HCPrh6JU = 1, u8Dczp;
    struct   student *Q6L7zG5P, *vtUCQ3, *SYvFEf6yTCZR;
    for (u8Dczp = 1;; u8Dczp++) {
        vtUCQ3 = (struct   student *) malloc (LEN);
        scanf ("%s", vtUCQ3->pLqlYTSJOfNH);
        if (!('e' != vtUCQ3->pLqlYTSJOfNH[0]))
            break;
        scanf ("%s %c %d %g %s", vtUCQ3->l459XvdkDj, &vtUCQ3->Ywa6ncGrZ, &vtUCQ3->Y2PDjX, &vtUCQ3->A7LxzFuhKX, vtUCQ3->jCmuphBjg3k);
        if (!(1 != f9HCPrh6JU)) {
            vtUCQ3->eLkmey = NULL;
            Q6L7zG5P = vtUCQ3;
        }
        else {
            vtUCQ3->eLkmey = Q6L7zG5P;
            Q6L7zG5P = vtUCQ3;
        }
        f9HCPrh6JU++;
    }
    SYvFEf6yTCZR = Q6L7zG5P;
    for (; SYvFEf6yTCZR != NULL;) {
        printf ("%s %s %c %d %g %s\n", SYvFEf6yTCZR->pLqlYTSJOfNH, SYvFEf6yTCZR->l459XvdkDj, SYvFEf6yTCZR->Ywa6ncGrZ, SYvFEf6yTCZR->Y2PDjX, SYvFEf6yTCZR->A7LxzFuhKX, SYvFEf6yTCZR->jCmuphBjg3k);
        SYvFEf6yTCZR = SYvFEf6yTCZR->eLkmey;
    };
}

