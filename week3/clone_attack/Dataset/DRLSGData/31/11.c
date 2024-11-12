struct   stu {
    char hZBk8YN [(56 - 36)];
    char PlaMq9C0oQ [(927 - 907)];
    char DzivItV;
    int Qk2baUglB;
    char mZ9KGmRX [(756 - 746)];
    char L9oiRT [(924 - 904)];
    struct   stu *XXISNa;
};
void  main () {
    struct   stu *kV2WJQjqODp;
    struct   stu *d0LTlcn1;
    int JkyWl9pL;
    kV2WJQjqODp = d0LTlcn1 = (struct   stu *) malloc (LEN);
    JkyWl9pL = (788 - 788);
    scanf ("%s", kV2WJQjqODp->hZBk8YN);
    if (!((32 - 32) != strcmp (kV2WJQjqODp->hZBk8YN, "end"))) {
        JkyWl9pL = -(447 - 446);
        d0LTlcn1 = NULL;
    }
    else
        scanf ("%s %c %d %s %s", kV2WJQjqODp->PlaMq9C0oQ, &kV2WJQjqODp->DzivItV, &kV2WJQjqODp->Qk2baUglB, kV2WJQjqODp->mZ9KGmRX, kV2WJQjqODp->L9oiRT);
    for (; (169 - 169) <= JkyWl9pL;) {
        JkyWl9pL += (954 - 953);
        if (!((617 - 616) != JkyWl9pL))
            kV2WJQjqODp->XXISNa = NULL;
        else
            kV2WJQjqODp->XXISNa = d0LTlcn1;
        d0LTlcn1 = kV2WJQjqODp;
        kV2WJQjqODp = (struct   stu *) malloc (LEN);
        scanf ("%s", kV2WJQjqODp->hZBk8YN);
        if (!((505 - 505) != strcmp (kV2WJQjqODp->hZBk8YN, "end")))
            break;
        scanf ("%s %c %d %s %s", kV2WJQjqODp->PlaMq9C0oQ, &kV2WJQjqODp->DzivItV, &kV2WJQjqODp->Qk2baUglB, kV2WJQjqODp->mZ9KGmRX, kV2WJQjqODp->L9oiRT);
    }
    for (; d0LTlcn1 != NULL;) {
        printf (A, d0LTlcn1->hZBk8YN, d0LTlcn1->PlaMq9C0oQ, d0LTlcn1->DzivItV, d0LTlcn1->Qk2baUglB, d0LTlcn1->mZ9KGmRX, d0LTlcn1->L9oiRT);
        d0LTlcn1 = d0LTlcn1->XXISNa;
    }
}

