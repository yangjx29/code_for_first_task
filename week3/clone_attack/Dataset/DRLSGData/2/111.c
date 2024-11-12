struct   student {
    int SVY7bA;
    char AI75BGKhCzk [(960 - 933)];
    struct   student *PhZwnmRVosWM;
};
int r8uDkSehb;

struct   student *EO7KdH60nJ2 (int ElCZxLOeg) {
    struct   student *DaSBYRsNF;
    struct   student *TPdqao2;
    struct   student *FucU98X7J;
    r8uDkSehb = (353 - 352);
    DaSBYRsNF = (343 - 343);
    TPdqao2 = FucU98X7J = (struct   student *) malloc (LEN);
    scanf ("%ld %s", &TPdqao2->SVY7bA, TPdqao2->AI75BGKhCzk);
    for (; ElCZxLOeg > r8uDkSehb;) {
        if (!(1 != r8uDkSehb))
            DaSBYRsNF = TPdqao2;
        else
            FucU98X7J->PhZwnmRVosWM = TPdqao2;
        r8uDkSehb = r8uDkSehb + 1;
        FucU98X7J = TPdqao2;
        TPdqao2 = (struct   student *) malloc (LEN);
        scanf ("%d %s", &TPdqao2->SVY7bA, TPdqao2->AI75BGKhCzk);
    }
    FucU98X7J->PhZwnmRVosWM = TPdqao2;
    TPdqao2->PhZwnmRVosWM = 0;
    return (DaSBYRsNF);
}

void  main () {
    char NA2F6wlZUEJ;
    int ElCZxLOeg;
    int bkftZ8Uo3h;
    int nsCmtB2;
    int lrvxN8dK4TY [27] = {0};
    int jlc90E;
    char q8h2nBzmZ6Tx;
    struct   student *DaSBYRsNF;
    struct   student *FUYyGN;
    struct   student dMiWYylvC7f;
    int Bx0ozDhR8c [100] = {0};
    int fkBnvmqCbX0;
    bkftZ8Uo3h = 1;
    scanf ("%d", &ElCZxLOeg);
    DaSBYRsNF = EO7KdH60nJ2 (ElCZxLOeg);
    FUYyGN = DaSBYRsNF;
    for (; FUYyGN != 0; FUYyGN = FUYyGN->PhZwnmRVosWM) {
        nsCmtB2 = 0;
        for (; nsCmtB2 < strlen (FUYyGN->AI75BGKhCzk);) {
            q8h2nBzmZ6Tx = FUYyGN->AI75BGKhCzk[nsCmtB2];
            nsCmtB2 = nsCmtB2 + 1;
            lrvxN8dK4TY[q8h2nBzmZ6Tx - 'A' + 1]++;
        }
    }
    for (FUYyGN = DaSBYRsNF; FUYyGN != 0; FUYyGN = FUYyGN->PhZwnmRVosWM) {
        for (nsCmtB2 = 0; nsCmtB2 <= strlen (FUYyGN->AI75BGKhCzk); nsCmtB2 = nsCmtB2 + 1)
            if (!(NA2F6wlZUEJ +'A' - 1 != FUYyGN->AI75BGKhCzk[nsCmtB2])) {
                Bx0ozDhR8c[bkftZ8Uo3h] = FUYyGN->SVY7bA;
                nsCmtB2 = strlen (FUYyGN->AI75BGKhCzk) + 1;
                bkftZ8Uo3h = bkftZ8Uo3h + 1;
            }
    }
    fkBnvmqCbX0 = lrvxN8dK4TY[1];
    NA2F6wlZUEJ = 1;
    for (jlc90E = 1; 26 >= jlc90E; jlc90E = jlc90E + 1)
        if (fkBnvmqCbX0 < lrvxN8dK4TY[jlc90E]) {
            fkBnvmqCbX0 = lrvxN8dK4TY[jlc90E];
            NA2F6wlZUEJ = jlc90E;
        }
    printf ("%c\n%d\n", NA2F6wlZUEJ +64, fkBnvmqCbX0);
    for (bkftZ8Uo3h = 1; bkftZ8Uo3h <= fkBnvmqCbX0; bkftZ8Uo3h = bkftZ8Uo3h + 1)
        printf ("%d\n", Bx0ozDhR8c[bkftZ8Uo3h]);
}

