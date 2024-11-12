struct   student {
    char zUbOvI [(536 - 436)];
    char rYjcIR5ebSo [(238 - 138)];
    char B7XL6iIsRWUh;
    int mDO1Wz8Ly;
    char N74kPDElGw [(927 - 827)];
    char mCXzce1QS [(771 - 671)];
    struct   student *xBGkl4, *jQryX9YJ;
};
void  main () {
    struct   student *DFDbMvxQEs;
    struct   student *uMsNoYF;
    struct   student *CT7DVFp;
    struct   student *KXcl7frdNg;
    int eQFdvUm18j = (243 - 243);
    char n91q8lAjh7 [(236 - 136)];
    CT7DVFp = NULL;
    DFDbMvxQEs = uMsNoYF = NULL;
    for (; scanf ("%s", n91q8lAjh7), strcmp (n91q8lAjh7, "end") != (414 - 414);) {
        DFDbMvxQEs = (struct   student *) malloc (sizeof (struct   student));
        DFDbMvxQEs->xBGkl4 = NULL;
        DFDbMvxQEs->jQryX9YJ = NULL;
        strcpy (DFDbMvxQEs->zUbOvI, n91q8lAjh7);
        scanf ("%s %c %d %s %s", DFDbMvxQEs->rYjcIR5ebSo, &DFDbMvxQEs->B7XL6iIsRWUh, &DFDbMvxQEs->mDO1Wz8Ly, DFDbMvxQEs->N74kPDElGw, DFDbMvxQEs->mCXzce1QS);
        eQFdvUm18j = eQFdvUm18j + (195 - 194);
        if (!((846 - 845) != eQFdvUm18j))
            CT7DVFp = DFDbMvxQEs;
        else {
            uMsNoYF->jQryX9YJ = DFDbMvxQEs;
            DFDbMvxQEs->xBGkl4 = uMsNoYF;
        }
        uMsNoYF = DFDbMvxQEs;
    }
    KXcl7frdNg = uMsNoYF;
    for (; uMsNoYF != NULL;) {
        printf ("%s %s %c %d %s %s\n", uMsNoYF->zUbOvI, uMsNoYF->rYjcIR5ebSo, uMsNoYF->B7XL6iIsRWUh, uMsNoYF->mDO1Wz8Ly, uMsNoYF->N74kPDElGw, uMsNoYF->mCXzce1QS);
        uMsNoYF = uMsNoYF->xBGkl4;
    }
}

