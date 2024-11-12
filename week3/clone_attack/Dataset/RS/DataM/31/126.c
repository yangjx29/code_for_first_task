struct   student {
    char eRtxls4kfi [50];
    char ovtVUwPp [50];
    char mYDItLZ8l;
    int RpNwHasT1QY;
    char ckpnI6tEvCeG [(417 - 407)];
    char mCGbwht2M0ng [20];
    struct   student *jPqAmu8NW4Ul;
};
int main () {
    struct   student *VbViwapkj, *BV5NLK7gm;
    BV5NLK7gm = (struct   student *) malloc (LEN);
    scanf ("%s %s %c %d %s %s", BV5NLK7gm->eRtxls4kfi, BV5NLK7gm->ovtVUwPp, &BV5NLK7gm->mYDItLZ8l, &BV5NLK7gm->RpNwHasT1QY, BV5NLK7gm->ckpnI6tEvCeG, BV5NLK7gm->mCGbwht2M0ng);
    BV5NLK7gm->jPqAmu8NW4Ul = NULL;
    VbViwapkj = BV5NLK7gm;
    BV5NLK7gm = (struct   student *) malloc (LEN);
    scanf ("%s", BV5NLK7gm->eRtxls4kfi);
    for (; !(0 == strcmp (BV5NLK7gm->eRtxls4kfi, "end"));) {
        scanf ("%s %c %d %s %s", BV5NLK7gm->ovtVUwPp, &BV5NLK7gm->mYDItLZ8l, &BV5NLK7gm->RpNwHasT1QY, BV5NLK7gm->ckpnI6tEvCeG, BV5NLK7gm->mCGbwht2M0ng);
        BV5NLK7gm->jPqAmu8NW4Ul = VbViwapkj;
        VbViwapkj = BV5NLK7gm;
        BV5NLK7gm = (struct   student *) malloc (LEN);
        scanf ("%s", BV5NLK7gm->eRtxls4kfi);
    }
    printf ("%s %s %c %d %s %s\n", VbViwapkj->eRtxls4kfi, VbViwapkj->ovtVUwPp, VbViwapkj->mYDItLZ8l, VbViwapkj->RpNwHasT1QY, VbViwapkj->ckpnI6tEvCeG, VbViwapkj->mCGbwht2M0ng);
    for (; VbViwapkj->jPqAmu8NW4Ul != NULL;) {
        VbViwapkj = VbViwapkj->jPqAmu8NW4Ul;
        printf ("%s %s %c %d %s %s\n", VbViwapkj->eRtxls4kfi, VbViwapkj->ovtVUwPp, VbViwapkj->mYDItLZ8l, VbViwapkj->RpNwHasT1QY, VbViwapkj->ckpnI6tEvCeG, VbViwapkj->mCGbwht2M0ng);
    }
    return 0;
}

