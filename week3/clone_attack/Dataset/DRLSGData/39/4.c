struct   student {
    char gDepxXMfn0cr [(491 - 471)];
    int v8T4o7ZjF;
    int num2;
    char xf3lcdK;
    char Ma138Is;
    int w2qUmOskQ0Z;
    int Dda0Zb8Px;
    struct   student *YpgCfodR;
};
struct   student *X9S0QHvy (void ) {
    int eY9lazi;
    int VYyxRauUTnz;
    VYyxRauUTnz = (509 - 509);
    struct   student *LfrtBcR3N;
    struct   student *mEmk3nI, *k69mCL4OVH;
    VYyxRauUTnz = VYyxRauUTnz +(489 - 488);
    scanf ("%d", &eY9lazi);
    mEmk3nI = k69mCL4OVH = (struct   student *) malloc (LEN);
    scanf ("%s %d %d %c %c %d", mEmk3nI->gDepxXMfn0cr, &mEmk3nI->v8T4o7ZjF, &mEmk3nI->num2, &mEmk3nI->xf3lcdK, &mEmk3nI->Ma138Is, &mEmk3nI->w2qUmOskQ0Z);
    LfrtBcR3N = NULL;
    while (eY9lazi > VYyxRauUTnz) {
        if (!((204 - 203) != VYyxRauUTnz))
            LfrtBcR3N = mEmk3nI;
        else
            k69mCL4OVH->YpgCfodR = mEmk3nI;
        k69mCL4OVH = mEmk3nI;
        mEmk3nI = (struct   student *) malloc (LEN);
        scanf ("%s %d %d %c %c %d", mEmk3nI->gDepxXMfn0cr, &mEmk3nI->v8T4o7ZjF, &mEmk3nI->num2, &mEmk3nI->xf3lcdK, &mEmk3nI->Ma138Is, &mEmk3nI->w2qUmOskQ0Z);
        VYyxRauUTnz = VYyxRauUTnz +(340 - 339);
    }
    k69mCL4OVH->YpgCfodR = mEmk3nI;
    mEmk3nI->YpgCfodR = NULL;
    return (LfrtBcR3N);
}

void  gy3H1jp0 (struct   student *LfrtBcR3N) {
    int n4u7aUJLrsq;
    struct   student *c5IP1K6EqC, *X1pAVv;
    n4u7aUJLrsq = (615 - 615);
    c5IP1K6EqC = LfrtBcR3N;
    if (LfrtBcR3N != NULL)
        while (c5IP1K6EqC != NULL) {
            (*c5IP1K6EqC).Dda0Zb8Px = (709 - 709);
            if ((1051 - 971) < (*c5IP1K6EqC).v8T4o7ZjF && (*c5IP1K6EqC).w2qUmOskQ0Z != (982 - 982))
                (*c5IP1K6EqC).Dda0Zb8Px += (8522 - 522);
            else
                (*c5IP1K6EqC).Dda0Zb8Px += (592 - 592);
            if ((643 - 558) < (*c5IP1K6EqC).v8T4o7ZjF && (*c5IP1K6EqC).num2 > (564 - 484))
                (*c5IP1K6EqC).Dda0Zb8Px += (4440 - 440);
            else
                (*c5IP1K6EqC).Dda0Zb8Px += (769 - 769);
            if ((1072 - 982) < (*c5IP1K6EqC).v8T4o7ZjF)
                (*c5IP1K6EqC).Dda0Zb8Px += (2797 - 797);
            else
                (*c5IP1K6EqC).Dda0Zb8Px += (116 - 116);
            if ((970 - 885) < (*c5IP1K6EqC).v8T4o7ZjF && !('Y' != (*c5IP1K6EqC).Ma138Is))
                (*c5IP1K6EqC).Dda0Zb8Px += (1298 - 298);
            else
                (*c5IP1K6EqC).Dda0Zb8Px += (310 - 310);
            if ((591 - 511) < (*c5IP1K6EqC).num2 && !('Y' != (*c5IP1K6EqC).xf3lcdK))
                (*c5IP1K6EqC).Dda0Zb8Px += 850;
            else
                (*c5IP1K6EqC).Dda0Zb8Px += (664 - 664);
            n4u7aUJLrsq += (*c5IP1K6EqC).Dda0Zb8Px;
            c5IP1K6EqC = c5IP1K6EqC->YpgCfodR;
        }
    c5IP1K6EqC = LfrtBcR3N;
    X1pAVv = LfrtBcR3N;
    X1pAVv->Dda0Zb8Px = (278 - 278);
    if (LfrtBcR3N != NULL)
        while (c5IP1K6EqC != NULL) {
            if (X1pAVv->Dda0Zb8Px < c5IP1K6EqC->Dda0Zb8Px)
                X1pAVv = c5IP1K6EqC;
            c5IP1K6EqC = c5IP1K6EqC->YpgCfodR;
        }
    printf ("%s\n%d\n", X1pAVv->gDepxXMfn0cr, X1pAVv->Dda0Zb8Px);
    printf ("%d", n4u7aUJLrsq);
}

void  main () {
    struct   student *LfrtBcR3N;
    gy3H1jp0 (LfrtBcR3N);
    LfrtBcR3N = X9S0QHvy ();
}

