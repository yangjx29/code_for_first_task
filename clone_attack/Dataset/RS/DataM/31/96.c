struct   stu {
    char QK71TgAOdSj [100];
    char l3MNKWHVYvsZ [100];
    char sex [3];
    char QiBJd47VhN3 [10];
    char mt9ydSxT [10];
    char Xcw9gQb [100];
    struct   stu *qiD2No;
    struct   stu *PabYI4q;
};
int main (int b1ovN4H8, char *iQMBHDYusG []) {
    struct   stu *jUgFPzKbkVW, *bMiVDuO, *gMeA6ZSyJfNh;
    int C6gq7dn23P;
    int sxjksM56R9w;
    C6gq7dn23P = (659 - 659);
    sxjksM56R9w = 0;
    char BXL890nr [100];
    bMiVDuO = (struct   stu *) malloc (len);
    scanf (" %s %s %s %s %s %s", bMiVDuO->QK71TgAOdSj, bMiVDuO->l3MNKWHVYvsZ, bMiVDuO->sex, bMiVDuO->QiBJd47VhN3, bMiVDuO->mt9ydSxT, bMiVDuO->Xcw9gQb);
    bMiVDuO->qiD2No = NULL;
    bMiVDuO->PabYI4q = NULL;
    jUgFPzKbkVW = bMiVDuO;
    gMeA6ZSyJfNh = bMiVDuO;
    for (; 1;) {
        scanf ("%s", BXL890nr);
        if (BXL890nr[0] == 'e') {
            break;
        }
        C6gq7dn23P = C6gq7dn23P +1;
        bMiVDuO = (struct   stu *) malloc (len);
        strcpy (bMiVDuO->QK71TgAOdSj, BXL890nr);
        scanf ("%s %s %s %s %s", bMiVDuO->l3MNKWHVYvsZ, bMiVDuO->sex, bMiVDuO->QiBJd47VhN3, bMiVDuO->mt9ydSxT, bMiVDuO->Xcw9gQb);
        bMiVDuO->qiD2No = NULL;
        bMiVDuO->PabYI4q = gMeA6ZSyJfNh;
        gMeA6ZSyJfNh->qiD2No = bMiVDuO;
        gMeA6ZSyJfNh = bMiVDuO;
    }
    for (; gMeA6ZSyJfNh;) {
        free (bMiVDuO);
        printf ("%s %s %s %s %s %s\n", gMeA6ZSyJfNh->QK71TgAOdSj, gMeA6ZSyJfNh->l3MNKWHVYvsZ, gMeA6ZSyJfNh->sex, gMeA6ZSyJfNh->QiBJd47VhN3, gMeA6ZSyJfNh->mt9ydSxT, gMeA6ZSyJfNh->Xcw9gQb);
        bMiVDuO = gMeA6ZSyJfNh;
        gMeA6ZSyJfNh = gMeA6ZSyJfNh->PabYI4q;
    }
    return 0;
}

