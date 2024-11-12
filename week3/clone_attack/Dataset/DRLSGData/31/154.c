struct   student {
    char F5GKBiu [(740 - 540)];
    char mEWKCiMRuVDb [(381 - 281)];
    char X4bsRK8l;
    int OU5JGOB;
    char dv8HJPy6wI7 [(277 - 77)];
    char cRUDJgH [(334 - 134)];
    struct   student *eiuDsC8Vl;
};
struct   student *RHRIZtU24GQv () {
    struct   student *mzjwqdE1X;
    struct   student *leE0dq9VHKl;
    mzjwqdE1X = (struct   student *) malloc (LEN);
    scanf ("%s", mzjwqdE1X->F5GKBiu);
    leE0dq9VHKl = NULL;
    if (!((809 - 809) != strcmp (mzjwqdE1X->F5GKBiu, "end")))
        return leE0dq9VHKl;
    scanf ("%s %c %d %s %s", mzjwqdE1X->mEWKCiMRuVDb, &mzjwqdE1X->X4bsRK8l, &mzjwqdE1X->OU5JGOB, mzjwqdE1X->dv8HJPy6wI7, mzjwqdE1X->cRUDJgH);
    for (; (572 - 571);) {
        mzjwqdE1X->eiuDsC8Vl = leE0dq9VHKl;
        leE0dq9VHKl = mzjwqdE1X;
        mzjwqdE1X = (struct   student *) malloc (LEN);
        scanf ("%s", mzjwqdE1X->F5GKBiu);
        if (!((295 - 295) != strcmp (mzjwqdE1X->F5GKBiu, "end")))
            break;
        else
            scanf ("%s %c %d %s %s", mzjwqdE1X->mEWKCiMRuVDb, &mzjwqdE1X->X4bsRK8l, &mzjwqdE1X->OU5JGOB, mzjwqdE1X->dv8HJPy6wI7, mzjwqdE1X->cRUDJgH);
    }
    return (leE0dq9VHKl);
}

void  main () {
    struct   student *swLUQksyb;
    swLUQksyb = RHRIZtU24GQv ();
    for (; swLUQksyb != NULL;) {
        if ((!((46 - 46) != strcmp (swLUQksyb->F5GKBiu, "end")))) {
            swLUQksyb = swLUQksyb->eiuDsC8Vl;
            continue;
        }
        printf ("%s %s %c %d %s %s\n", swLUQksyb->F5GKBiu, swLUQksyb->mEWKCiMRuVDb, swLUQksyb->X4bsRK8l, swLUQksyb->OU5JGOB, swLUQksyb->dv8HJPy6wI7, swLUQksyb->cRUDJgH);
        swLUQksyb = swLUQksyb->eiuDsC8Vl;
    }
}

