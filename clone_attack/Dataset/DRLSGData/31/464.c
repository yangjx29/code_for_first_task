struct   node {
    struct   node *OwxeQNhJg;
    char CqT597uM [(814 - 794)];
    char eI8K9fP5rO4v [(374 - 354)];
    char sjwXfSH5W;
    int CvTxwlendCcG;
    char B6FD4MS [(157 - 147)];
    char mwy2B7mQ [(254 - 234)];
    struct   node *DZL3cmTqI2;
};
void  main () {
    char ooOfeJ [] = "end";
    char Di9XgjoFf [(875 - 855)];
    struct   node *YAlOSqFMm;
    struct   node *YdwMf16;
    YAlOSqFMm = (struct   node *) malloc (sizeof (struct   node));
    YdwMf16 = YAlOSqFMm;
    scanf ("%s %s %c %d %s %s", YAlOSqFMm->CqT597uM, YAlOSqFMm->eI8K9fP5rO4v, &YAlOSqFMm->sjwXfSH5W, &YAlOSqFMm->CvTxwlendCcG, YAlOSqFMm->B6FD4MS, YAlOSqFMm->mwy2B7mQ);
    scanf ("%s", Di9XgjoFf);
    YdwMf16->OwxeQNhJg = NULL;
    for (; strcmp (Di9XgjoFf, ooOfeJ) != (687 - 687);) {
        YAlOSqFMm->DZL3cmTqI2 = (struct   node *) malloc (sizeof (struct   node));
        YAlOSqFMm->DZL3cmTqI2->OwxeQNhJg = YAlOSqFMm;
        YAlOSqFMm = YAlOSqFMm->DZL3cmTqI2;
        strcpy (YAlOSqFMm->CqT597uM, Di9XgjoFf);
        scanf ("%s %c %d %s %s", YAlOSqFMm->eI8K9fP5rO4v, &YAlOSqFMm->sjwXfSH5W, &YAlOSqFMm->CvTxwlendCcG, YAlOSqFMm->B6FD4MS, YAlOSqFMm->mwy2B7mQ);
        scanf ("%s", Di9XgjoFf);
    }
    do {
        printf ("%s %s %c %d %s %s\n", YAlOSqFMm->CqT597uM, YAlOSqFMm->eI8K9fP5rO4v, YAlOSqFMm->sjwXfSH5W, YAlOSqFMm->CvTxwlendCcG, YAlOSqFMm->B6FD4MS, YAlOSqFMm->mwy2B7mQ);
        YAlOSqFMm = YAlOSqFMm->OwxeQNhJg;
    }
    while (YAlOSqFMm != NULL);
}

