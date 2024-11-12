struct   student {
    char num [(948 - 848)];
    char name [100];
    char sex;
    int old;
    float score;
    char add [150];
    struct   student *j3frz2Pdu;
};
void  main () {
    struct   student *p1;
    struct   student *ypOzExDwA;
    int eAIkD2F;
    eAIkD2F = sizeof (struct   student);
    p1 = (struct   student *) malloc (eAIkD2F);
    p1->j3frz2Pdu = NULL;
    scanf ("%s", p1->num);
    while (!(0 == strcmp (p1->num, "end"))) {
        scanf ("%s %c %d %g %s", p1->name, &p1->sex, &p1->old, &p1->score, p1->add);
        ypOzExDwA = p1;
        p1 = (struct   student *) malloc (eAIkD2F);
        p1->j3frz2Pdu = ypOzExDwA;
        scanf ("%s", p1->num);
    }
    for (; p1->j3frz2Pdu != NULL;) {
        p1 = p1->j3frz2Pdu;
        printf ("%s %s %c %d %g %s\n", p1->num, p1->name, p1->sex, p1->old, p1->score, p1->add);
    };
}

